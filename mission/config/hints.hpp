class CfgHints
{
	class Overview {
		displayName = "Overview";

		class Tutorial {
			displayName = $STR_Tutorial;
			displayNameShort = $STR_Tutorial;
			description = $STR_TutorialDesc;
			// image = ""; 
			// Note: No Image
		};

		class Gamemode {
			displayName = $STR_Gamemode;
			displayNameShort = $STR_Gamemode;
			description = $STR_GamemodeDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\mission_strategy.paa";
		};

		class Task_Roster {
			displayName = $STR_Task_Roster;
			displayNameShort = $STR_Task_Roster;
			description = $STR_Task_RosterDesc;
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image
		};

		class Field_Manual {
			displayName = $STR_Field_Manual;
			displayNameShort = $STR_Field_Manual;
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image
		};

		class Gearing_Up {
			displayName = $STR_Gearing_Up;
			displayNameShort = $STR_Gearing_Up;
			description = $STR_Gearing_UpDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\arsenal.paa";
		};

		class Fast_Travel {
			displayName = $STR_Fast_Travel;
			displayNameShort = $STR_Fast_Travel;
			description = $STR_Fast_TravelDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\map.paa";
		};
	};

	class Building {
		displayName = $STR_Building;

		class Overview {
			displayName = $STR_Building_Overview;
			displayNameShort = $STR_Building_Overview;
			description = $STR_Building_OverviewDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\build_menu.paa";
		};

		class Placing {
			displayName = $STR_Building_Placing;
			displayNameShort = $STR_Building_Placing;
			description = $STR_Building_PlacingDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\ghost_building.paa";
		};

		class Finishing {
			//displayName = "Finishing a Structure";
			displayName = $STR_Building_Finishing;
			displayNameShort = $STR_Building_Finishing;
			description = $STR_Building_FinishingDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\ghost_building.paa";
		}

		class Resupplying {
			displayName = $STR_Building_Resupplying;
			displayNameShort = $STR_Building_Resupplying;
			description = $STR_Building_ResupplyingDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\decay.paa";
		};

		class Decay {
			displayName = $STR_Building_Decay;
			displayNameShort = $STR_Building_Decay;
			description = $STR_Building_DecayDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\decay.paa";
			//Note: The doc said the radial menu image, but I couldn't find one that made sense, so I just inserted the decay image.
		};

		class Bases {
			displayName = "FOBs";
			displayNameShort = "Starting FOBs";
			description = $STR_Bases_Description;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\situation_room.paa";
		};
		
		class Medical_Tent {
			displayName = $STR_Medical_Tent;
			displayNameShort = $STR_Medical_Tent;
			description = $STR_Medical_Tent_Description;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\medical_tent.paa";
		};

		class Checkpoint {
			displayName = $STR_Checkpoint;
			displayNameShort = $STR_Checkpoint;
			description = $STR_CheckpointDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\checkpoint.paa";
		};

		class Construction {
			displayName = $STR_Construction;
			displayNameShort = $STR_Construction;
			description = $STR_ConstructionDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\build_menu.paa";
		};

	};
		
	class Deployment {
		//displayName = "Deployment";
		displayName = $STR_Deployment;

		class Duty_Officer {
			displayName = $STR_Duty_Officer;
			displayNameShort = $STR_vn_mf_duty_officer;
			description = $STR_Duty_OfficerDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\duty_officer.paa";
		};
	};

	class Environment {
		displayName = $STR_Environment;

		class Snakes {
			displayName = $STR_Snakes;
			displayNameShort = $STR_Snake_Bite;
			description = $STR_Snake_Desc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\snake.paa";
		};

		class Night {
			displayName = $STR_Night_Fight;
			displayNameShort = $STR_Night_Fight;
			description = $STR_Night_FightDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\FOB_flare.paa";
		};

	};

	class Gameplay {
		displayName = "Gameplay";

		class Respawning_Checkpoint {
			displayName = $STR_Respawning;
			displayNameShort = $STR_SHT_Respawn;
			description = $STR_RespawnDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\checkpoint_supplies.paa";
		};

		class Needs {
			displayName = $STR_Needs;
			displayNameShort = $STR_Needs;
			description = $STR_NeedsDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\drink_food.paa";
		};

		class Counterattack {
			displayName = $STR_Counterattack
			displayNameShort = $STR_Counterattack;
			description = $STR_CounterattackDesc;
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
		};

		class Tasks {
			displayName = $STR_Tasks;
			displayNameShort = $STR_SHT_Task;
			description = $STR_Task_Desc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\AA.paa";
		};

		class Logistics {
			displayName = $STR_Logistics_Inventory;
			displayNameShort = $STR_Logistics_Inventory;
			description = $STR_Logistics_InventoryDesc;
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\logistic_menu.paa";
		};

	};

	class Logistics {
		displayName = $STR_Logistics;

		class Supplies {
			displayName = $STR_Supplies;
			displayNameShort = $STR_Supplies;
			description = $STR_SuppliesDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\supply_officer.paa";
		};

		class Vehicles {
			displayName = $STR_Vehicle_Creation;
			displayNameShort = $STR_Vehicle_Creation;
			description = $STR_Vehicle_CreationDesc;
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
		};

		class Wrecks {
			displayName = $STR_Wreck_Recovery;
			displayNameShort = $STR_Wreck_Recovery;
			description = $STR_Wreck_RecoveryDesc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\wreck_packing.paa";
		};

		class Support_Tasks {
			displayName = $STR_Support_Tasks;
			displayNameShort = $STR_Support_Tasks;
			description = $STR_Support_TasksDesc;
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
		};

	};

	class Module {
		displayName = $STR_Module;

		class Downed {
			displayName = $STR_Downed;
			displayNameShort = $STR_Withstand;
			description = $STR_WithstandDesc;
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
		};

		class Master_Arm {
			displayName = $STR_Master_Arm;
			displayNameShort = $STR_Master_SHT_Arm;
			description = $STR_Master_ArmDesc;
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
		};

	};

	class Player {
		displayName = $STR_Player_Info;
				
		class Rank {
			displayName = $STR_Rank;
			displayNameShort = $STR_SHT_Rank;
			description = $STR_Rank_Promoted;
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
		};

	};

	class Team {
		displayName = $STR_Team;

		class Mike_Force {
			displayName =$STR_SHT_Mike_Force;
			displayNameShort = $STR_Mike_Force_displayNameShort;
			description = $STR_Mike_Force_Desc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\mike_force.paa";
		};

		class Green_Hornets {
			displayName = $STR_SHT_GreenHornets;
			displayNameShort = $STR_GreenHornets_GreenHornets;
			description = $STR_STR_GreenHornets_Desc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\green_hornet.paa";
		};

		class ACAV {
			displayName = $STR_SHT_ACAV;
			displayNameShort = $STR_ACAV_displayName;
			description = $STR_ACAV_Desc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\acav.paa";
		};

		class Close_Air {
			displayName = $STR_Close_Air;
			displayNameShort = $STR_Close_Air;
			description = $STR_Close_AirDesc;
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
		};

	};

	class Artillery {
		displayName = $STR_Artillery;

		class RTO {
			displayName = $STR_RTO;
			displayNameShort = $STR_SHT_RTO;
			description = $STR_RTO_Desc;
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\arty_support.paa";
		};

	};
};