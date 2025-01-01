class defend_counterattack : task
{
	taskcategory = "PRI";
	tasktitle = $STR_Defend_Counterattack;
	taskname = $STR_Defend_Counterattack;
	taskdesc = $STR_Defend_Counterattack_Desc;
	tasktype = "defend";
	taskimage = "vn\missions_f_vietnam\data\img\mikeforce\s\vn_ui_mf_task_mf3.jpg";
	rankpoints = 10;
	taskprogress = 10;

	//The script called when the task is created.
	taskScript = "vn_mf_fnc_state_machine_task_system";

	//Data for the script to use to customise behaviour
	class parameters 
	{
		stateMachineCode = "vn_mf_fnc_task_defend_counterattack";
		timeout = -1;
	};

	class prepare_zone 
	{
		taskname = $STR_prepare_zone;
		taskdesc = $STR_prepare_zone_desc;
	};

	class defend_zone
	{
		taskname = $STR_defend_zone;
		taskdesc = $STR_defend_zone_desc;
	};
};

class defend_base : task
{
	taskcategory = "PRI";
	tasktitle = $STR_defend_base;
	taskname = $STR_defend_base;
	taskdesc = $STR_defend_base_desc;
	tasktype = "defend";
	taskimage = "vn\missions_f_vietnam\data\img\mikeforce\s\vn_ui_mf_task_mf3.jpg";
	rankpoints = 10;
	taskprogress = 10;

	//The script called when the task is created.
	taskScript = "vn_mf_fnc_state_machine_task_system";

	//Data for the script to use to customise behaviour
	class parameters 
	{
		stateMachineCode = "vn_mf_fnc_task_defend_base";
		timeout = -1;
	};

	class prepare_base 
	{
		taskname = $STR_prepare_zone;
		taskdesc = $STR_prepare_zone_desc;
	};

	class defend_base
	{
		taskname = $STR_defend_base_task;
		taskdesc = $STR_defend_zone_desc;
	};
};


