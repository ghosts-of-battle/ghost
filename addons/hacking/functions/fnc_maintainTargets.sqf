#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_maintainTargets

Description:
    Keeps intel targets serviceable: rearms them, patches battle damage, and
    optionally replaces a crew that has been shot out.

    A DESTROYED target is never touched. That is the whole contract - killing one
    is the objective, and an objective that stitches itself back together is not
    an objective. setDamage on a wreck can bring a vehicle back in Arma, so the
    alive test here is a hard gate rather than a tidy-up: everything below it
    only ever runs on something still standing.

    The distinction that makes this worth having is between WEARING a target down
    and KILLING it. Without maintenance, a strafing run that leaves a SAM site at
    90% damage has effectively neutralised it forever without anyone having to
    finish the job. With it, damage that is not fatal is temporary, and the only
    way to take the objective off the board is to destroy it.

    Config is stamped per target at registration rather than read from a module
    here, so two pools can maintain on different schedules and a target carries
    its own terms.

Parameters (CBA PFH): 0: args, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_args", "_handle"];

private _pool = missionNamespace getVariable [QGVAR(intelTargets), []];
if (_pool isEqualTo []) exitWith {
    GVAR(maintainHandle) = nil;
    [_handle] call CBA_fnc_removePerFrameHandler;
};

{
    private _obj = _x;

    // Gone or destroyed: leave it. Nothing below this line runs on a wreck.
    if (isNull _obj) then { continue };
    if (!alive _obj) then { continue };

    private _cfg = _obj getVariable [QGVAR(maintainCfg), []];
    if (_cfg isEqualTo []) then { continue };
    _cfg params ["_interval", "_repair", "_recrew"];

    private _due = _obj getVariable [QGVAR(maintainNext), 0];
    if (CBA_missionTime < _due) then { continue };
    _obj setVariable [QGVAR(maintainNext), CBA_missionTime + _interval];

    // Rearm. Inert on anything without weapons, so crates and props cost a call
    // and nothing else.
    _obj setVehicleAmmo 1;

    // Repair a step at a time rather than all at once, so sustained fire still
    // beats the repair rate and a single pass does not simply undo itself.
    if (_repair > 0 && {damage _obj > 0}) then {
        _obj setDamage (0 max ((damage _obj) - _repair));
    };

    // A gun whose crew has been shot out is scenery. Repairing the hull and
    // leaving nobody in it maintains the appearance of an objective and not the
    // substance of one.
    if (_recrew && {(crew _obj) findIf {alive _x} < 0}) then {
        private _side = _obj getVariable [QGVAR(maintainSide), sideUnknown];
        { deleteVehicle _x } forEach (crew _obj);
        private _grp = createVehicleCrew _obj;
        if ((units _grp) isEqualTo []) then {
            deleteGroup _grp;
        } else {
            if (_side isNotEqualTo sideUnknown) then {
                (units _grp) joinSilent (createGroup [_side, true]);
            };
        };
    };
} forEach _pool;
