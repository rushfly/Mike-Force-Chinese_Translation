class capture_zone : task
{
	taskcategory = "PRI";
	//tasktitle = "Capture %1";
	tasktitle = "占领%1";
	//taskname = "Capture %1";
	taskname = "占领%1";
	//taskdesc = "Defeat hostile forces in %1, and destroy their HQ's equipment stockpiles.";
	taskdesc = "击败%1中的敌军，并摧毁他们的HQ装备储备。";
	tasktype = "attack";
	taskimage = "vn\missions_f_vietnam\data\img\mikeforce\p\vn_ui_mf_task_p1.jpg";
	rankpoints = 50;

	taskScript = "vn_mf_fnc_state_machine_task_system";

	//Data for the script to use to customise behaviour
	class parameters 
	{
		stateMachineCode = "vn_mf_fnc_task_pri_capture";
		timeout = -1;
	};

	//Data for subtasks. These are specific to the script.
	class hold_hq
	{
		//taskname = "Capture and Hold HQ";
		taskname = "夺取并防守HQ";
		//taskdesc = "Enter the enemy HQ and prevent enemies recapturing it.";
		taskdesc = "进入敌方HQ并防止敌人重新占领它。";
	};

	class destroy_sites
	{
		//taskname = "Destroy Sites";
		taskname = "摧毁敌方设施";
		//taskdesc = "Destroy all HQs, AA and artillery sites within 1200m.";
		taskdesc = "摧毁1200米内的所有HQ、AA和炮兵阵地。";
	};

	class destroy_enemy_supplies
	{
		//taskname = "Destroy Enemy Supplies";
		taskname = "摧毁敌方补给";
		//taskdesc = "Destroy the supplies found at the enemy HQ. Explosives are recommended.";
		taskdesc = "摧毁敌方HQ的补给。建议使用炸药。";
	};
};

class build_fob : task
{
	taskcategory = "PRI";
	//tasktitle = "Build FOB";
	tasktitle = "建立FOB";
	//taskname = "Build FOB";
	taskname = "建立FOB";
	//taskdesc = "Build an FOB to begin claiming zones within %1ms of it.";
	taskdesc = "建立FOB，以开始占领距离它%1ms内的区域。";
	taskformatdata = "[mf_s_baseZoneUnlockDistance]";
	tasktype = "repair";
	taskimage = "vn\missions_f_vietnam\data\img\mikeforce\p\vn_ui_mf_task_p1.jpg";
	rankpoints = 10;

	taskScript = "vn_mf_fnc_state_machine_task_system";

	//Data for the script to use to customise behaviour
	class parameters 
	{
		stateMachineCode = "vn_mf_fnc_task_pri_build_fob";
		timeout = -1;
	};

	//Data for subtasks. These are specific to the script.
	class build
	{
		//taskname = "Build a HQ";
		taskname = "建造HQ";
		//taskdesc = "Construct a HQ building to create a base.";
		taskdesc = "建造一个HQ建筑以创建一个基地。";
	};
};