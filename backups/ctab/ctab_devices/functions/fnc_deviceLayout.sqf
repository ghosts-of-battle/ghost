#include "script_component.hpp"
/*
 * Author: YonV
 * Runs a device's layout the moment its display loads, from the holder
 * control's onLoad - not a second later when the tick notices it.
 *
 * deviceOpen cannot do this: it resolves the device through cTab's own state,
 * which is not built until after the controls have loaded, so the layout used
 * to wait for the tick and the player watched the stock screen for a beat
 * before everything snapped into place. This needs nothing but the display,
 * and the display names itself by idd.
 *
 * deviceOpen still runs from the tick and still calls the layouts - their
 * once-per-display guard makes that a no-op after this.
 *
 * Arguments:
 * 0: The holder control, as passed by onLoad <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * _this call ghost_ctab_devices_fnc_deviceLayout
 */

params [["_ctrl", controlNull, [controlNull]]];

private _display = ctrlParent _ctrl;
if (isNull _display) exitWith {};

// Wait a frame before laying anything out. Controls are created in declaration
// order and onLoad fires as each one is made, so a hook that runs immediately
// only ever sees the controls declared ABOVE it - every one below is still
// controlNull, the layout silently places nothing, and its once-per-display
// guard then blocks the pass from deviceOpen that would have worked. The hooks
// are declared last for this reason, but a frame's delay makes the layout
// immune to anyone declaring a control after one of them again. One frame is
// invisible; the 1 s tick this replaced was not.
[{
    params ["_display"];
    if (isNull _display) exitWith {};

    diag_log text format ["GHOST ctab_devices: deviceLayout dispatching for idd %1", ctrlIDD _display];
    switch (ctrlIDD _display) do {
        case IDD_S23;                   // the S23 in hand
        case IDD_S23_HUD: {             // and held up on the HUD
            [_display] call FUNC(androidLayout);
        };
        case IDD_GFT: {                 // the GFT-1
            [_display] call FUNC(tabletLayout);
        };
        case IDD_FBCB4: {               // the FBCB4
            [_display] call FUNC(fbcb4Layout);
        };
    };

    // The layout audit, self-serve: every open writes the real geometry to
    // the RPT a few seconds later, when the layout and cTab's own init have
    // both finished. Nobody has to remember a chat command for a screenshot
    // to come with numbers - the "62 fixes that changed nothing" loop was
    // exactly this data never existing.
    [{
        private _n = call FUNC(auditLayout);
        diag_log text format ["GHOST ctab_devices: auto-audit complete, %1 fault(s)", _n];
    }, [], 3] call CBA_fnc_waitAndExecute;
}, [_display]] call CBA_fnc_execNextFrame;
