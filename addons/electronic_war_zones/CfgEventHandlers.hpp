class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        // Runs everywhere: the debug commands register into each machine's own
        // command table, and the dispatcher decides where each one executes.
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
        serverInit = QUOTE(call COMPILE_FILE(XEH_postInitServer));
        clientInit = QUOTE(call COMPILE_FILE(XEH_postInitClient));
    };
};
