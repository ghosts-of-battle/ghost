#include "script_component.hpp"
/*
 * Author: CPL.Brostrom.A
 * This function fetch a squad radio channel based on radio type and squad name.
 *
 * Arguments:
 * 0: Group name <STRING>
 * 1: Radio type <STRING> (Optional) (Default; ACRE_PRC343) 
 *
 * Return Value:
 * Radio Channel <NUMBER>
 *
 * Example:
 * ["BANDIT-1", "ACRE_PRC343"] call ymf_fnc_getRadioChannel
 *
 * Public: No
 */

params [
    ["_group", "", [""]],
    ["_radio", "ACRE_PRC148", ["ACRE_PRC148"]]
];

if (!EGVAR(Patches,usesACRE)) exitWith {nil}; //ACRE only (TFAR dropped for now)

//empty group = player hasn't joined a dynamic group yet; fall through so the tier default
//applies (SR fallback / MR + LR = DET) - this is the "before joining a group" default
_group = toUpper(_group);
_radio = toUpper(_radio);

//tiers - ACRE: SR = PRC-343, MR = PRC-152 (and the PRC-148 backup, which shares
//the MR plan so it tunes like the 152), LR = PRC-117F
//tiers keyed off the radio-class lists in config_radio.hpp; anything else (incl. ghost_radio_lrRadios) -> LR
private _radioType = switch (true) do {
    case (_radio in ghost_radio_srRadios || {_radio isEqualTo "SR"}): {"SR"};
    case (_radio in ghost_radio_mrRadios || {_radio isEqualTo "MR"}): {"MR"};
    default {"LR"};
};

//the PRC-343 is tuned by block: block 1 = the first group in group_setup
//(config_groups.hpp), block 2 the second, etc. ACRE channel = (block - 1) * 16 + 1
private _blockChannel = -1;
if (_radioType isEqualTo "SR") then {
    private _groupIndex = (getArray (missionConfigFile >> "Dynamic_Groups" >> "group_setup")) findIf {
        toUpper (_x select 0) isEqualTo _group
    };
    if (_groupIndex > -1) then {
        _blockChannel = _groupIndex * 16 + 1;
    };
};
if (_blockChannel > -1) exitWith {_blockChannel};

//each tier derives from its own plan (YMF_SR/MR/LR_CHANNELS - loaded in preInit)
switch (_radioType) do {
    case "SR": {ghost_radio_srFallback}; //units outside the dynamic groups (block path exited above)
    case "MR": {
        //the group's own named channel in the MR plan; ungrouped -> MR default (DET)
        private _planIndex = ghost_radio_mrChannels findIf {toUpper (_x select 2) isEqualTo _group};
        if (_planIndex > -1) then {(ghost_radio_mrChannels select _planIndex) select 0} else {ghost_radio_mrDefault};
    };
    default {ghost_radio_lrDefault}; //LR (and anything unknown) sits on DET
};
