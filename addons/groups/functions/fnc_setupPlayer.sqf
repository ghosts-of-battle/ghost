#include "script_component.hpp"
params [
    ["_desiredRole","recon",[""]],
    ["_isRespawn",false,[true]]
];

private _roleConfig = missionConfigFile >> "Dynamic_Roles" >> _desiredRole;
private _defaultLoadout = getArray(_roleConfig >> "defaultLoadout");

if (_isRespawn) then {
        private _loadout = [player] call EFUNC(gear,loadLoadout);
        [player, _loadout] call EFUNC(gear,applyLoadout);
        if (player call ghost_players_fnc_isCurator) then {
            if (!isNil "ghost_curator_fnc_assignZeus") then {[player,true] call ghost_curator_fnc_assignZeus};
            if (!isNil "acre_api_fnc_godModeConfigureAccess") then {[true,true] call acre_api_fnc_godModeConfigureAccess};
            [player,true] call admp_fnc_grantAdminAccess;
        } else {
            if (!isNil "ghost_curator_fnc_assignZeus") then {[player,false] call ghost_curator_fnc_assignZeus};
            if (!isNil "acre_api_fnc_godModeConfigureAccess") then {[false,false] call acre_api_fnc_godModeConfigureAccess};
        };  
} else {
    player setUnitLoadout _defaultLoadout;
    
    private _weapons = getArray(_roleConfig >> "arsenalWeapons");
    private _magazines = getArray(_roleConfig >> "arsenalMagazines");
    private _items = getArray(_roleConfig >> "arsenalItems");
    private _backpacks = getArray(_roleConfig >> "arsenalBackpacks");

    //merge the shared Common_Arsenal (config\arsenal) plus the role's group arsenal
    //(groupArsenal property, e.g. "Arsenal_Reaper") - any array named items* counts as items
    private _arsenalSources = [missionConfigFile >> "Common_Arsenal"];
    private _groupArsenal = getText(_roleConfig >> "groupArsenal");
    if (_groupArsenal isNotEqualTo "" && {isClass (missionConfigFile >> _groupArsenal)}) then {
        _arsenalSources pushBack (missionConfigFile >> _groupArsenal);
    };
    {
        {
            private _name = toLower configName _x;
            switch (true) do {
                case (_name isEqualTo "weapons"): {_weapons append getArray _x};
                case (_name isEqualTo "magazines"): {_magazines append getArray _x};
                case (_name isEqualTo "backpacks"): {_backpacks append getArray _x};
                case (_name select [0,5] isEqualTo "items"): {_items append getArray _x};
            };
        } forEach configProperties [_x, "isArray _x", false];
    } forEach _arsenalSources;

    [player,true,false] call ace_arsenal_fnc_removeVirtualItems;
    {
        [player,_x,false] call ace_arsenal_fnc_addVirtualItems;
    } forEach [_weapons,_magazines,_items,_backpacks];
    private _roleName = getText(_roleConfig >> "name");
    [_roleName,_defaultLoadout] call ace_arsenal_fnc_addDefaultLoadout;

    private _roleTraits = getArray(_roleConfig >> "traits");
    {
        _x params ["_trait","_value"];

        // TYPE FIRST, VALUE SECOND, AND NOT WITH &&. getAllUnitTraits returns
        // traits of MIXED type - audibleCoef and camouflageCoef are NUMBERS, the
        // rest are booleans - so the value can only be looked at once the type
        // is known.
        //
        // `_value isEqualType true && _value` throws: && evaluates its right
        // side whatever the left side said, and a number there is
        // "&&: Type Number, expected Bool,code" on the first numeric trait.
        // `&& {_value}` is correct but reads as a pointless code block to a
        // linter. Two statements say the same thing and argue with nobody.
        if !(_value isEqualType true) then {continue};

        if (_value) then {
            player setUnitTrait [_trait,false];
        };
    } forEach (getAllUnitTraits player);

    {
        _x params ["_trait","_value",["_custom","false"]];
        if (_value in ["true","false"]) then {_value = call compile _value};
        player setUnitTrait [_trait,_value,call compile _custom];
    } forEach _roleTraits;

    private _customVariables = getArray(_roleConfig >> "customVariables");
    {
        player setVariable [_x,nil,true];
    } forEach (missionNamespace getVariable ["YMF_myCustomVariables",[]]);

    YMF_myCustomVariables = [];
    {
        _x params ["_variable","_value","_global"];
        if (_value in ["true","false"]) then {_value = call compile _value};
        player setVariable [_variable,_value,call compile _global];
        YMF_myCustomVariables pushBack _variable;
    } forEach _customVariables;
    player setVariable ["YMF_role",_desiredRole,true];

    if (player call ghost_players_fnc_isCurator) then {
        if (!isNil "ghost_curator_fnc_assignZeus") then {[player,true] call ghost_curator_fnc_assignZeus};
        if (!isNil "acre_api_fnc_godModeConfigureAccess") then {[true,true] call acre_api_fnc_godModeConfigureAccess};
        [player,true] call admp_fnc_grantAdminAccess;
    } else {
        if (!isNil "ghost_curator_fnc_assignZeus") then {[player,false] call ghost_curator_fnc_assignZeus};
        if (!isNil "acre_api_fnc_godModeConfigureAccess") then {[false,false] call acre_api_fnc_godModeConfigureAccess};
    };

    /* rank stuff ------------------------------------------------------------------------------------------------------ */
    [player, 'BIS'] call EFUNC(players,setRank);

    /* Name Stuff ------------------------------------------------------------------------------------------------------- */
    call (missionNamespace getVariable ["ghost_w28fixes_fnc_player_set_name", {}]);

    player call EFUNC(gear,saveLoadout);
};

//re-tune radios to the joined group's nets - runs for BOTH a fresh join and a respawn.
//getRadioChannel keys off the player's current squad, so this re-applies for whatever group was joined.
//The squad name is read from groupId (group player), but the server creates, names (setGroupIdGlobal)
//and joins the group in the same frame it remote-executes this function, so the client can still be
//looking at its previous group when the tuning runs - worst case for the first player into an empty
//squad, whose group is built from scratch. Wait for the new name to replicate before reading it,
//with a wall-clock deadline so anyone outside the configured squads still falls back to the defaults.
private _squadNames = (getArray (missionConfigFile >> "Dynamic_Groups" >> "group_setup")) apply {toUpper (_x select 0)};
private _deadline = diag_tickTime + 10;

if (EGVAR(patches,usesACRE)) then {
    [{
        params ["_squadNames","_deadline"];
        ([] call acre_api_fnc_isInitialized) && {
            ((toUpper (groupId (group player))) in _squadNames) || {diag_tickTime > _deadline}
        }
    }, {
        INFO_1("GearRadio","Setting up ACRE radio channels for %1...",player);
        [player] call EFUNC(players,setRadioChannel);
        [ghost_radio_acreActiveRadio] call EFUNC(players,setActiveRadio);
    }, [_squadNames,_deadline]] call CBA_fnc_waitUntilAndExecute;
};

if (EGVAR(patches,usesTFAR)) then {
    [{
        params ["_squadNames","_deadline"];
        private _r = call TFAR_fnc_activeSwRadio;
        (!isNil "_r" && {_r isEqualType "" && {_r != ""}}) && {
            ((toUpper (groupId (group player))) in _squadNames) || {diag_tickTime > _deadline}
        }
    }, {
        INFO_1("GearRadio","Setting up TFAR radio channels for %1...",player);
        [player] call EFUNC(players,setRadioChannel);
        [ghost_radio_tfarActiveRadio] call EFUNC(players,setActiveRadio);
    }, [_squadNames,_deadline]] call CBA_fnc_waitUntilAndExecute;
};
