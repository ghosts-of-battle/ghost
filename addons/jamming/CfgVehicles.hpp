class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Edit;
        };
        class ModuleDescription;
    };

    // PLACING THIS MODULE IS THE ENABLE. No module, no jamming - there is no
    // separate on switch to forget, and no system quietly running because a
    // setting defaulted to on in a mission that never asked for one.
    //
    // Every attribute here is an OPERATION value: how many, how often, how
    // likely. WHERE and WHO are never asked for - those come from ALiVE's own
    // commanders, their TAORs and their objectives, so this cannot be pointed
    // at ground its commander does not operate on.
    class ghost_moduleJamming: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Ghost - Jamming";
        author = QAUTHOR;
        category = "ghost_modules";
        function = QUOTE(DFUNC(moduleController));
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\a3\ui_f\data\map\markers\nato\o_installation.paa";

        class Attributes: AttributesBase {
            class largeRadius: Edit {
                property = QGVAR(largeRadius);
                displayName = "Hub Radius (m)";
                tooltip = "Reach of a communications hub, placed at the biggest objectives.";
                typeName = "NUMBER";
                defaultValue = "900";
                expression = QUOTE(_this setVariable [ARR_2('largeRadius',_value)]);
            };
            class smallRadius: Edit {
                property = QGVAR(smallRadius);
                displayName = "Terminal Radius (m)";
                tooltip = "Reach of a terminal, placed at the rest.";
                typeName = "NUMBER";
                defaultValue = "300";
                expression = QUOTE(_this setVariable [ARR_2('smallRadius',_value)]);
            };
            class objectiveShare: Edit {
                property = QGVAR(objectiveShare);
                displayName = "Objectives With Jammers (%)";
                tooltip = "Share of a commander's objectives that get an emitter. This shapes a small map; the cap below is what bounds a big one.";
                typeName = "NUMBER";
                defaultValue = "30";
                expression = QUOTE(_this setVariable [ARR_2('objectiveShare',_value)]);
            };
            class maxPerSide: Edit {
                property = QGVAR(maxPerSide);
                displayName = "Max Jammers Per Side";
                tooltip = "Hard ceiling per commander whatever the share works out to. A percentage has no ceiling - 30% of 173 objectives is 52 emitters, and three commanders put 156 props on the map in one frame.";
                typeName = "NUMBER";
                defaultValue = "8";
                expression = QUOTE(_this setVariable [ARR_2('maxPerSide',_value)]);
            };
        };

        class ModuleDescription: ModuleDescription {
            description[] = {
                "Placing this module turns on jamming. Without it, the system is off.",
                "",
                "Hub Radius (m) - Reach of a communications hub, placed at the biggest objectives",
                "Terminal Radius (m) - Reach of a terminal, placed at the rest",
                "Objectives With Jammers (%) - Share of a commander's objectives that get an emitter",
                "Max Jammers Per Side - Hard ceiling per commander whatever the share works out to",
            };
        };
    };
};
