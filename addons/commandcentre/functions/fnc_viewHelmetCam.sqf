if (not hasInterface) exitWith {};

private _object = GHOST_CC_currentScreenObject;
private _selection = GHOST_CC_currentScreenSelection;

if ((_object isEqualTo objNull)) exitWith {systemChat "Couldn't init Helmet Cam: object."};
if ((_selection < 0)) exitWith {systemChat "Couldn't init Helmet Cam: selection."};

private _idx = lbCurSel 2100;
private _name = lbText [2100, _idx];
private _data = lbData [2100, _idx];

// set the mode
_object setVariable [format ["GHOST_CC_screen_%1_mode", _selection], "HCAM", true];
_object setVariable [format ["GHOST_CC_screen_%1_target", _selection], _name, true];

// obtain render target
private _screen_id = _object getVariable [format ["GHOST_CC_screen_%1_ID", _selection], -1];
private _renderTarget = format["screenrt%1", _screen_id];

private _screen_JIP_ID = format ["GHOST_CC_screen%1_JIP", _object getVariable [format ["GHOST_CC_screen_%1_ID", _selection], -1]];

//rExec the actual cam creation
[_object, _selection, _renderTarget, _data] remoteExec ["ghost_commandcenter_fnc_viewHCamGlobal", 0, _screen_JIP_id];

GHOST_CC_currentScreenObject = nil;
GHOST_CC_currentScreenSelection = nil;

_object setVariable [format ["GHOST_CC_screen_%1_on", _selection], true, true];

closeDialog 1;