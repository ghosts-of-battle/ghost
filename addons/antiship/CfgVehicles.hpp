class CfgVehicles {
    // --- the launcher --------------------------------------------------------
    // Ancestry restated so the turret override below has something real to
    // inherit (same pattern as the naval addon). Each link keeps its own
    // parent, and the chain stops at MainTurret without reaching inside it.
    //
    // This is a MERGE, not a replacement: a class body here annotates the
    // vanilla class rather than overwriting it, which is why restating the
    // chain is safe and why the override below has a base to name. Deleting it
    // and reaching for a parentless nested reopen instead severs the turret and
    // strips primaryGunner - that has been tried.
    //
    // DO NOT CHASE the "Duplicate HitPoint name 'HitGun'/'HitTurret'" warnings
    // to this file. VERIFIED, not assumed: a3\static_f_sams\sam_system_04
    // declares HitTurret at line 203 and HitGun at 207 under HitPoints, then
    // declares both again at 451 and 474 inside the turret - and adds a
    // differently-cased `Hitpoints: HitPoints` at 228 on top.
    //
    // The proof it is not ours is in any RPT that spawns statics: the same two
    // lines appear for the untouched vanilla O_T_SAM_System_04_F and
    // O_T_Radar_System_02_F, and for other mods' classes on the same chassis.
    // Ours is named only because ours is the leaf being spawned. It fires once
    // per class at first spawn, not per frame.
    //
    // Silencing it means restating BI's whole damage model on our leaf, which
    // is a real behaviour change to remove two cosmetic lines. Not worth it -
    // unlike the CM_ warnings below, which ARE ours to answer and now are.
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

        // "Cannot evaluate 'CM_none'" / "'CM_Missile'", fixed at the leaf.
        //
        // BI SHIPPED THE MACRO NAMES, NOT THE NUMBERS. a3\static_f_sams\
        // sam_system_04 line 162 reads lockDetectionSystem="CM_none" and 163
        // incomingMissileDetectionSystem="CM_Missile" - strings where the engine
        // wants a number, because the #defines never expanded when the config
        // was built. radar_system_02 has the identical pair at 161-162.
        //
        // Every vehicle on either chassis reports it, ours included, and it is
        // the one part of this that IS ours to answer: restating the two
        // properties with the values the macros stand for costs nothing and
        // takes our two lines out of the log. 0 and 16 are what comparable
        // vanilla statics carry for the same pair.
        lockDetectionSystem = 0;
        incomingMissileDetectionSystem = 16;
        scopeCurator = 2;
        displayName = "3K72 Burevestnik (Anti-Ship)";
        // The SAM chassis is vehicleClass "Autonomous", which Eden maps to the
        // Drones category - land it under Turrets with the other statics instead
        vehicleClass = "Static";
        editorSubcategory = "EdSubcat_Turrets";

        // It fires by script, on the battery's schedule. Leaving the parent's SAM
        // armament on would give it a second job it was never meant to have -
        // and an anti-ship battery that also swats aircraft is an air defence
        // site wearing the wrong name.
        //
        // The missiles live on MainTurret, and the override must colon-inherit
        // (Turrets: Turrets, MainTurret: MainTurret) - a parentless
        // redeclaration shadows the inherited turret instead, which strips the
        // gunner config and floods the RPT with
        // "No entry ... MainTurret.primaryGunner".
        //
        // ONLY the turret is emptied. The vehicle's own weapons[] are left
        // alone - clearing them was once blamed for the CM warnings below and
        // that was wrong; see the two properties above, which are the real
        // cause and are now overridden.
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {};
                magazines[] = {};
            };
        };
    };

    // --- the decoy -----------------------------------------------------------
    // A missile is not a target Arma's AI can engage, so a crewed vehicle rides
    // along with it and the AI engages that instead. Same technique the CIWS
    // uses; declared here rather than borrowed so this addon stands alone and a
    // mission can have anti-ship fire without loading a point-defence addon.
    class B_UAV_01_F;


    // --- the eyes ------------------------------------------------------------
    // A surface search radar, on the CSAT air-defence set's chassis. It exists
    // so the launchers do not have to see anything: they sit inland behind
    // terrain, and THIS is the thing on the headland with a view of the water -
    // findable, killable, and the difference between a battery that shoots and
    // one that is blind.
    //
    // Only a forward declaration is needed. The turrets are not touched here
    // (the parent's air-search sensor is left exactly as it is; surface search
    // is scripted on top), so there is nothing to reach inside and restate.
    class O_Radar_System_02_F;
    class GVAR(radar): O_Radar_System_02_F {
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        displayName = "Surface Search Radar";
        // Eden's category comes from vehicleClass, not editorSubcategory - the
        // parent is Autonomous, which files a radar under Drones.
        vehicleClass = "Static";
        editorSubcategory = "EdSubcat_Turrets";

        // Same unexpanded macros as the launcher - radar_system_02 lines
        // 161-162 carry the identical pair. See the note on the launcher.
        lockDetectionSystem = 0;
        incomingMissileDetectionSystem = 16;
    };


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
        category = "ghost_modules";
        function = QUOTE(DFUNC(moduleController));
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\A3\UI_F\Data\Map\Markers\NATO\o_naval.paa";

        class Attributes: AttributesBase {
            // Per-side batteries: an on/off, the side's TAOR markers, and the
            // side's launchers. An enabled side gets a battery SITED BY THE
            // ADDON - coastal ground inside its markers. With every switch
            // off, the module works the classic way: one battery for the
            // module's own side, standing at the module.
            class enableWest: Combo {
                property = QGVAR(enableWest);
                displayName = "BLUFOR Battery";
                tooltip = "Stand up a BLUFOR coastal battery inside the BLUFOR TAOR markers.";
                typeName = "BOOL";
                defaultValue = "false";
                expression = QUOTE(_this setVariable [ARR_2('enableWest',_value)]);
                class Values {
                    class off { name = "Off"; value = 0; default = 1; };
                    class on { name = "On"; value = 1; };
                };
            };
            class taorWest: Edit {
                property = QGVAR(taorWest);
                displayName = "BLUFOR TAOR Markers";
                tooltip = "Comma-separated area-marker names the BLUFOR battery is sited inside. The addon picks coastal ground within them.";
                typeName = "STRING";
                defaultValue = "''";
                expression = QUOTE(_this setVariable [ARR_2('taorWest',_value)]);
            };
            class launcherWest: Edit {
                property = QGVAR(launcherWest);
                displayName = "BLUFOR Launcher Classes";
                tooltip = "Comma-separated launcher classes for the BLUFOR battery. BLANK uses the shared Launcher Classes below.";
                typeName = "STRING";
                defaultValue = "''";
                expression = QUOTE(_this setVariable [ARR_2('launcherWest',_value)]);
            };
            class enableEast: Combo {
                property = QGVAR(enableEast);
                displayName = "OPFOR Battery";
                tooltip = "Stand up an OPFOR coastal battery inside the OPFOR TAOR markers.";
                typeName = "BOOL";
                defaultValue = "false";
                expression = QUOTE(_this setVariable [ARR_2('enableEast',_value)]);
                class Values {
                    class off { name = "Off"; value = 0; default = 1; };
                    class on { name = "On"; value = 1; };
                };
            };
            class taorEast: Edit {
                property = QGVAR(taorEast);
                displayName = "OPFOR TAOR Markers";
                tooltip = "Comma-separated area-marker names the OPFOR battery is sited inside. The addon picks coastal ground within them.";
                typeName = "STRING";
                defaultValue = "''";
                expression = QUOTE(_this setVariable [ARR_2('taorEast',_value)]);
            };
            class launcherEast: Edit {
                property = QGVAR(launcherEast);
                displayName = "OPFOR Launcher Classes";
                tooltip = "Comma-separated launcher classes for the OPFOR battery. BLANK uses the shared Launcher Classes below.";
                typeName = "STRING";
                defaultValue = "''";
                expression = QUOTE(_this setVariable [ARR_2('launcherEast',_value)]);
            };
            class enableGuer: Combo {
                property = QGVAR(enableGuer);
                displayName = "Independent Battery";
                tooltip = "Stand up an Independent coastal battery inside the Independent TAOR markers.";
                typeName = "BOOL";
                defaultValue = "false";
                expression = QUOTE(_this setVariable [ARR_2('enableGuer',_value)]);
                class Values {
                    class off { name = "Off"; value = 0; default = 1; };
                    class on { name = "On"; value = 1; };
                };
            };
            class taorGuer: Edit {
                property = QGVAR(taorGuer);
                displayName = "Independent TAOR Markers";
                tooltip = "Comma-separated area-marker names the Independent battery is sited inside. The addon picks coastal ground within them.";
                typeName = "STRING";
                defaultValue = "''";
                expression = QUOTE(_this setVariable [ARR_2('taorGuer',_value)]);
            };
            class launcherGuer: Edit {
                property = QGVAR(launcherGuer);
                displayName = "Independent Launcher Classes";
                tooltip = "Comma-separated launcher classes for the Independent battery. BLANK uses the shared Launcher Classes below.";
                typeName = "STRING";
                defaultValue = "''";
                expression = QUOTE(_this setVariable [ARR_2('launcherGuer',_value)]);
            };
            class launcher_classes: Edit {
                property = QGVAR(launcher_classes);
                displayName = "Launcher Classes";
                tooltip = "Comma-separated static classes the battery stands up around the module. BLANK places the addon's own 3K72 Burevestnik. One is drawn per launcher.";
                typeName = "STRING";
                defaultValue = "''";
                expression = QUOTE(_this setVariable [ARR_2('launcher_classes',_value)]);
            };
            class launcher_count: Edit {
                property = QGVAR(launcher_count);
                displayName = "Launchers";
                tooltip = "How many launchers the battery places. Kill them all and the battery is silenced.";
                typeName = "NUMBER";
                defaultValue = "2";
                expression = QUOTE(_this setVariable [ARR_2('launcher_count',_value)]);
            };
            class missile_classes: Edit {
                property = QGVAR(missile_classes);
                displayName = "Missile Classes";
                tooltip = "Comma-separated missile classes; each launch draws one. BLANK fires the addon's own Burevestnik round.";
                typeName = "STRING";
                defaultValue = "''";
                expression = QUOTE(_this setVariable [ARR_2('missile_classes',_value)]);
            };
            class decoy_classes: Edit {
                property = QGVAR(decoy_classes);
                displayName = "Decoy Drone Classes";
                tooltip = "Comma-separated vehicle classes for the decoy that rides the missile; each launch draws one. BLANK uses the addon's own drone, side-matched hostile to the target ship. Pick a class whose SIDE is hostile to the ships it will attack, or their escorts will not engage it.";
                typeName = "STRING";
                defaultValue = "''";
                expression = QUOTE(_this setVariable [ARR_2('decoy_classes',_value)]);
            };
            class rearm_interval: Edit {
                property = QGVAR(rearm_interval);
                displayName = "Rearm Interval (sec)";
                tooltip = "Every this many seconds the surviving launchers are restocked to full. 0 turns rearming off.";
                typeName = "NUMBER";
                defaultValue = "600";
                expression = QUOTE(_this setVariable [ARR_2('rearm_interval',_value)]);
            };
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
            description = "Coastal anti-ship batteries, one module for every side. Switch a side on and the addon sites a battery on coastal ground inside that side's TAOR markers, with that side's launchers, and places crewed launchers there - kill them all and the battery is silenced. Every interval a battery looks for a hull inside its search range and puts a Burevestnik into it - climb, sea-skimming cruise, terminal dive; it can be met head-on and it carries a decoy the defending side's AA will engage. With every switch off, the module is one battery for its own side, standing where you put it.";
        };
    };
};
