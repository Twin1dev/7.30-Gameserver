#pragma once

namespace Inventory
{
	namespace Finding
	{
		/// <summary>
		/// Finds a ItemEntry using a GUID in a playercontrollers inventory
		/// </summary>
		/// <param name="PC"></param>
		/// <param name="ItemGuid"></param>
		/// <returns></returns>
		FFortItemEntry* FindItemEntryByGUID(AFortPlayerController* PC, FGuid ItemGuid)
		{
			for (int i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++)
			{
				if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == ItemGuid)
					return &PC->WorldInventory->Inventory.ReplicatedEntries[i];
			}

			return nullptr;
		}
	}


	static void Update(AFortPlayerController* PC, bool bMark = true)
	{
		// buh?
		PC->WorldInventory->bRequiresLocalUpdate = true;
		PC->WorldInventory->HandleInventoryLocalUpdate();

		if (bMark)
			PC->WorldInventory->Inventory.MarkArrayDirty();
	}


	static UFortWorldItem* GivePCItem(AFortPlayerController* PC, UFortItemDefinition* ItemDef, int Count, int LoadedAmmo = 0)
	{
		if (Count == 0 || !ItemDef)
			return nullptr;

		UFortWorldItem* NewItem = Cast<UFortWorldItem>(ItemDef->CreateTemporaryItemInstanceBP(Count, 1));

		if (!NewItem)
			return nullptr;

		int OverStack = 0;

		if (ItemDef->MaxStackSize > 1)
		{
			for (int i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++)
			{
				auto ItemInstance = PC->WorldInventory->Inventory.ItemInstances[i];

				if (ItemInstance->ItemEntry.ItemDefinition == ItemDef)
				{
					if (ItemInstance->ItemEntry.Count < ItemDef->MaxStackSize || !ItemDef->bAllowMultipleStacks)
					{
						OverStack = ItemInstance->ItemEntry.Count + Count - ItemDef->MaxStackSize;

						if (!ItemDef->bAllowMultipleStacks && !(ItemInstance->ItemEntry.Count < ItemDef->MaxStackSize))
							break;

						auto RepEntry = Finding::FindItemEntryByGUID(PC, ItemInstance->ItemEntry.ItemGuid);

						// that would be quite silly
						if (!RepEntry)
							return nullptr;

						int AmountToStack = OverStack > 0 ? Count - OverStack : Count;

						ItemInstance->ItemEntry.Count += AmountToStack;
						RepEntry->Count += AmountToStack;

						PC->WorldInventory->Inventory.MarkItemDirty(ItemInstance->ItemEntry);
						PC->WorldInventory->Inventory.MarkItemDirty(*RepEntry);

						if (OverStack <= 0)
							return ItemInstance;
					}
				}
			}
		}

		Count = OverStack > 0 ? OverStack : Count;

		NewItem->ItemEntry.Count = Count;
		NewItem->ItemEntry.LoadedAmmo = LoadedAmmo;
		NewItem->SetOwningControllerForTemporaryItem(PC);
		NewItem->OwnerInventory = PC->WorldInventory;

		PC->WorldInventory->Inventory.ItemInstances.Add(NewItem);

		auto& RepEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Add(NewItem->ItemEntry);

		RepEntry.Count = Count;

		RepEntry.LoadedAmmo = LoadedAmmo;

		return NewItem;
	}
}