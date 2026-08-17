#include "script_component.hpp"
/*
 * Author: YonV
 * Opens a camera app on a handset - the S7 and the S23s, which have no room for
 * cTab's list-beside-picture layout the tablets use. Instead the page carries a
 * drop-down of the sources, BCE style: pick a feed and the picture follows.
 *
 * The page opens whether or not anything is on the net. A screen that refuses
 * to appear tells you nothing; one that appears and says NO FEEDS tells you the
 * device works and the sky is empty, which is the answer you were after.
 *
 * Arguments:
 * 0: Display <DISPLAY>
 * 1: Mode string <STRING> (QGVAR(uav) or QGVAR(hcam))
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display, "ghost_ctab_devices_uav"] call ghost_ctab_devices_fnc_camEnter
 */

params ["_display", "_mode"];

private _ifName = call FUNC(ifName);
if (_ifName == "") then {_ifName = "cTab_Android_dlg"};

private _isUav = _mode == QGVAR(uav);
GVAR(camIsUav) = _isUav;
GVAR(camIndex) = 0;

[_ifName, [["mode", _mode]], true, true] call cTab_fnc_setSettings;

// Fill the picker from whatever is on the net right now.
private _combo = _display displayCtrl IDC_S7_CAMLIST;
if (!isNull _combo) then {
    lbClear _combo;
    private _list = [cTabHcamlist, cTabUAVlist] select _isUav;
    {
        private _label = if (_x isEqualType objNull) then {
            if (_isUav) then {
                // a UAV is named by what it is
                private _n = getText (configOf _x >> "displayName");
                if (_n isEqualTo "") then {typeOf _x} else {_n}
            } else {
                // a helmet cam is a PERSON - the class display name labelled
                // the wearer as their soldier class instead of who they are
                name _x
            }
        } else {
            str _x
        };
        _combo lbAdd _label;
    } forEach _list;

    if (_list isEqualTo []) then {
        _combo lbAdd (["NO HELMET CAMS ON THE NET", "NO UAVS ON THE NET"] select _isUav);
        _combo lbSetCurSel 0;
    } else {
        _combo lbSetCurSel 0;
        [0] call FUNC(camSelect);
    };
};

// An empty net still gets a page, and it says so.
private _label = _display displayCtrl IDC_S7_CAMLABEL;
if (!isNull _label) then {
    _label ctrlSetText format ["  %1 FEED", ["HELMET CAM", "UAV"] select _isUav];
};
