class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Edit;
            class Combo;
        };
        class ModuleDescription;
    };

    // PLACING THIS MODULE IS THE ENABLE. No module, no enemy drones - there is no
    // separate on switch to forget, and no system quietly running because a
    // setting defaulted to on in a mission that never asked for one.
    //
    // Every attribute here is an OPERATION value: how many, how often, how
    // likely. WHERE and WHO are never asked for - those come from ALiVE's own
    // commanders, their TAORs and their objectives, so this cannot be pointed
    // at ground its commander does not operate on.
    class ghost_moduleUAS: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Ghost - Enemy Drones";
        author = QAUTHOR;
        category = "ghost_modules";
        function = QUOTE(DFUNC(moduleController));
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\a3\ui_f\data\map\markers\nato\o_uav.paa";

        class Attributes: AttributesBase {
            // OWN GROUND IS THE DEFAULT - the user's call, twice: "blue
            // drones still in red taor". A side's patrols orbit its own
            // objectives; sending them over the enemy is the opt-in.
            class patrolOver: Combo {
                property = QGVAR(patrolOver);
                displayName = "Patrol Over";
                tooltip = "OWN GROUND: a side's drones orbit its own objectives as overwatch - blue drones stay over blue ground. ENEMY GROUND: they orbit the objectives of the sides they are hostile to instead - reconnaissance over the enemy.";
                typeName = "NUMBER";
                defaultValue = "1";
                expression = QUOTE(_this setVariable [ARR_2('patrolOver',_value)]);
                class Values {
                    class own { name = "Own ground"; value = 1; default = 1; };
                    class enemy { name = "Enemy ground"; value = 0; };
                };
            };
            class baseMax: Edit {
                property = QGVAR(baseMax);
                displayName = "Airframes Per Side";
                tooltip = "How many drones a commander flies at once while its supply is intact.";
                typeName = "NUMBER";
                defaultValue = "8";
                expression = QUOTE(_this setVariable [ARR_2('baseMax',_value)]);
            };
            // WHAT AIRFRAME EACH SIDE FLIES, when the faction scan is not
            // wanted. A faction with no UAV of its own falls back to its
            // side's vanilla airframe, and the fallbacks all LOOK alike
            // enough that "west drones over the east battery" was an east
            // patrol in a borrowed airframe.
            class uavWest: Edit {
                property = QGVAR(uavWest);
                displayName = "West Drone Classes";
                tooltip = "Comma-separated UAV classes WEST patrols fly; each launch draws one. BLANK: the faction's own UAV, vanilla fallback.";
                typeName = "STRING";
                defaultValue = "''";
                expression = QUOTE(_this setVariable [ARR_2('uavWest',_value)]);
            };
            class uavEast: Edit {
                property = QGVAR(uavEast);
                displayName = "East Drone Classes";
                tooltip = "Comma-separated UAV classes EAST patrols fly; each launch draws one. BLANK: the faction's own UAV, vanilla fallback.";
                typeName = "STRING";
                defaultValue = "''";
                expression = QUOTE(_this setVariable [ARR_2('uavEast',_value)]);
            };
            class uavGuer: Edit {
                property = QGVAR(uavGuer);
                displayName = "Independent Drone Classes";
                tooltip = "Comma-separated UAV classes INDEPENDENT patrols fly; each launch draws one. BLANK: the faction's own UAV, vanilla fallback.";
                typeName = "STRING";
                defaultValue = "''";
                expression = QUOTE(_this setVariable [ARR_2('uavGuer',_value)]);
            };
            class reducedMax: Edit {
                property = QGVAR(reducedMax);
                displayName = "After A Cache Is Lost";
                tooltip = "The ceiling while a supply cache is down. Destroying caches is how players thin the sky.";
                typeName = "NUMBER";
                defaultValue = "3";
                expression = QUOTE(_this setVariable [ARR_2('reducedMax',_value)]);
            };
            class windowMin: Edit {
                property = QGVAR(windowMin);
                displayName = "Outage Min (sec)";
                tooltip = "Shortest time a destroyed cache holds the ceiling down.";
                typeName = "NUMBER";
                defaultValue = "600";
                expression = QUOTE(_this setVariable [ARR_2('windowMin',_value)]);
            };
            class windowMax: Edit {
                property = QGVAR(windowMax);
                displayName = "Outage Max (sec)";
                tooltip = "Longest time. The real window is rolled between the two.";
                typeName = "NUMBER";
                defaultValue = "1800";
                expression = QUOTE(_this setVariable [ARR_2('windowMax',_value)]);
            };
            class cachesPerSide: Edit {
                property = QGVAR(cachesPerSide);
                displayName = "Caches Per Side";
                tooltip = "Supply caches placed in each commander's area for players to find.";
                typeName = "NUMBER";
                defaultValue = "3";
                expression = QUOTE(_this setVariable [ARR_2('cachesPerSide',_value)]);
            };
        };

        class ModuleDescription: ModuleDescription {
            description[] = {
                "Placing this module turns on enemy drones. Without it, the system is off.",
                "",
                "Airframes Per Side - How many drones a commander flies at once while its supply is intact",
                "After A Cache Is Lost - The ceiling while a supply cache is down",
                "Outage Min (sec) - Shortest time a destroyed cache holds the ceiling down",
                "Outage Max (sec) - Longest time",
                "Caches Per Side - Supply caches placed in each commander's area for players to find",
            };
        };
    };
};
