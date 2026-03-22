params ["_group", "_huntTrigger"];

[{
    (_this select 0) params ["_group", "_huntTrigger"];
    private _errorCode = -1;

    if (({alive _x} count units _group) == 0) then{
        deleteGroup _group;
    }else {
        private _huntTargets = allPlayers inAreaArray _huntTrigger;
        if (_huntTargets isNotEqualTo []) then {
            while {(count (waypoints _group)) > 0} do
            {
                deleteWaypoint ((waypoints _group) select 0);
            };
            private _wp1 = _group addWaypoint [getPos (_huntTargets select 0), 0];
            _wp1 setWaypointType "SAD";
        };
    };

    if (_errorCode != -1) then {
        //Error or Success, close dialog and remove PFEH
        [_this select 1] call CBA_fnc_removePerFrameHandler;
    };

},15 , [_group, _huntTrigger]] call CBA_fnc_addPerFrameHandler;
