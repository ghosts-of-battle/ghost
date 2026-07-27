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
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};

// Anything droppable gets the cargo-loading action evaluated when it spawns.
class Extended_Init_EventHandlers {
    class ThingX {
        class ADDON {
            init = QUOTE(call FUNC(isLoadableObject));
        };
    };
    class LandVehicle {
        class ADDON {
            init = QUOTE(call FUNC(isLoadableObject));
        };
    };
    class Boat_F {
        class ADDON {
            init = QUOTE(call FUNC(isLoadableObject));
        };
    };
};
