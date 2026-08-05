// ---------------------------------------------------------------------------
// MODERN 3DEN attribute system (class Attributes, not legacy class Arguments):
// only this system honours custom `control` classes (our faction dropdown +
// drone pickers). Each attribute carries:
//   property     - unique SQM storage key (ghost_<component>_<name>)
//   control      - Edit / Combo / a custom Cfg3DEN>>Attributes class
//   expression   - sets the runtime logic variable the module function reads
//   defaultValue - a STRING holding the SQF source of the default
//                  (numbers "90", bools "false", strings "'EAST'" / "''")
// ---------------------------------------------------------------------------

// String/number Edit attribute. TYPE = "STRING"|"NUMBER", DEF = SQF-source string.
// The expression uses single-quoted var names so the outer QUOTE (which does
// NOT escape inner double-quotes) still yields a valid config string.
#define AEDIT(NAME,TYPE,DEF,LBL,DESC) \
    class NAME: Edit { \
        property = QUOTE(TRIPLES(ghost,COMPONENT,NAME)); \
        displayName = LBL; \
        tooltip = DESC; \
        typeName = TYPE; \
        defaultValue = DEF; \
        expression = QUOTE(_this setVariable [ARR_2('NAME',_value)]); \
    }

// Custom-control attribute (faction dropdown / drone picker). Stores a STRING.
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

// Per-type drone picker (`<type>_classes`) + concurrent cap (`<type>_cap`).
#define TYPE_ARGS(NAME,CLABEL,PLABEL,CAPDEF,CLASSDEF) \
    class NAME##_classes: Edit { \
        property = QUOTE(TRIPLES(ghost,COMPONENT,NAME##_classes)); \
        displayName = CLABEL; \
        tooltip = "Comma-separated drone classnames; one is picked at random per spawn. Blank disables this type."; \
        typeName = "STRING"; \
        defaultValue = CLASSDEF; \
        expression = QUOTE(_this setVariable [ARR_2('NAME##_classes',_value)]); \
    }; \
    class NAME##_cap: Edit { \
        property = QUOTE(TRIPLES(ghost,COMPONENT,NAME##_cap)); \
        displayName = PLABEL; \
        tooltip = "Maximum concurrent GROUPS of this type (recommended 1-10)."; \
        typeName = "NUMBER"; \
        defaultValue = CAPDEF; \
        expression = QUOTE(_this setVariable [ARR_2('NAME##_cap',_value)]); \
    }

// group_size + group_chance pair for the types that may spawn as groups.
#define GROUP_ARGS(NAME,SLABEL,GLABEL) \
    class NAME##_group_size: Edit { \
        property = QUOTE(TRIPLES(ghost,COMPONENT,NAME##_group_size)); \
        displayName = SLABEL; \
        tooltip = "Airframes per group when this type spawns as a group."; \
        typeName = "NUMBER"; \
        defaultValue = "2"; \
        expression = QUOTE(_this setVariable [ARR_2('NAME##_group_size',_value)]); \
    }; \
    class NAME##_group_chance: Edit { \
        property = QUOTE(TRIPLES(ghost,COMPONENT,NAME##_group_chance)); \
        displayName = GLABEL; \
        tooltip = "Percent chance (0-100) to spawn as a group instead of a single airframe."; \
        typeName = "NUMBER"; \
        defaultValue = "30"; \
        expression = QUOTE(_this setVariable [ARR_2('NAME##_group_chance',_value)]); \
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

    class ghost_moduleAliveDrones: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "ALiVE Drones Controller";
        author = QAUTHOR;
        category = "ghost_drone_modules";
        function = QUOTE(DFUNC(moduleController));
        functionPriority = 1;
        isGlobal = 0;              // runs where placed; the function itself gates to the server
        isTriggerActivated = 0;    // fire at mission start, no trigger needed
        isDisposable = 0;
        is3DEN = 0;
        icon = "\a3\ui_f\data\map\markers\nato\b_uav.paa";

        class Attributes: AttributesBase {
            // --- faction (filters the drone pickers below) ---
            APICK(faction,"ghost_DroneFactionChoice","''","Force Faction","Faction whose drones fill the type pickers below. Change it, click OK, then re-open to refresh the lists.");

            // --- global fleet settings ---
            AEDIT(taor_marker,"STRING","''","Spawn TAOR Marker(s)","Comma-separated area-marker name(s) where drones SPAWN (BIS_fnc_randomPos).");
            AEDIT(objective_marker,"STRING","''","Objective TAOR Marker(s)","Comma-separated area-marker name(s) drones MOVE TO and patrol. Leave blank to patrol the spawn marker instead.");

            AEDIT(altitude_min,"NUMBER","90","Altitude Min (m AGL)","Lower bound of flyInHeight. Rotor / low-flyers sit near this.");
            AEDIT(altitude_max,"NUMBER","450","Altitude Max (m AGL)","Upper bound of flyInHeight. Fixed-wing / high-flyers sit near this.");
            AEDIT(global_airframe_ceiling,"NUMBER","10","Global Airframe Ceiling","HARD server-safety cap on TOTAL live airframes across every type (and EW-spawned drones). Shared. Start low (~10) and raise after a soak.");
            AEDIT(spawn_interval,"NUMBER","30","Spawn Interval (sec)","Trickle cadence: at most one group is spawned per interval, so the fleet fills gradually.");
            AEDIT(drone_lifetime,"NUMBER","15","Drone Lifetime (min)","Minutes a drone loiters AFTER reaching its objective, then flies off-map and despawns (0 = never). Transit time does NOT count. Not reset by combat.");

            class debug: Combo {
                property = "ghost_alive_drones_debug";
                displayName = "Debug Markers";
                tooltip = "Drop a side-colored map marker on every live drone.";
                typeName = "STRING";
                defaultValue = "'false'";
                expression = "_this setVariable ['debug', _value isEqualTo 'true']";
                class Values {
                    class off { name = "Off"; value = "false"; default = 1; };
                    class on  { name = "On";  value = "true"; };
                };
            };

            // --- per-type class lists + caps (defaults use vanilla OPFOR UAVs so a fresh
            //     module works out of the box; pick your drone-mod classes per role) ---
            TYPE_ARGS(antiair,"Anti-Air Classes","Anti-Air Cap","1","''");
            TYPE_ARGS(antiarmor,"Anti-Armor Classes","Anti-Armor Cap","2","'O_UAV_02_CAS_F'");
            GROUP_ARGS(antiarmor,"Anti-Armor Group Size","Anti-Armor Group Chance %");
            TYPE_ARGS(antipersonnel,"Anti-Personnel Classes","Anti-Personnel Cap","2","'O_UAV_02_CAS_F'");
            GROUP_ARGS(antipersonnel,"Anti-Personnel Group Size","Anti-Personnel Group Chance %");
            TYPE_ARGS(loiterfixed,"Loiter Fixed-Wing Classes","Loiter Fixed-Wing Cap","1","''");
            TYPE_ARGS(loiterrotor,"Loiter Rotor Classes","Loiter Rotor Cap","1","'O_T_UAV_04_CAS_F'");
            TYPE_ARGS(recon,"Recon Classes","Recon Cap","2","'O_UAV_01_F'");
            // Ground drones (UGVs): spawned on the surface, no flight model; wander/hunt on the ground.
            TYPE_ARGS(ground,"Ground (UGV) Classes","Ground (UGV) Cap","1","'O_UGV_01_rcws_F'");
            GROUP_ARGS(ground,"Ground Group Size","Ground Group Chance %");
        };

        class ModuleDescription: ModuleDescription {
            description = "Spawns and manages standalone patrol UAVs across a TAOR, with a hard airframe ceiling, trickle-spawn, stuck-watchdog and lifetime churn. Place one per battlespace; set the TAOR marker name(s) in the attributes.";
        };
    };
};
