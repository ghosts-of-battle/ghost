#include "..\script_component.hpp"

if (isDedicated) exitWith {};

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostmakecom = [
    "ghostmakecom",
    "Communications",
    "", {
        player call FUNC(makerto);
        player 
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostmakecom] call ACE_interact_menu_fnc_addActionToObject;

private _ghostmakecom = [
    "ghostmakecom",
    "JFIRE",
    "", {
        player call FUNC(makecom);
        player 
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostmakecom] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostmakeeng = [
    "ghostmakeeng",
    "Breacher",
    "", {
        player call FUNC(makebrch);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostmakeeng] call ACE_interact_menu_fnc_addActionToObject;

private _ghostmakeeng = [
    "ghostmakeeng",
    "EOD",
    "", {
        player call FUNC(makeeng);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostmakeeng] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostmakemed = [
    "ghostmakemed",
    "Combat Life Saver",
    "", {
        player call FUNC(makecls);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostmakemed] call ACE_interact_menu_fnc_addActionToObject;

private _ghostmakemed = [
    "ghostmakemed",
    "Medic",
    "", {
        player call FUNC(makemed);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostmakemed] call ACE_interact_menu_fnc_addActionToObject;
////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostFIX = [
    "ghostfix",
    "FIX Perms",
    "", {
        player call FUNC(role);
        player call FUNC(rank);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostFIX] call ACE_interact_menu_fnc_addActionToObject;


