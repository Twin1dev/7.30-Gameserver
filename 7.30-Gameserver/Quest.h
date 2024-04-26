#pragma once

#include "UnrealContainers.h"

class Quests
{
private:
	static void CompleteQuest(AFortPlayerControllerAthena* PlayerController, UFortQuestItemDefinition* QuestDefinition, FName BackendName)
	{
		if (!QuestDefinition)
			return;
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
					return;
				}

				auto DataTable = Objective.ObjectiveStatHandle.DataTable;

				auto RowMap = *(UE::TMap<FName, uint8_t*>*)(__int64(DataTable) + 0x30);

				for (int z = 0; z < RowMap.)

			}
		}
	}
};