#include "script_component.hpp"
/*
 * FORK of cTab's aceSelfActions (cTab by Riouken and authors - re-used with
 * credit per cTab's licence), reached by OVERRIDING THE CONFIG ENTRY, not by
 * pre-empting a function name.
 *
 * The CfgFunctions trick that wins updateInterface does NOT work here, and the
 * reason is worth keeping: cTab's ACE entry calls `FUNC(aceSelfActions)`,
 * which with cTab's macros (PREFIX ctab, COMPONENT core) is
 * `ctab_core_fnc_aceSelfActions`. A `class CfgFunctions > class cTab > class
 * Functions > class aceSelfActions` block compiles `cTab_fnc_aceSelfActions` -
 * a DIFFERENT global, which nothing calls. The fork sat there being nobody's
 * function while the menu went on saying "Configure S7 Android". updateInterface
 * is not the same case: cTab's own code calls that one by its cTab_fnc_ name.
 *
 * So CfgVehicles reopens cTab's `cTab_Interact` action and points its
 * insertChildren at this function instead. Config beats the whole question of
 * which global cTab uses internally.
 *
 * Ghost changes, marked GHOST: the device entries carry the names and icons
 * of the devices they now open - S23, GFT-1, FBCB4 - instead of cTab's
 * stringtable names for hardware that no longer exists. TAD, MicroDAGR and
 * the tech data sheet are untouched. cTab's macros are resolved to their
 * globals (ctab_core_*, cTab_fnc_*) because this file compiles in ghost's
 * component, not cTab's.
 */

params ["_target"];

private _actions = [];
private _player = cTab_player;
private _vehicle = vehicle _player;
private _hasItem = false;

// GHOST: cTab defines this inline as a code block that references its own
// local variable to recurse - which SQF cannot do, so the nested entry was
// always built from nil. It is a real function here, which can name itself.
private _subactions = FUNC(aceSubActions);

// toggleInterface is one of the few cTab functions PREP'd into the component
// namespace, not PREPMAIN'd - cTab_fnc_toggleInterface does not exist, and
// calling it is the silent no-op that once made every entry here do nothing.
private _toggleInterface = {
    params ["", "", "_params"];
    _params call ctab_core_fnc_toggleInterface;
};

if ([_player, _vehicle, "TAD"] call cTab_fnc_unitInEnabledVehicleSeat) then {
    _actions pushBack [[
        "cTab_TAD",
        "Configure TAD",
        "",
        _toggleInterface,
        {true},
        _subactions,
        [1, "cTab_TAD_dlg", _player, _vehicle]
    ] call ace_interact_menu_fnc_createAction, [], _target];
    _hasItem = true;
};

if ([_player, ctab_core_androidDevices] call cTab_fnc_checkGear) then {
    _actions pushBack [[
        "cTab_Android",
        // GHOST: the android is the S23 now, in name and icon
        "Configure S23 Handheld",
        QPATHTOF(data\icon_s23_blk_ca.paa),
        _toggleInterface,
        {true},
        _subactions,
        [1, "cTab_Android_dlg", _player, _vehicle]
    ] call ace_interact_menu_fnc_createAction, [], _target];
    _hasItem = true;
};

if ([_player, ctab_core_dagrDevices] call cTab_fnc_checkGear) then {
    _actions pushBack [[
        "cTab_microDAGR",
        "Configure MicroDAGR",
        "\cTab\img\icon_MicroDAGR.paa",
        _toggleInterface,
        {true},
        _subactions,
        [1, "cTab_microDAGR_dlg", _player, _vehicle]
    ] call ace_interact_menu_fnc_createAction, [], _target];
};

if ([_player, _vehicle, "FBCB2"] call cTab_fnc_unitInEnabledVehicleSeat) then {
    _actions pushBack [[
        "cTab_FBCB2",
        // GHOST: the vehicle screen is the FBCB4
        "FBCB4",
        "",
        _toggleInterface,
        {true},
        {},
        [1, "cTab_FBCB2_dlg", _player, _vehicle]
    ] call ace_interact_menu_fnc_createAction, [], _target];
    _hasItem = true;
};

if ([_player, ctab_core_tabDevices] call cTab_fnc_checkGear) then {
    _actions pushBack [[
        "cTab_Tablet",
        // GHOST: and the tablet is the GFT-1
        "GFT-1 Rugged Tablet",
        QPATHTOF(data\icon_gft_ca.paa),
        _toggleInterface,
        {true},
        {},
        [1, "cTab_Tablet_dlg", _player, _vehicle]
    ] call ace_interact_menu_fnc_createAction, [], _target];
    _hasItem = true;
};

if (_hasItem && {(leader _player) == _player}) then {
    _actions pushBack [[
        "cTab_TechData",
        "Technical Data",
        "",
        { createDialog "cTab_TechnicalData_dlg"; },
        {true},
        {},
        []
    ] call ace_interact_menu_fnc_createAction, [], _target];
};

_actions
