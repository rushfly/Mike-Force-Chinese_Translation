// limits and vanilla/custom trait values
class MikeForce
{
    name = $STR_Mike_Force;
    icon = "\vn\ui_f_vietnam\ui\taskroster\img\logos\Logo_MikeForce_HL.paa";
    shortname = $STR_SHT_Mike_Force;
    unit = "vn_b_men_army_01";

    class rolelimits 
    {
        medic = 1;
        engineer = 1;
        explosiveSpecialist = 1;
        vn_artillery = 1;
    };
    
    class defaultTraits
    {
        camouflageCoef = 0.8;
        audibleCoef = 0.6;
        loadCoef = 1;
        engineer = false;
        explosiveSpecialist = false;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = true;
        scout = true;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
class SpikeTeam
{
    name = $STR_Spike_Team;
    icon = "\vn\ui_f_vietnam\ui\taskroster\img\logos\Logo_SpikeTeam_HL.paa";
    shortname = $STR_SHT_Spike_Team;
    unit = "vn_b_men_army_01";

    class rolelimits 
    {
        medic = 1;
        engineer = 0;
        explosiveSpecialist = 1;
        vn_artillery = 1;
    };
    
    class defaultTraits
    {
        camouflageCoef = 1;
        audibleCoef = 0.3;
        loadCoef = 0.5;
        engineer = false;
        explosiveSpecialist = false;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = false;
        scout = true;
        scout_multiple = true;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
class ACAV
{
    name = $STR_ACAV;
    icon = "\vn\ui_f_vietnam\ui\taskroster\img\logos\Logo_ACAV_HL.paa";
    shortname = $STR_SHT_ACAV;
    unit = "vn_b_men_army_01";

    class rolelimits 
    {
        medic = 2;
        engineer = 40;
        explosiveSpecialist = 2;
        vn_artillery = 2;
    };
    
    class defaultTraits
    {
        camouflageCoef = 0.8;
        audibleCoef = 0.6;
        loadCoef = 1;
        engineer = false;
        explosiveSpecialist = false;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = true;
        scout = false;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
class GreenHornets
{
    name = $STR_GreenHornets;
    icon = "\vn\ui_f_vietnam\ui\taskroster\img\logos\Logo_Hornets_HL.paa";
    shortname = $STR_SHT_GreenHornets;
    unit = "vn_b_men_army_01";
    
    class rolelimits 
    {
        medic = 1;
        engineer = 1;
        explosiveSpecialist = 1;
        vn_artillery = 1;
    };
    
    class defaultTraits
    {
        camouflageCoef = 0.8;
        audibleCoef = 0.6;
        loadCoef = 1;
        engineer = false;
        explosiveSpecialist = false;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = true;
        scout = false;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
