#include "Game.h"
#include "UnrealContainers.h"

namespace Looting
{
	FFortLootTierData* GetLootTierData(std::vector<FFortLootTierData*>& LootTierData)
	{
		float TotalWeight = 0;

		for (auto Item : LootTierData)
			TotalWeight += Item->Weight;

		float WeightToUse = UKismetMathLibrary::GetDefaultObj()->RandomFloatInRange(0, TotalWeight);

		FFortLootTierData* ItemToReturn = nullptr;

		for (auto Item : LootTierData)
		{
			if (WeightToUse <= Item->Weight)
			{
				ItemToReturn = Item;
				break;
			}

			WeightToUse -= Item->Weight;
		}

		if (!ItemToReturn)
			return GetLootTierData(LootTierData);

		return ItemToReturn;
	}
	FFortLootPackageData* GetLootPackage(std::vector<FFortLootPackageData*>& LootPackages)
	{
		float TotalWeight = 0;

		for (auto Item : LootPackages)
			TotalWeight += Item->Weight;

		float WeightToUse = UKismetMathLibrary::GetDefaultObj()->RandomFloatInRange(0, TotalWeight);

		FFortLootPackageData* ItemToReturn = nullptr;

		for (auto Item : LootPackages)
		{
			if (WeightToUse <= Item->Weight)
			{
				ItemToReturn = Item;
				break;
			}

			WeightToUse -= Item->Weight;
		}

		if (!ItemToReturn)
			return GetLootPackage(LootPackages);

		return ItemToReturn;
	}

	std::vector<FFortItemEntry> PickLootDrops(FName LootTierGroup, int ReturnAmount)
	{
		std::vector<FFortItemEntry> LootDrops{};

		if (ReturnAmount >= 5)
			return LootDrops;

		static UDataTable* LootTierDataTable = GetGameState()->CurrentPlaylistInfo.BasePlaylist->LootTierData.Get();
		static UDataTable* LootPackageTable = GetGameState()->CurrentPlaylistInfo.BasePlaylist->LootPackages.Get();

		if (!LootTierDataTable || !LootPackageTable)
		{
			LOG_F(WARNING, "Null DataTables");
			return LootDrops;
		}

		std::vector<FFortLootTierData*> TierGroupLootTierData;

		auto& LootTierDataRowMap = *(UE::TMap<FName, FFortLootTierData*>*)(__int64(LootTierDataTable) + 0x30);

		for (int i = 0; i < LootTierDataRowMap.Pairs.Elements.Data.Num(); i++)
		{
			auto& CurrentLootTierData = LootTierDataRowMap.Pairs.Elements.Data[i].ElementData.Value;

			if (LootTierGroup == CurrentLootTierData.Second->TierGroup && CurrentLootTierData.Second->Weight != 0)
			{
				TierGroupLootTierData.push_back(CurrentLootTierData.Second);
			}
		}

		if (TierGroupLootTierData.size() == 0)
		{
			LOG_F(ERROR, "Failed to find any LootTierData!");
			return LootDrops;
		}

		FFortLootTierData* ChosenLootTierData = GetLootTierData(TierGroupLootTierData);

		/*
			this whole block we are essentially making sure the amount of loot to drop is correct
		*/

		if (ChosenLootTierData->NumLootPackageDrops <= 0)
			return PickLootDrops(LootTierGroup, ++ReturnAmount);

		if (ChosenLootTierData->LootPackageCategoryMinArray.Num() != ChosenLootTierData->LootPackageCategoryWeightArray.Num() || ChosenLootTierData->LootPackageCategoryMinArray.Num() != ChosenLootTierData->LootPackageCategoryMaxArray.Num())
			return PickLootDrops(LootTierGroup, ++ReturnAmount);

		int TotalLootPackageCategoryWeightArray = 0;
		int TotalLootPackageMinArray = 0;

		for (int i = 0; i < ChosenLootTierData->LootPackageCategoryWeightArray.Num(); i++)
		{
			if (ChosenLootTierData->LootPackageCategoryWeightArray[i] > 0)
			{
				if (ChosenLootTierData->LootPackageCategoryMaxArray[i] < 0)
					TotalLootPackageCategoryWeightArray += ChosenLootTierData->LootPackageCategoryWeightArray[i];
			}
		}

		for (int i = 0; i < ChosenLootTierData->LootPackageCategoryMinArray.Num(); i++)
		{
			if (ChosenLootTierData->LootPackageCategoryMinArray[i] > 0)
			{
				if (ChosenLootTierData->LootPackageCategoryMaxArray[i] < 0)
					TotalLootPackageMinArray += ChosenLootTierData->LootPackageCategoryWeightArray[i];
			}
		}

		if (TotalLootPackageCategoryWeightArray > TotalLootPackageMinArray)
			return PickLootDrops(LootTierGroup, ++ReturnAmount);

		std::vector<FFortLootPackageData*> TierGroupLootPackages;

		auto& LootPackagesRowMap = *(UE::TMap<FName, FFortLootPackageData*>*)(__int64(LootPackageTable) + 0x30);

		for (int i = 0; i < LootPackagesRowMap.Pairs.Elements.Data.Num(); i++)
		{
			auto& CurrentLootPackage = LootPackagesRowMap.Pairs.Elements.Data[i].ElementData.Value;

			if (!CurrentLootPackage.Second)
				continue;

			if (CurrentLootPackage.Second->LootPackageID == ChosenLootTierData->LootPackage && CurrentLootPackage.Second->Weight != 0)
			{
				TierGroupLootPackages.push_back(CurrentLootPackage.Second);
			}
		}

		auto ChosenLootPackageName = ChosenLootTierData->LootPackage.ToString();

		if (ChosenLootPackageName.contains(".Empty"))
		{
			return PickLootDrops(LootTierGroup);
		}

		/*
		 ill update this comment in the morning, i still cant explain this without rewriting it 1 million times
		*/
		float NumLootPackageDrops = std::floor(ChosenLootTierData->NumLootPackageDrops);

		LootDrops.reserve(NumLootPackageDrops);

		for (float Index = 0; Index < NumLootPackageDrops; Index++)
		{
			if (Index >= TierGroupLootPackages.size())
				break;

			auto TierGroupLootPackage = TierGroupLootPackages.at(Index);
			auto TierGroupLootPackageString = TierGroupLootPackage->LootPackageCall.ToString();

			if (TierGroupLootPackageString.contains(".Empty"))
			{
				NumLootPackageDrops++;
				continue;
			}

			std::vector<FFortLootPackageData*> LootPackageCalls;

			if (ChosenLootPackageName.contains("WorldList"))
			{
				if (TierGroupLootPackage->Weight != 0)
					LootPackageCalls.push_back(TierGroupLootPackage);
			}
			else
			{
				for (int i = 0; i < LootPackagesRowMap.Pairs.Elements.Data.Num(); i++)
				{
					auto& CurrentLootPackage = LootPackagesRowMap.Pairs.Elements.Data[i].ElementData.Value;

					if (CurrentLootPackage.Second->LootPackageID.ToString() == TierGroupLootPackageString && CurrentLootPackage.Second->Weight != 0)
						LootPackageCalls.push_back(CurrentLootPackage.Second);
				}
			}

			if (LootPackageCalls.size() == 0)
			{
				NumLootPackageDrops++;
				continue;
			}

			FFortLootPackageData* LootPackageCall = GetLootPackage(LootPackageCalls);

			if (!LootPackageCall)
				continue;

			auto ItemDef = LootPackageCall->ItemDefinition.Get();

			if (!ItemDef)
			{
				NumLootPackageDrops++;
				continue;
			}

			FFortItemEntry LootDropEntry{};
			LootDropEntry.ItemDefinition = ItemDef;
			LootDropEntry.Count = LootPackageCall->Count;

			LootDrops.push_back(LootDropEntry);
		}

		return LootDrops;
	}
}