class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};
class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};

// The main map opening and closing. This is XEH's job, not
// CBA_fnc_addDisplayHandler's - that one takes an event TYPE and attaches to
// the mission display, so passing it a display class name makes the engine
// reject "rscdisplaymainmap" as an unknown event, twice per mission start.
class Extended_DisplayLoad_EventHandlers {
    class RscDisplayMainMap {
        GVAR(showPicker) = QUOTE(_this call FUNC(mapOpened));
    };
};
class Extended_DisplayUnload_EventHandlers {
    class RscDisplayMainMap {
        GVAR(dropTool) = QUOTE(call FUNC(mapClosed));
    };
};
