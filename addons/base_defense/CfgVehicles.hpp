// MODERN 3DEN attribute system (class Attributes) - required for custom
// `control` classes (faction dropdown + drone pickers). See drones for
// the rationale. expression sets the exact logic variable the module reads.

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

// Bool attribute rendered as a Combo; stores a real boolean via expression.
#define ABOOL(NAME,DEFONOFF,LBL,DESC) \
    class NAME: Combo { \
        property = QUOTE(TRIPLES(ghost,COMPONENT,NAME)); \
        displayName = LBL; \
        tooltip = DESC; \
        typeName = "STRING"; \
        defaultValue = DEFONOFF; \
        expression = QUOTE(_this setVariable [ARR_2('NAME',_value isEqualTo 'true')]); \
        class Values { \
            class off { name = "Off"; value = "false"; }; \
            class on  { name = "On";  value = "true"; }; \
        }; \
    }

// Per-type: drone picker + concurrent cap.
#define DEF_TYPE(NAME,CLABEL,CAPLABEL,CAPDEF,CLASSDEF) \
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
        tooltip = "Max concurrent groups of this type defending the base."; \
        typeName = "NUMBER"; \
        defaultValue = CAPDEF; \
        expression = QUOTE(_this setVariable [ARR_2('NAME##_cap',_value)]); \
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

    class ghost_moduleBaseDefense: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Base Defense (drones + recon arty)";
        author = QAUTHOR;
        category = "ghost_drone_modules";
        function = QUOTE(DFUNC(moduleController));
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\a3\ui_f\data\map\markers\nato\o_uav.paa";

        class Attributes: AttributesBase {
            APICK(faction,"ghost_DroneFactionChoice","''","Force Faction","Faction whose drones fill the type pickers below. Change it, click OK, then re-open to refresh the lists.");

            AEDIT(spawn_marker,"STRING","''","Spawn Location Marker","Marker where drones spawn (the base). Blank = use this module's placed position.");
            AEDIT(defense_range,"NUMBER","1500","Defense Range (m)","Radius around the base the drones patrol and recon-cued artillery engages within.");
            AEDIT(activate_range,"NUMBER","3000","Activation Range (m)","The base stays dormant until an enemy player is within this. Below it, defenders trickle in as normal. 0 = always active. Keeps a base off an empty map from burning server budget on drones nobody will meet.");
            AEDIT(stop_distance,"NUMBER","300","Stop Distance (m)","If an enemy player gets within this of the spawn, drone reinforcement HALTS (and artillery won't fire this close to base).");
            AEDIT(spawn_interval,"NUMBER","30","Spawn Interval (sec)","Trickle cadence: at most one group spawned per interval.");
            AEDIT(altitude_min,"NUMBER","90","Altitude Min (m AGL)","Lower bound of flyInHeight (rotor / low-flyers).");
            AEDIT(altitude_max,"NUMBER","450","Altitude Max (m AGL)","Upper bound of flyInHeight (fixed-wing / high-flyers).");
            AEDIT(drone_lifetime,"NUMBER","0","Drone Lifetime (min)","Non-loiter drones despawn after this (0 = persistent base guards). Loiter types despawn out of ammo.");
            AEDIT(global_airframe_ceiling,"NUMBER","10","Global Airframe Ceiling","Sets the shared TOTAL-airframe cap used by the Drones + EW + Ambient addons. Base defenders themselves are EXEMPT from it - they are bounded by the per-type caps below, so a patrol elsewhere on the map can never leave this base undefended.");

            // --- base marker ---
            ABOOL(base_marker,"'true'","Base Marker","Side-coloured NATO installation marker on the base, visible to everyone. A base is a place, not intel.");
            AEDIT(marker_text,"STRING","''","Marker Label","Text on the base marker. Blank = symbol only.");

            // --- recon-cued artillery ---
            ABOOL(arty_enable,"'true'","Recon Artillery","When a recon drone spots an enemy in range, rain virtual mortars on it until it dies or leaves range.");
            AEDIT(arty_ammo,"STRING","'Sh_82mm_AMOS'","Artillery Ammo","Shell magazine classname fired by the virtual artillery.");
            AEDIT(arty_rounds,"NUMBER","6","Artillery Rounds","Rounds per barrage on a spotted target.");
            AEDIT(arty_radius,"NUMBER","50","Artillery Spread (m)","Scatter radius of the barrage around the target.");
            AEDIT(arty_delay,"NUMBER","4","Artillery Round Delay (sec)","Delay between rounds in a barrage.");
            AEDIT(arty_cooldown,"NUMBER","60","Artillery Cooldown (sec)","Minimum wait before the same target can be barraged again.");

            // --- EW cover ---
            ABOOL(ew_enable,"'false'","EW Jamming Zone","On: the base sits inside a jamming zone, so radios degrade as you close on it. Needs the Electronic War Zones addon loaded; without it this does nothing.");
            AEDIT(ew_radius,"NUMBER","900","EW Radius (m)","Outer radius of the base's jamming zone. The full-strength core is a fraction of this - past the core it falls off with range.");
            AEDIT(ew_class,"STRING","'Land_TTowerBig_2_F'","EW Emitter Class","Destructible object placed at the base to hold the zone up - killing it lifts the jamming, which is the point. Blank makes the zone abstract and indestructible.");

            ABOOL(debug,"'false'","Debug Markers","Side-colored map marker on every base drone.");

            // --- drone types ---
            DEF_TYPE(antiair,"Anti-Air Classes","Anti-Air Cap","1","''");
            DEF_TYPE(antiarmor,"Anti-Armor Classes","Anti-Armor Cap","2","'O_UAV_02_CAS_F'");
            DEF_TYPE(antipersonnel,"Anti-Personnel Classes","Anti-Personnel Cap","2","'O_UAV_02_CAS_F'");
            DEF_TYPE(loiterfixed,"Loiter Fixed-Wing Classes","Loiter Fixed-Wing Cap","1","''");
            DEF_TYPE(loiterrotor,"Loiter Rotor Classes","Loiter Rotor Cap","1","'O_T_UAV_04_CAS_F'");
            DEF_TYPE(recon,"Recon Classes","Recon Cap","2","'O_UAV_01_F'");
            DEF_TYPE(ground,"Ground (UGV) Classes","Ground (UGV) Cap","1","'O_UGV_01_rcws_F'");
        };

        class ModuleDescription: ModuleDescription {
            description = "Defends a base: trickle-spawns patrol drones around it, halts reinforcement when a player breaches the stop distance, and (if a recon drone spots an enemy in range) rains virtual mortars on that target until it dies or leaves range. Can also sit the base inside a jamming zone, so radios degrade as you close in and the emitter becomes something to hunt. Requires the Drones addon; the jamming zone additionally needs Electronic War Zones.";
        };
    };
};
