#include "script_component.hpp"
/*
 * Author: YonV
 * Opens one Simplex Support Services request screen from the GFT's SUPPORT
 * app. Simplex's own display stacks over the tablet dialog, so the tablet is
 * still underneath when the request is done.
 *
 * The GFT is the only device that carries the app, and Simplex's ACE
 * self-menu is removed at postInit - this is the way in.
 *
 * Arguments:
 * 0: Service key <STRING> - "CAS", "ARTILLERY", "TRANSPORT" or "LOGISTICS"
 *
 * Return Value:
 * None
 *
 * Example:
 * ["CAS"] call ghost_ctab_devices_fnc_supportOpen
 */

params [["_service", "", [""]]];

if (_service isEqualTo "") exitWith {};

if (isNil "sss_common_fnc_openGUI") exitWith {
    ["Support", "Simplex Support Services is not loaded.", [1, 0.3, 0.3, 1]] call EFUNC(notify,notify);
};

// The same gate Simplex's own menu used: services this player can task.
private _entities = [player, _service] call sss_common_fnc_getEntities;
if (_entities isEqualTo []) exitWith {
    ["Support", format ["No %1 support on the net.", _service], [1, 0.3, 0.3, 1]] call EFUNC(notify,notify);
};

[_service] call sss_common_fnc_openGUI;

// SIMPLEX'S WINDOWS KEEP THEIR OWN SIZE. A fit-onto-the-glass sweep was
// tried and did not survive contact with SDF's real pages, and geometry
// surgery on another mod's live GUI is not something to iterate blind - the
// user's call: fit it or leave it the original size. It stays original.
// What DOES happen is measurement: each window logs its control count and
// bounding box once, so a future fit attempt starts from numbers.
[{
    !isNull (uiNamespace getVariable ["sss_sdf_display", displayNull])
}, {
    private _sss = uiNamespace getVariable ["sss_sdf_display", displayNull];
    private _minX = 10; private _minY = 10; private _maxX = -10; private _maxY = -10;
    private _n = 0;
    {
        if (isNull ctrlParentControlsGroup _x) then {
            (ctrlPosition _x) params ["_cx", "_cy", "_cw", "_ch"];
            if (_cw > 0 && {_ch > 0}) then {
                _n = _n + 1;
                _minX = _minX min _cx; _minY = _minY min _cy;
                _maxX = _maxX max (_cx + _cw); _maxY = _maxY max (_cy + _ch);
            };
        };
    } forEach allControls _sss;
    diag_log format ["GHOST ctab_devices: SSS window up - %1 top-level controls, bbox %2",
        _n, [_minX, _minY, _maxX - _minX, _maxY - _minY]];
}] call CBA_fnc_waitUntilAndExecute;
