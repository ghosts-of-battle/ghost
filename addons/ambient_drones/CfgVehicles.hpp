// MODERN 3DEN attribute system (class Attributes) - required for custom
// `control` classes (faction dropdown + drone pickers). See the drones
// module for the full rationale. Each attribute wires property/control/
// expression/defaultValue; expression sets the exact logic variable the
// module function reads.

#define AEDIT(NAME,TYPE,DEF,LBL,DESC) \
    class NAME: Edit { \
        property = QUOTE(TRIPLES(ghost,COMPONENT,NAME)); \
        displayName = LBL; \
        tooltip = DESC; \
        typeName = TYPE; \
        defaultValue = DEF; \
        expression = QUOTE(_this setVariable [ARR_2('NAME',_value)]); \
    }

#define APICK(NAME,CTRL,DEF,LBL,DESC) \
    class NAME { \
        property = QUOTE(TRIPLES(ghost,COMPONENT,NAME)); \
        displayName = LBL; \
        tooltip = DESC; \
        control = CTRL; \
        typeName = "STRING"; \
        defaultValue = DEF; \
        expression = QUOTE(_this setVariable [ARR_2('NAME',_value)]); \
    }

// Per-type: drone picker + concurrent cap + spawn-priority weight.
#define AMB_TYPE(NAME,CLABEL,CAPLABEL,PRLABEL,CAPDEF,PRDEF,CLASSDEF) \
    class NAME##_classes: Edit { \
        property = QUOTE(TRIPLES(ghost,COMPONENT,NAME##_classes)); \
        displayName = CLABEL; \
        tooltip = "Comma-separated drone classnames; one is picked at random per spawn. Blank = this type never spawns."; \
        typeName = "STRING"; \
        defaultValue = CLASSDEF; \
        expression = QUOTE(_this setVariable [ARR_2('NAME##_classes',_value)]); \
    }; \
    class NAME##_cap: Edit { \
        property = QUOTE(TRIPLES(ghost,COMPONENT,NAME##_cap)); \
        displayName = CAPLABEL; \
        tooltip = "Max concurrent groups of this type spawned by this module."; \
        typeName = "NUMBER"; \
        defaultValue = CAPDEF; \
        expression = QUOTE(_this setVariable [ARR_2('NAME##_cap',_value)]); \
    }; \
    class NAME##_priority: Edit { \
        property = QUOTE(TRIPLES(ghost,COMPONENT,NAME##_priority)); \
        displayName = PRLABEL; \
        tooltip = "Relative spawn weight vs other eligible types; higher = chosen more often. 0 = never."; \
        typeName = "NUMBER"; \
        defaultValue = PRDEF; \
        expression = QUOTE(_this setVariable [ARR_2('NAME##_priority',_value)]); \
    }

class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Edit;
            class Combo;
        };
        class ModuleDescription;
    };

    class ghost_moduleAmbientDrones: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Ambient Drones (near players)";
        author = QAUTHOR;
        category = "ghost_drone_modules";
        function = QUOTE(DFUNC(moduleController));
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\a3\ui_f\data\map\markers\nato\b_uav.paa";

        class Attributes: AttributesBase {
            APICK(faction,"ghost_DroneFactionChoice","''","Force Faction","Faction whose drones fill the type pickers below. Change it, click OK, then re-open to refresh the lists.");

            AEDIT(taor_marker,"STRING","''","TAOR Marker(s)","Comma-separated area-marker name(s). Only players INSIDE these are targeted. Blank = whole map.");
            AEDIT(spawn_radius,"NUMBER","2000","Spawn Radius (m)","Drones spawn within this distance of a random enemy player.");
            AEDIT(spawn_min_dist,"NUMBER","600","Min Spawn Distance (m)","Never spawn closer than this to the target player.");
            AEDIT(interval_min,"NUMBER","120","Timer Window Min (sec)","Lower bound of the random wait between spawns.");
            AEDIT(interval_max,"NUMBER","640","Timer Window Max (sec)","Upper bound of the random wait between spawns.");
            AEDIT(altitude_min,"NUMBER","90","Altitude Min (m AGL)","Lower bound of flyInHeight (rotor / low-flyers).");
            AEDIT(altitude_max,"NUMBER","450","Altitude Max (m AGL)","Upper bound of flyInHeight (fixed-wing / high-flyers).");
            AEDIT(drone_lifetime,"NUMBER","15","Drone Lifetime (min)","Non-loiter drones fly off and despawn after this (0 = never). Loiter types despawn when out of ammo.");
            AEDIT(global_airframe_ceiling,"NUMBER","10","Global Airframe Ceiling","HARD cap on TOTAL live airframes, SHARED with the Drones + EW addons. Start low.");
            AEDIT(blacklist_marker,"STRING","''","Blacklist Marker(s)","Comma-separated area-marker name(s); drones never spawn inside these (bases, safe zones).");

            class debug: Combo {
                property = "ghost_ambient_drones_debug";
                displayName = "Debug Markers";
                tooltip = "Side-colored map marker on every ambient drone.";
                typeName = "STRING";
                defaultValue = "'false'";
                expression = "_this setVariable ['debug', _value isEqualTo 'true']";
                class Values {
                    class off { name = "Off"; value = "false"; default = 1; };
                    class on  { name = "On";  value = "true"; };
                };
            };

            // --- per-type class lists + caps + priorities ---
            AMB_TYPE(antiair,"Anti-Air Classes","Anti-Air Cap","Anti-Air Priority","1","1","''");
            AMB_TYPE(antiarmor,"Anti-Armor Classes","Anti-Armor Cap","Anti-Armor Priority","2","4","'O_UAV_02_CAS_F'");
            AMB_TYPE(antipersonnel,"Anti-Personnel Classes","Anti-Personnel Cap","Anti-Personnel Priority","2","5","'O_UAV_02_CAS_F'");
            AMB_TYPE(loiterfixed,"Loiter Fixed-Wing Classes","Loiter Fixed-Wing Cap","Loiter Fixed-Wing Priority","1","1","''");
            AMB_TYPE(loiterrotor,"Loiter Rotor Classes","Loiter Rotor Cap","Loiter Rotor Priority","1","2","'O_T_UAV_04_CAS_F'");
            AMB_TYPE(recon,"Recon Classes","Recon Cap","Recon Priority","2","3","'O_UAV_01_F'");
            AMB_TYPE(ground,"Ground (UGV) Classes","Ground (UGV) Cap","Ground (UGV) Priority","1","2","'O_UGV_01_rcws_F'");
        };

        class ModuleDescription: ModuleDescription {
            description = "Spawns drones within a radius of random enemy players on a random-window timer, choosing the drone type by weighted priority. Shares the Drones airframe ceiling + reaper. Requires the Drones addon.";
        };
    };
};
