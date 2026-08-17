#include "script_component.hpp"
/*
 * Author: YonV
 * Points the handset's camera page at the feed picked in its drop-down. cTab's
 * own camera functions do the work of creating the render target; this only
 * chooses whose it is and hangs the result on the picture.
 *
 * Arguments:
 * 0: Index into the current list <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [2] call ghost_ctab_devices_fnc_camSelect
 */

params [["_index", 0, [0]]];

private _ifName = call FUNC(ifName);
if (_ifName == "") exitWith {};

private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {};

private _isUav = GVAR(camIsUav);
private _list = [cTabHcamlist, cTabUAVlist] select _isUav;
if (_list isEqualTo []) exitWith {};

private _entry = _list param [_index, objNull];
if (isNil "_entry") exitWith {};

GVAR(camIndex) = _index;

private _renderTarget = ["rendertarget13", "rendertarget9"] select _isUav;

[] call cTab_fnc_deleteUAVcam;
[] call cTab_fnc_deleteHelmetCam;

if (_isUav) then {
    [str _entry, [[1, _renderTarget]]] call cTab_fnc_createUavCam;
} else {
    [_renderTarget, str _entry] spawn cTab_fnc_createHelmetCam;
};

private _pic = _display displayCtrl IDC_S7_CAMPIC;
if (!isNull _pic) then {
    _pic ctrlSetText format ["#(argb,512,512,1)r2t(%1,1.0)", _renderTarget];
};

private _label = _display displayCtrl IDC_S7_CAMLABEL;
if (!isNull _label) then {
    private _name = if (_entry isEqualType objNull) then {
        private _n = getText (configOf _entry >> "displayName");
        if (_n isEqualTo "") then {typeOf _entry} else {_n}
    } else {
        str _entry
    };
    _label ctrlSetText format ["  %1: %2", ["HELMET CAM", "UAV"] select _isUav, _name];
};
