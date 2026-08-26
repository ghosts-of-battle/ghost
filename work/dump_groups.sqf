// EVERY GROUP EVERY FACTION FIELDS - CfgGroups, all sides.
//
// Paste into the debug console and Exec. Output goes to the RPT:
//   %LOCALAPPDATA%\Arma 3\Arma3_x64_*.rpt   (newest file)
//
// This is the one thing the earlier faction dump did not carry. The unpacked
// A3 tree answers it for the vanilla factions, but Aegis, lxWS, EF and Atlas
// ship their own groups and only a running game can see those.
//
// Markers are cut on by the extractor, so leave them alone.

[] spawn {
    private _lines = [];
    private _nFac = 0;
    private _nGrp = 0;

    {
        private _sideName = _x;
        private _sideCfg = configFile >> "CfgGroups" >> _sideName;
        if (!isClass _sideCfg) then {continue};

        {
            private _fac = _x;
            private _facName = configName _fac;
            _nFac = _nFac + 1;

            _lines pushBack format ["// >>>> GROUPS BEGIN %1 %2 <<<<", _sideName, _facName];
            _lines pushBack format ["// %1 - %2", _facName, getText (_fac >> "name")];

            {
                private _cat = _x;
                _lines pushBack format ["// -- category %1 (%2) --", configName _cat, getText (_cat >> "name")];

                {
                    private _grp = _x;
                    private _units = [];

                    // The units are numbered subclasses; each names a vehicle.
                    {
                        private _v = getText (_x >> "vehicle");
                        if (_v isNotEqualTo "") then {
                            _units pushBack format ["%1|%2", _v, getText (_x >> "rank")];
                        };
                    } forEach ("true" configClasses _grp);

                    _lines pushBack format ["GROUP;%1;%2;%3;%4;%5;%6",
                        _sideName, _facName, configName _cat, configName _grp,
                        getText (_grp >> "name"), _units joinString ","];
                    _nGrp = _nGrp + 1;
                } forEach ("true" configClasses _cat);
            } forEach ("true" configClasses _fac);

            _lines pushBack format ["// >>>> GROUPS END %1 %2 <<<<", _sideName, _facName];
        } forEach ("true" configClasses _sideCfg);
    } forEach ["West", "East", "Guerrilla", "Civilian"];

    {diag_log text _x} forEach _lines;

    hint format ["%1 faction(s), %2 group(s) - all in the RPT", _nFac, _nGrp];
    systemChat format ["GROUPS DUMP: %1 factions, %2 groups -> RPT", _nFac, _nGrp];
};
