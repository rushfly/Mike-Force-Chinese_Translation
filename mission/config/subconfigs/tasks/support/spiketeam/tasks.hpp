class support_st_brightlight : support_task
{
	taskcategory = "SUP";
	tasktitle = $STR_Brightlight;
	taskname = $STR_Brightlight;
	taskdesc = $STR_BrightlightDesc;
	tasktype = "box";
	taskimage = "vn\missions_f_vietnam\data\img\mikeforce\su\vn_ui_mf_task_sts1.jpg";
	taskgroups[] = {"SpikeTeam"};
	requestgroups[] = {"GreenHornets"};
	rankpoints = 10;
	taskprogress = 0;

	requesterDesc = $STR_Requst_BrightlightDesc;

	//The script called when the task is created.
	taskScript = "vn_mf_fnc_state_machine_task_system";

	//Data for the script to use to customise behaviour
	class parameters
	{
		stateMachineCode = "vn_mf_fnc_task_sup_brightlight";
		posToReturnTo[] = {"marker", "mf_respawn_greenhornets"};
	};

	//Data for subtasks. These are specific to the script.
	class find_aircrew
	{
		taskname = $STR_find_aircrew;
		taskdesc = $STR_find_aircrewDesc;

		//Data to customise
		//These are specific to each subtask for each mission - see mission documentation.
		class parameters
		{
		};
	};

	class protect_aircrew
	{
		taskname = $STR_protect_aircrew;
		taskdesc = $STR_protect_aircrewDesc;

		//Data to customise
		//These are specific to each subtask for each mission - see mission documentation.
		class parameters
		{
		};
	};
};

class support_st_searchAndDestroy : support_task
{
	taskcategory = "SUP";
	tasktitle = $STR_Destroy_Emplacements;
	taskname = $STR_Destroy_Emplacements;
	taskdesc = $STR_Destroy_EmplacementsDesc;
	tasktype = "box";
	taskgroups[] = {"SpikeTeam"};
	requestgroups[] = {"GreenHornets", "MikeForce", "SpikeTeam"};
	rankpoints = 10;
	taskprogress = 0;

	requesterDesc = $STR_Request_Destroy_EmplacementsDesc;

	//The script called when the task is created.
	taskScript = "vn_mf_fnc_state_machine_task_system";

	//Data for the script to use to customise behaviour
	class parameters
	{
		stateMachineCode = "vn_mf_fnc_task_sup_destroy_target";
		targetTypes[] = {"StaticWeapon"};
	};

	//Data for subtasks. These are specific to the script.
	class destroy_targets
	{
		taskname = $STR_destroy_targets;
		taskdesc = $STR_destroy_targetsDesc;
	};
};
