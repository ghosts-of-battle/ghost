class CfgVehicles {
    // --- the launcher --------------------------------------------------------
    // Ancestry restated so the turret override below has something real to
    // inherit (same pattern as the naval addon). Each link keeps its own
    // parent, and the chain stops at MainTurret without reaching inside it.
    class StaticWeapon;
    class StaticMGWeapon: StaticWeapon {
        class Turrets {
            class MainTurret;
        };
    };
    class SAM_System_04_base_F: StaticMGWeapon {
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
    };
    class O_SAM_System_04_F: SAM_System_04_base_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
    };

    class GVAR(launcher): O_SAM_System_04_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "3K72 Burevestnik (Anti-Ship)";
        // The SAM chassis is vehicleClass "Autonomous", which Eden maps to the
        // Drones category - land it under Turrets with the other statics instead
        vehicleClass = "Static";
        editorSubcategory = "EdSubcat_Turrets";

        // It fires by script, on the battery's schedule. Leaving the parent's SAM
        // armament on would give it a second job it was never meant to have -
        // and an anti-ship battery that also swats aircraft is an air defence
        // site wearing the wrong name. The missiles live on MainTurret, and the
        // override must colon-inherit (Turrets: Turrets, MainTurret: MainTurret)
        // - a parentless redeclaration shadows the inherited turret instead,
        // which strips the gunner config and floods the RPT with
        // "No entry ... MainTurret.primaryGunner".
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {};
                magazines[] = {};
            };
        };
        weapons[] = {};
        magazines[] = {};
    };

    // --- the decoy -----------------------------------------------------------
    // A missile is not a target Arma's AI can engage, so a crewed vehicle rides
    // along with it and the AI engages that instead. Same technique the CIWS
    // uses; declared here rather than borrowed so this addon stands alone and a
    // mission can have anti-ship fire without loading a point-defence addon.
    class B_UAV_01_F;

    class GVAR(decoyBase): B_UAV_01_F {
        author = QAUTHOR;
        scope = 1;
        scopeCurator = 0;
        displayName = "Inbound Missile";
        model = "\A3\Structures_F\Training\InvisibleTarget_F.p3d";
        icon = "iconExplosiveAT";
        isUav = 0;
        sensitivity = 0;
        sensitivityEar = 0;
        audible = 0;
        camouflage = 0;
        cost = 10000000;
        threat[] = {1, 1, 0};
        armor = 6;
        textSingular = "inbound missile";
        textPlural = "inbound missiles";
    };
    class GVAR(decoy_west): GVAR(decoyBase) { side = 1; faction = "BLU_F"; crew = "B_UAV_AI"; };
    class GVAR(decoy_east): GVAR(decoyBase) { side = 0; faction = "OPF_F"; crew = "O_UAV_AI"; };
    class GVAR(decoy_guer): GVAR(decoyBase) { side = 2; faction = "IND_F"; crew = "I_UAV_AI"; };

    // --- the module ----------------------------------------------------------
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Edit;
            class Combo;
        };
        class ModuleDescription;
    };

    class ghost_moduleAntiShip: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Anti-Ship Battery (Burevestnik)";
        author = QAUTHOR;
        category = "ghost_ambient_modules";
        function = QUOTE(DFUNC(moduleController));
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\A3\UI_F\Data\Map\Markers\NATO\o_naval.paa";

        class Attributes: AttributesBase {
            class interval: Edit {
                property = QGVAR(interval);
                displayName = "Interval (sec)";
                tooltip = "Seconds between launches. 1200 is twenty minutes.";
                typeName = "NUMBER";
                defaultValue = "1200";
                expression = QUOTE(_this setVariable [ARR_2('interval',_value)]);
            };
            class target_classes: Edit {
                property = QGVAR(target_classes);
                displayName = "Target Classes";
                tooltip = "Comma-separated, matched by INHERITANCE - so a base class covers every part built from it, and 'Ship' covers boats. The static carrier and destroyer differ between DLCs; add whatever your mission actually uses.";
                typeName = "STRING";
                defaultValue = "'Land_Carrier_01_base_F,Land_Destroyer_01_base_F,Ship'";
                expression = QUOTE(_this setVariable [ARR_2('target_classes',_value)]);
            };
            class search_range: Edit {
                property = QGVAR(search_range);
                displayName = "Search Range (m)";
                tooltip = "How far from the launcher the battery looks for a hull.";
                typeName = "NUMBER";
                defaultValue = "12000";
                expression = QUOTE(_this setVariable [ARR_2('search_range',_value)]);
            };
            class missile_speed: Edit {
                property = QGVAR(missile_speed);
                displayName = "Missile Speed (m/s)";
                tooltip = "Deliberately faster than anything trying to stop it - a tail chase is hopeless, so it has to be engaged head-on and early.";
                typeName = "NUMBER";
                defaultValue = "900";
                expression = QUOTE(_this setVariable [ARR_2('missile_speed',_value)]);
            };
            class cruise_alt: Edit {
                property = QGVAR(cruise_alt);
                displayName = "Cruise Altitude (m)";
                tooltip = "Height above sea on the run in. Low is harder to see coming and harder to hit.";
                typeName = "NUMBER";
                defaultValue = "45";
                expression = QUOTE(_this setVariable [ARR_2('cruise_alt',_value)]);
            };
            class terminal_range: Edit {
                property = QGVAR(terminal_range);
                displayName = "Terminal Range (m)";
                tooltip = "Distance from the hull where it stops cruising and dives onto the target.";
                typeName = "NUMBER";
                defaultValue = "1200";
                expression = QUOTE(_this setVariable [ARR_2('terminal_range',_value)]);
            };
            class interceptable: Combo {
                property = QGVAR(interceptable);
                displayName = "Can Be Shot Down";
                tooltip = "On: the missile carries a decoy so AA and CIWS can engage it. Off: nothing on the map can touch it, which makes the launcher the only answer.";
                typeName = "STRING";
                defaultValue = "'true'";
                expression = QUOTE(_this setVariable [ARR_2('interceptable',_value isEqualTo 'true')]);
                class Values {
                    class off {
                        name = "Off";
                        value = "false";
                    };
                    class on {
                        name = "On";
                        value = "true";
                    };
                };
            };
            class debug: Combo {
                property = QGVAR(debug);
                displayName = "Debug";
                tooltip = "Logs target selection, launches, intercepts and misses to the RPT.";
                typeName = "STRING";
                defaultValue = "'false'";
                expression = QUOTE(_this setVariable [ARR_2('debug',_value isEqualTo 'true')]);
                class Values {
                    class off {
                        name = "Off";
                        value = "false";
                    };
                    class on {
                        name = "On";
                        value = "true";
                    };
                };
            };
        };

        class ModuleDescription: ModuleDescription {
            description = "A coastal anti-ship battery. Every interval it looks for a hull inside its search range and puts a Burevestnik into it - climb, sea-skimming cruise, terminal dive. The missile flies faster than any interceptor, so it has to be met head-on rather than chased, and it can be shot down: it carries a decoy the defending side's AA and CIWS will engage. Synchronise 3K72 launchers to the module to give it a firing position that can be destroyed; without one it fires from the module.";
            sync[] = {"AnyVehicle", "AnyStaticObject"};
        };
    };
};
