#pragma once

#include "UnrealContainers.h"

class Quests
{
private:
	static void UpdateStat(AFortPlayerControllerAthena* Controller, FName BackendName, UFortQuestItem* Quest, UFortQuestItemDefinition* QuestDefinition, int CurrentStage)
	{
		bool bFound = false;

		for (int i = 0; i < Controller->UpdatedObjectiveStats.Num(); i++)
		{
			if (Controller->UpdatedObjectiveStats[i].BackendName.ComparisonIndex == BackendName.ComparisonIndex)
			{
				bFound = true;

				Controller->UpdatedObjectiveStats[i].BackendName = BackendName;
				Controller->UpdatedObjectiveStats[i].Quest = QuestDefinition;
				Quest->CurrentStage = CurrentStage;
				break;
			}
		}

		if (!bFound)
		{
			FFortUpdatedObjectiveStat Stat{};
			Stat.BackendName = BackendName;
			Stat.Quest = QuestDefinition;
			Quest->CurrentStage = CurrentStage;
			Controller->UpdatedObjectiveStats.Add(Stat);
		}
		
	}
	static void CompleteQuest(AFortPlayerControllerAthena* Controller, UFortQuestItemDefinition* QuestDefinition, FName BackendName/*, UObject* TargetObject*/)
	{
		if (!QuestDefinition)
			return;

		auto Quest = Controller->GetQuestManager(ESubGame::Athena)->GetQuestWithDefinition(QuestDefinition);

		Controller->GetQuestManager(ESubGame::Athena)->ClaimQuestReward(Quest);

		Controller->GetQuestManager(ESubGame::Athena)->SendCustomStatEvent(QuestDefinition->PrerequisiteObjective, 1, true);

		for (int i = 0; i < Quest->Objectives.Num(); i++)
		{
			auto Objective = Quest->Objectives[i];

			if (Objective->BackendName.ComparisonIndex == BackendName.ComparisonIndex)
			{
				bool bCompletedObjective = Objective->AchievedCount + 1 == Objective->RequiredCount;
				bool bQuestCompleted = bCompletedObjective && Quest->GetNumObjectivesComplete() == Quest->Objectives.Num() - 1;

				//Controller->GetQuestManager(ESubGame::Athena)->SendComplexCustomStatEvent(Quest, )

				UpdateStat(Controller, BackendName, Quest, QuestDefinition, Objective->AchievedCount);

				Controller->GetQuestManager(ESubGame::Athena)->SendCustomStatEvent(QuestDefinition->PrerequisiteObjective, 1, true);

				if (bQuestCompleted)
				{
					Controller->GetQuestManager(ESubGame::Athena)->ClaimQuestReward(Quest);
					LOG("Completed again");

					Controller->GetQuestManager(ESubGame::Athena)->SendCustomStatEvent(QuestDefinition->PrerequisiteObjective, 1, true);

				}
			}
			else
			{
				LOG("Invalid2");
			}
			break;
		}

		LOG("Quest updated!");
	}
public:
	static void HandleEvent(AFortPlayerControllerAthena* Controller, EFortQuestObjectiveStatEvent StatEvent, EFortQuestObjectiveItemEvent ItemEvent, UObject* Source, UObject* Target)
	{
		if (!Controller)
			return;

		auto QuestManager = Controller->GetQuestManager(ESubGame::Athena);

		for (int i = 0; i < QuestManager->CurrentQuests.Num(); i++)
		{
			auto QuestDefinition = QuestManager->CurrentQuests[i]->GetQuestDefinitionBP();

			for (int c = 0; c < QuestDefinition->Objectives.Num(); c++)
			{
				auto Objective = QuestDefinition->Objectives[c];

				if (QuestManager->HasCompletedObjectiveWithName(QuestDefinition, QuestDefinition->Objectives[i].BackendName) || (QuestDefinition->GetPrerequisiteObjective().DataTable && !QuestManager->HasCompletedObjective(QuestDefinition, QuestDefinition->GetPrerequisiteObjective())))
					continue;

				if (ItemEvent != EFortQuestObjectiveItemEvent::Max_None && Objective.ItemEvent == ItemEvent)
				{
					CompleteQuest(Controller, QuestDefinition, Objective.BackendName);
					LOG("Quest completed properly!");
					continue;
				}

				static auto DataTable = StaticFindObject<UDataTable>("/Game/Athena/Items/Quests/AthenaObjectiveStatTable.AthenaObjectiveStatTable");

				if (!DataTable)
				{
					LOG("No DataTable");
					continue;
				}

				auto& RowMap = *(UE::TMap<FName, FFortQuestObjectiveStatTableRow*>*)(__int64(DataTable) + 0x30);

				for (int z = 0; z < RowMap.Pairs.Elements.Data.Num(); z++)
				{
					auto& Value = RowMap.Pairs.Elements.Data[z].ElementData.Value;

					if (!Value.Second)
					{
						LOG("Sigmawww11");
						continue;
					}
				

					if (Objective.ObjectiveStatHandle.RowName.ComparisonIndex == Value.First.ComparisonIndex)
					{
						LOG("Sigma");
						if (!QuestDefinition->Objectives.IsValidIndex(c - 1) || QuestManager->HasCompletedObjectiveWithName(QuestDefinition, QuestDefinition->Objectives[c - 1].BackendName))
						{
							auto& Condition = Value.Second->Condition;
							auto& SourceTags = Value.Second->SourceTagContainer.GameplayTags;
							auto& TargetTags = Value.Second->TargetTagContainer.GameplayTags;
							auto Type = Value.Second->Type;

							LOG("Sigamfafyhaf");

							if (Type == StatEvent)
							{
								switch (StatEvent)
								{
								case EFortQuestObjectiveStatEvent::Win:
								{
									
								}
								case EFortQuestObjectiveStatEvent::Emote:
								{
									
								}
								case EFortQuestObjectiveStatEvent::Kill:
								{

								}
								case EFortQuestObjectiveStatEvent::AthenaOutlive:
								{

								}
								case EFortQuestObjectiveStatEvent::Interact:
								{
									if (Target)
									{
										if (Target->IsA(ABuildingContainer::StaticClass()))
										{
											if (Condition.Num() == 0)
											{
												auto Container = (ABuildingContainer*)Target;

												for (size_t g = 0; g < TargetTags.Num(); g++)
												{
													FName& TargetTag = TargetTags[g].TagName;

													for (size_t b = 0; b < Container->StaticGameplayTags.GameplayTags.Num(); b++)
													{
														if (Container->StaticGameplayTags.GameplayTags[b].TagName.ComparisonIndex == TargetTag.ComparisonIndex)
														{
						
															CompleteQuest(Controller, QuestDefinition, Objective.BackendName);
															
															LOG("fucking retard");
															break;
														}
													}
												}
											}
										}
									}
									else
									{
										LOG("Invalid!");
									}
								}
								case EFortQuestObjectiveStatEvent::PlaceTrap:
								{

								}
								case EFortQuestObjectiveStatEvent::RevivePlayer:
								{

								}
								case EFortQuestObjectiveStatEvent::Spray:
								{

								}
								case EFortQuestObjectiveStatEvent::Max_None:
									break;
								case EFortQuestObjectiveStatEvent::EFortQuestObjectiveStatEvent_MAX:
									break;
								default:
									break;
								}

							}
						}
					}
				}
			}
		}
	}
};