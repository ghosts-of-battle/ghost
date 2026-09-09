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

//TIERS COME OFF THE RADIO-CLASS LISTS IN config_radio.hpp - whichever of
//srRadios / mrRadios / lrRadios names the radio decides its plan. A class
//belongs to one list only; anything unlisted falls to LR.
private _radioType = switch (true) do {
    case (_radio in ghost_radio_srRadios || _radio isEqualTo "SR"): {"SR"};
    case (_radio in ghost_radio_mrRadios || _radio isEqualTo "MR"): {"MR"};
    default {"LR"};
};

//the SR radio is tuned per squad: the mission's own table first, then by block
//(config_groups.hpp), block 2 the second, etc. ACRE channel = (block - 1) * 16 + 1
private _blockChannel = -1;
if (_radioType isEqualTo "SR") then {
    private _groupIndex = (getArray (missionConfigFile >> "Dynamic_Groups" >> "group_setup")) findIf {
        toUpper (_x select 0) isEqualTo _group
    };
    // THE MISSION'S OWN TABLE FIRST: [squad, channel] pairs, so a plan that does
    // not give every element the same number of channels can just say what it is.
    private _table = missionNamespace getVariable ["ghost_radio_srSquadChannel", []];
    {
        if (toUpper (_x select 0) isEqualTo _group) exitWith {_blockChannel = _x select 1};
    } forEach _table;

    // Otherwise the old block arithmetic: element's row x block size, plus one.
    if (_blockChannel isEqualTo -1 && {_groupIndex > -1}) then {
        private _block = missionNamespace getVariable ["ghost_radio_srBlockSize", 16];
        _blockChannel = _groupIndex * _block + 1;
    };
};
if (_blockChannel > -1) exitWith {_blockChannel};

//each tier derives from its own plan (YMF_SR/MR/LR_CHANNELS - loaded in preInit)
switch (_radioType) do {
    case "SR": {ghost_radio_srFallback}; //units outside the dynamic groups (block path exited above)
    case "MR": {
        //the group's own named channel in the MR plan; ungrouped -> MR default (DET)
        private _planIndex = ghost_radio_mrChannels findIf {toUpper (_x select 2) isEqualTo _group};

        //THEN HIS PLATOON'S. The MR plan is four platoon nets, not one channel
        //per squad (user, 2026-09-01), so "NOMAD 2-3" matches nothing above and
        //without this every crew in the task force would sit on the detachment
        //default together. See FUNC(platoonNet) - the mission says which squads
        //are in which platoon in the class the role screen already reads.
        if (_planIndex isEqualTo -1) then {
            private _net = [_group] call FUNC(platoonNet);
            if (_net isNotEqualTo "") then {
                _planIndex = ghost_radio_mrChannels findIf {toUpper (_x select 2) isEqualTo _net};
            };
        };

        if (_planIndex > -1) then {(ghost_radio_mrChannels select _planIndex) select 0} else {ghost_radio_mrDefault};
    };
    default {ghost_radio_lrDefault}; //LR (and anything unknown) sits on DET
};
