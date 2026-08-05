class CBA_Extended_EventHandlers;

class CfgVehicles {
    // External. The airframe comes from RKSL - see config.cpp for why this addon
    // does not list that mod as a required addon.
    class rksla3_uav_h450_2;

    class GVAR(h450): rksla3_uav_h450_2 {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "H450 Loitering Munition";
        editorSubcategory = "EdSubcat_Drones";

        // The whole airframe IS the weapon, so anything hanging off it is dead
        // weight. A loitering munition that can also strafe is a gunship.
        class Turrets {};
        weapons[] = {};
        magazines[] = {};

        // Goes off when it dies, however it dies. Flown into a target that is a
        // strike; shot down on the way in it is a warhead falling out of the
        // sky, which is the correct answer to intercepting one and makes the
        // CIWS worth having.
        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {};
        };
    };
};
