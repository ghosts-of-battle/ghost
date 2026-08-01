// ---------------------------------------------------------------------------
// Custom Eden attribute control for the Ghost drone / EW modules:
//   ghost_DroneFactionChoice   - single-select faction dropdown, populated at
//                                panel-open from the factions that own drones.
//                                The module reads it to derive the side.
//
// The drone class lists are plain comma-separated edit boxes -- the old
// multi-select pickers were harder to use than typing the classnames.
//
// Same technique as ALiVE's ALiVE_FactionChoice / ALiVE_AAUnitChoiceMulti:
// a BI attribute-template base (Combo) whose list is
// filled dynamically by an attributeLoad SQF handler. NO ALiVE dependency -
// the handlers live in this addon (ghost_main) and read plain CfgVehicles /
// CfgFactionClasses, so the drone modules keep requiring only ghost_main.
//
// This file is #included INSIDE `class Cfg3DEN >> class Attributes` (see
// CfgEden.hpp) - HEMTT forbids re-opening `class Cfg3DEN` in a second file, so
// there is exactly one Cfg3DEN and this is a fragment of its Attributes body.
// The engine ctrl* classes it inherits from are forward-declared at TOP-LEVEL
// scope in CfgEden.hpp (declaring them inside Attributes shadows BI's global
// ctrl* classes and breaks BI attributes that chain through ctrlStatic - a
// hard-won ALiVE lesson).
// ---------------------------------------------------------------------------

class Combo;   // BI Combo attribute template (title + combo at IDC 100)

// ---- faction dropdown -------------------------------------------
class ghost_DroneFactionChoice: Combo {
    attributeLoad = "[_this, _value] call ghost_common_fnc_edenDroneFactionLoad";
    attributeSave = "call ghost_common_fnc_edenDroneFactionSave";
};
