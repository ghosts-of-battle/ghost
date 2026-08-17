/*
    Author: TheTimidShade

    Description:
        Applies player skills/traits based on selected values

    Parameters:
        NONE

    Returns:
        NONE
*/

#include "\z\ghost\addons\adminpanel\script_component.hpp"

disableSerialization;


private _admp_display = uiNamespace getVariable ['admp_displayVar', displayNull];
if (isNull _admp_display) exitWith {}; // check display exists

private _admp_playerlist_listbox = _admp_display displayCtrl IDC_ADMINPANEL_PLAYERLIST_LISTBOX;
private _medic_combo = _admp_display displayCtrl IDC_ADMINPANEL_PLAYER_SKILLS_MEDICAL_COMBO;
private _engineer_combo = _admp_display displayCtrl IDC_ADMINPANEL_PLAYER_SKILLS_ENGINEER_COMBO;
private _eod_checkbox = _admp_display displayCtrl IDC_ADMINPANEL_PLAYER_SKILLS_EOD_CHECKBOX;
private _dra_checkbox = _admp_display displayCtrl IDC_ADMINPANEL_PLAYER_SKILLS_DRA_CHECKBOX;
private _isr_checkbox = _admp_display displayCtrl IDC_ADMINPANEL_PLAYER_SKILLS_ISR_CHECKBOX;
private _jfo_checkbox = _admp_display displayCtrl IDC_ADMINPANEL_PLAYER_SKILLS_JFO_CHECKBOX;
private _uav_checkbox = _admp_display displayCtrl IDC_ADMINPANEL_PLAYER_SKILLS_UAV_CHECKBOX;
private _lead_checkbox = _admp_display displayCtrl IDC_ADMINPANEL_PLAYER_SKILLS_LEAD_CHECKBOX;

private _player = [_admp_playerlist_listbox] call admp_fnc_playerFromSelection; // get selected player
if (isNull _player) exitWith {["Admin Panel", "No target found!", [0.831, 0.267, 0.267, 1]] call EFUNC(notify,notify); playSound "addItemFailed";}; // if there is no selected target exit

private _medicSkill = _medic_combo lbValue (lbCurSel _medic_combo);
private _engineerSkill = _engineer_combo lbValue (lbCurSel _engineer_combo);
private _eodSkill = cbChecked _eod_checkbox;
private _draSkill = cbChecked _dra_checkbox;
private _isrSkill = cbChecked _isr_checkbox;
private _jfoSkill = cbChecked _jfo_checkbox;
private _uavSkill = cbChecked _uav_checkbox;
private _leadSkill = cbChecked _lead_checkbox;


_player setVariable ["ace_medical_medicClass", _medicSkill, true];
_player setVariable ["ACE_IsEngineer", _engineerSkill, true];
_player setVariable ["ACE_isEOD", _eodSkill, true];
_player setVariable ["draWhitelisted", _draSkill, true];
_player setVariable ["isISR", _isrSkill, true];
_player setVariable ["isJFO", _jfoSkill, true];
_player setVariable ["UAVHacker", _uavSkill, true];
// The platoon-view / HQ-tag / support gate flag - the mission's own name.
_player setVariable ["isLeader", _leadSkill, true];

// setUnitTrait needs the unit local, so run on the unit's machine
[_player, ["Medic", _medicSkill > 0]] remoteExecCall ["setUnitTrait", _player];
[_player, ["Engineer", _engineerSkill > 0]] remoteExecCall ["setUnitTrait", _player];
[_player, ["ExplosiveSpecialist", _eodSkill]] remoteExecCall ["setUnitTrait", _player];
[_player, ["UAVHacker", _uavSkill]] remoteExecCall ["setUnitTrait", _player];


["Admin Panel", format ["Applied skills to %1!", name _player], [0.4, 0.702, 0.4, 1]] call EFUNC(notify,notify);
playSound "3DEN_notificationDefault";
