#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_startPosMark

Description:
    Marks the aircraft's start position on the map.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
[] spawn {
	private _mapCtrl = ((findDisplay INSERTION_IDD) displayCtrl 1200);


	private _markerName = str ACE_player;
	createMarkerLocal [_markerName , [(position ACE_player) select 0,(position ACE_player) select 1]];
	_markerName setMarkerTypeLocal QGVAR(Admin_PositionMarker);
	//_markerName setMarkerPosLocal [(position player) select 0,(position player) select 1];
	_mapCtrl ctrlMapAnimAdd [2, 0.5, markerPos _markerName];
	ctrlMapAnimCommit _mapCtrl;
	waitUntil {!(ctrlShown _mapCtrl)};
	deleteMarkerLocal _markerName;
};
