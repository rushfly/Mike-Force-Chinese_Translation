/*
    File: fn_tr_selectTeam_init.sqf
    Author: Savage Game Design
    Public: No
    
    Description:
		Called in onLoad section of the Display.
		Set's the text for the currently active Team in the Team-selection dialog.
    
    Parameter(s): none
    
    Returns: nothing
    
    Example(s):
		[] call vn_mf_fnc_tr_selectTeam_init;
*/

disableSerialization;
#include "..\..\..\..\config\ui\ui_def_base.inc"


VN_TR_SELECTTEAM_TEAM_LOGO_CTRL ctrlSetText "";

// _text = composeText ["The Viet Cong controls this province.", lineBreak, "Your Mobile Strike Force must take control of the populace and destroy the Viet Cong"];
VN_TR_SELECTTEAM_TEAM_DESC_CTRL ctrlSetStructuredText parseText localize "STR_MIS_STRATEGY";

_text = localize "TXT_STRATEGY_DESC";

VN_TR_SELECTTEAM_TEAM_TEXT_CTRL ctrlSetStructuredText parseText _text;
