#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_common_fnc_edenDroneChoiceLoad

Description:
    Eden attributeLoad handler for the ghost_DroneChoice_* filtered multi-
    select controls. Populates a listbox (IDC 100) with the drones owned by
    the module's currently-saved faction (fnc_listFactionDrones), lets the
    mission-maker tick which ones fill this type slot, and stores the picks
    as a comma-separated classname STRING.

    Faction is read from the module logic's "faction" variable (set on the
    previous OK). Changing the faction therefore refreshes these lists on the
    NEXT panel open - identical behaviour to ALiVE's AA unit picker. When no
    faction is stored yet, every drone is listed so the picker is never empty.

    A category filter button (IDC 1210) cycles All / air / ground. Ticks are
    kept on the controlsGroup namespace so cycling the filter never drops
    selections for the currently-hidden category. Selected classes the
    faction list doesn't contain (mod unloaded, hand-typed) surface as
    "(unrecognised)" rows at the top, pre-ticked, so they are never lost.

Parameters:
    [_display, _varName, _factionVar, _title, _value]
        _display    : DISPLAY - the controlsGroup display
        _varName    : STRING  - logic variable this picker stores (e.g. "recon_classes")
        _factionVar : STRING  - logic variable holding the module faction ("faction")
        _title      : STRING  - listbox title text
        _value      : STRING  - SQM-stored CSV value (Cfg3DEN `_value`)

Author:
    Ghost
---------------------------------------------------------------------------- */

params [["_display", controlNull], ["_varName", "classes"], ["_factionVar", "faction"], ["_title", "Drones:"], ["_sqmValue", ""]];
if (isNull _display) exitWith {};

// Title
private _titleCtrl = _display controlsGroupCtrl 101;
if (!isNull _titleCtrl) then { _titleCtrl ctrlSetText _title };

// --- resolve module faction (saved logic var) ------------------------------
private _selectedLogic = get3DENSelected "logic";
private _logicObj = if (count _selectedLogic > 0) then { _selectedLogic select 0 } else { objNull };
private _faction = "";
if (!isNull _logicObj) then {
    private _raw = _logicObj getVariable [_factionVar, ""];
    if (_raw isEqualType "") then { _faction = _raw };
};

// --- resolve stored selection: SQM value > logic var -----------------------
private _value = "";
private _fromLogic = if (!isNull _logicObj) then { _logicObj getVariable [_varName, nil] } else { nil };
if (!isNil "_fromLogic" && {_fromLogic isEqualType ""}) then { _value = _fromLogic };
private _edenValue = _display getVariable "value";
if (!isNil "_edenValue" && {_edenValue isEqualType ""} && {_edenValue != ""}) then { _value = _edenValue };
if (_sqmValue != "") then { _value = _sqmValue };

// parse CSV (also tolerates spaces, matching the runtime splitString ", ")
private _selectedClasses = [];
{
    private _t = _x;
    while {count _t > 0 && {(_t select [0,1]) == " "}} do { _t = _t select [1] };
    while {count _t > 0 && {(_t select [count _t - 1,1]) == " "}} do { _t = _t select [0, count _t - 1] };
    if (_t != "") then { _selectedClasses pushBackUnique _t };
} forEach (_value splitString ",");

// --- faction's drones ------------------------------------------------------
private _drones = [_faction] call FUNC(listFactionDrones);
if (!(_drones isEqualType [])) then { _drones = [] };

// filter options = All + categories present
private _cats = [];
{ _cats pushBackUnique (_x select 3) } forEach _drones;
_cats sort true;
private _filterOptions = ["All"] + _cats;

private _filterIdx = _display getVariable ["ghost_filterIdx", 0];
if (_filterIdx >= count _filterOptions) then { _filterIdx = 0 };

_display setVariable ["ghost_drones", _drones];
_display setVariable ["ghost_selectedClasses", _selectedClasses];
_display setVariable ["ghost_filterOptions", _filterOptions];
_display setVariable ["ghost_filterIdx", _filterIdx];

private _filterLabel = _display controlsGroupCtrl 1200;
if (!isNull _filterLabel) then { _filterLabel ctrlSetText format ["Type: %1", _filterOptions select _filterIdx] };

private _listCtrl = _display controlsGroupCtrl 100;
if (isNull _listCtrl) exitWith {};

// --- populate (closure over display) ---------------------------------------
private _populateFn = {
    params ["_disp"];
    private _all   = _disp getVariable ["ghost_drones", []];
    private _sel   = _disp getVariable ["ghost_selectedClasses", []];
    private _fOpts = _disp getVariable ["ghost_filterOptions", ["All"]];
    private _fIdx  = _disp getVariable ["ghost_filterIdx", 0];
    private _filter = _fOpts select _fIdx;
    private _list = _disp controlsGroupCtrl 100;
    if (isNull _list) exitWith {};

    _disp setVariable ["ghost_populating", true];
    lbClear _list;

    private _selLower = createHashMap;
    { _selLower set [toLower _x, true] } forEach _sel;

    // unrecognised selected classes (not in faction list) at top, pre-ticked
    private _allLower = createHashMap;
    { _allLower set [toLower (_x select 0), true] } forEach _all;
    {
        if !((toLower _x) in _allLower) then {
            private _i = _list lbAdd format ["(unrecognised) %1", _x];
            _list lbSetData [_i, _x];
            _list lbSetSelected [_i, true];
        };
    } forEach _sel;

    // category-filtered rows, grouped by source mod then alphabetical
    private _matched = if (_filter == "All") then { _all } else { _all select { (_x select 3) == _filter } };
    private _sources = [];
    { _sources pushBackUnique (_x select 4) } forEach _matched;
    _sources sort true;
    {
        private _src = _x;
        private _bucket = _matched select { (_x select 4) == _src };
        _bucket sort true;
        {
            _x params ["_class", "_disp2", "", "_cat", ""];
            private _label = format ["%1 | %2 [%3] %4", _class, _disp2, _cat, _src];
            private _i = _list lbAdd _label;
            _list lbSetData [_i, _class];
            if ((toLower _class) in _selLower) then { _list lbSetSelected [_i, true] };
        } forEach _bucket;
    } forEach _sources;

    _disp setVariable ["ghost_populating", false];
};
[_display] call _populateFn;

// clear the override edit
private _editCtrl = _display controlsGroupCtrl 102;
if (!isNull _editCtrl) then { _editCtrl ctrlSetText "" };

// wire the filter-cycle button
private _btn = _display controlsGroupCtrl 1210;
if (!isNull _btn) then {
    _btn setVariable ["ghost_disp", _display];
    _btn setVariable ["ghost_popFn", _populateFn];
    _btn ctrlAddEventHandler ["ButtonClick", {
        params ["_b"];
        private _disp = _b getVariable "ghost_disp";
        private _pop  = _b getVariable "ghost_popFn";
        private _opts = _disp getVariable ["ghost_filterOptions", ["All"]];
        private _idx  = ((_disp getVariable ["ghost_filterIdx", 0]) + 1) mod (count _opts);
        _disp setVariable ["ghost_filterIdx", _idx];
        private _lbl = _disp controlsGroupCtrl 1200;
        if (!isNull _lbl) then { _lbl ctrlSetText format ["Type: %1", _opts select _idx] };
        [_disp] call _pop;
    }];
};

// keep the selection set in sync with ticks
_listCtrl setVariable ["ghost_disp", _display];
_listCtrl ctrlAddEventHandler ["LBSelChanged", {
    params ["_lb"];
    private _disp = _lb getVariable "ghost_disp";
    if (_disp getVariable ["ghost_populating", false]) exitWith {};
    private _sel = _disp getVariable ["ghost_selectedClasses", []];
    private _selIdx = lbSelection _lb;
    for "_i" from 0 to (lbSize _lb - 1) do {
        private _class = _lb lbData _i;
        if (_class isEqualType "" && {_class != ""}) then {
            if (_i in _selIdx) then { _sel pushBackUnique _class } else { _sel = _sel - [_class] };
        };
    };
    _disp setVariable ["ghost_selectedClasses", _sel];
}];
