#include "script_component.hpp"
/*
 * Author: YonV
 * This function provides post init player set up.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * call ghost_init_fnc_playerpost
 *
 * Public: No


 */// Change inventory content of supply crates on mission start.
call EFUNC(init,vehicle);

// staging
call EFUNC(init,staging);

// messages
call EFUNC(init,message);

// diary records
if (EGVAR(Settings,showDiaryRecords)) then {
    call EFUNC(init,diary);
};

onPlayerConnected { 
    [QEGVAR(log,player), [getPlayerUID player, player]] call CBA_fnc_serverEvent;
};

//radio - clients program their own local ACRE preset (the server already did in fn_gear_postInit;
//ACRE presets are per-machine, so each client still needs its own copy).
if (!isServer) then { call EFUNC(gear,setupRadios); };

//login default: once ACRE is up, tune radios to the pre-join defaults (343 -> COMMON ch241,
//152/148 -> DET, 117F -> DET) and make the SR handheld the active radio. This holds until the
//player joins a dynamic group, at which point fn_setupPlayer re-tunes to that group's nets.
if (EGVAR(patches,usesACRE) && GVAR(isPlayer)) then {
    [{[] call acre_api_fnc_isInitialized}, {
        [player] call EFUNC(players,setRadioChannel);
        [ghost_radio_acreActiveRadio] call EFUNC(players,setActiveRadio);
    }, []] call CBA_fnc_waitUntilAndExecute;
};

//same login default under TFAR - wait until the SW handheld exists, then tune to the pre-join nets
if (EGVAR(patches,usesTFAR) && GVAR(isPlayer)) then {
    [{ private _r = call TFAR_fnc_activeSwRadio; !isNil "_r" && {_r isEqualType "" && {_r != ""}} }, {
        [player] call EFUNC(players,setRadioChannel);
        [ghost_radio_tfarActiveRadio] call EFUNC(players,setActiveRadio);
    }, []] call CBA_fnc_waitUntilAndExecute;
};
