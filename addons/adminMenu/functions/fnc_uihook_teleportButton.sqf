#include "script_component.hpp"

TRACE_1("params",_this);

private _selectedUnit = missionNamespace getVariable [
    UI_TAB_TELEPORT_PERSON lbData (lbCurSel UI_TAB_TELEPORT_PERSON),
    objNull
];

TRACE_1("Selected unit: ",_selectedUnit);

if (isNull _selectedUnit) exitWith {WARNING_1("Bad unit, disconnect?", _selectedUnit);};

private _selectedGroupIndex = lbCurSel UI_TAB_TELEPORT_GROUP;
if ((_selectedGroupIndex < 0) || (_selectedGroupIndex >= (count GVAR(groupsArray)))) exitWith {};

private _selectedGroup = GVAR(groupsArray) select _selectedGroupIndex;

private _leader = leader _selectedGroup;
if (_leader == _selectedUnit) then { // if selected unit is leader, attempt to move to a squadmate
    private _units = (units _leader) select {alive _x && {_x != _leader}};
    _leader = _units param [0, _leader];
};
if (!alive _leader) exitWith { TRACE_1("dead leader",_leader); };

// Check side:
if (((side group _selectedUnit) != (side _selectedGroup)) && {(diag_tickTime - (missionNamespace getVariable [QGVAR(doubleClickTime), -1])) > 10}) exitWith {
    hint format ["WARNING: side mismatch\n[Click again to actually teleport]"];
    GVAR(doubleClickTime) = diag_tickTime;
};

private _vehicle = vehicle _leader;

private _return = if (_vehicle == _leader) then {
    private _success = _selectedUnit setVehiclePosition [_leader, [], 5];
    if (_success) then {
        "Teleporting to position"
    } else {
        _success = _selectedUnit setVehiclePosition [_leader, [], 15];
        if (_success) then {
            "No empty position for teleport"
        } else {
            "Teleporting to position"
        }
    }
} else {
    private _fullCrewCount = 0;
    private _aliveCrewCount = {
        _fullCrewCount = _fullCrewCount + 1;
        private _crewMember = _x select 0;
        !isNull _crewMember && {alive _crewMember}
    } count (fullCrew [_vehicle, "", true]);

    if (_fullCrewCount > _aliveCrewCount) then {
        [_selectedUnit, _vehicle] remoteExec ["moveInAny", _selectedUnit];
        "Teleporting to vehicle (no guarantees)"
    } else {
        "No empty seats for vehicle teleport"
    }
};

["ghost_adminMsg", [format ["Teleporting %1 to group %2 [%3]", name _selectedUnit, _selectedGroup, _return], profileName]] call CBA_fnc_globalEvent;
