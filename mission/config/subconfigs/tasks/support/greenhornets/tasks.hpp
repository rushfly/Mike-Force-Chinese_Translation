class support_gh_cas : support_task
{
	taskcategory = "SUP";
	tasktitle = $STR_Close_Air;
	taskname = $STR_Close_Air;
	taskdesc = $STR_Task_Close_AirDesc;
	tasktype = "attack";
	taskimage = "vn\missions_f_vietnam\data\img\mikeforce\s\vn_ui_mf_task_gh3.jpg";
	taskgroups[] = {"GreenHornets"};
	requestgroups[] = {"ACAV", "MikeForce", "SpikeTeam"};
	rankpoints = 10;
	taskprogress = 0;

	requesterDesc = $STR_Request_Close_AirDesc;

	//The script called when the task is created.
	taskScript = "vn_mf_fnc_state_machine_task_system";

	//Data for the script to use to customise behaviour
	class parameters
	{
		stateMachineCode = "vn_mf_fnc_task_sup_cas";
	};

	//Data for subtasks. These are specific to the script.
	class destroy_targets
	{
		taskname = $STR_CAS_destroy_targets;
		taskdesc = $STR_CAS_destroy_targetsDesc;
	};
};