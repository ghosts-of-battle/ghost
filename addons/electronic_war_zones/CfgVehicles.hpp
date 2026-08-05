// MODERN 3DEN attribute system (class Attributes) - required for custom
// `control` classes (faction dropdown + response-drone pickers). See
// drones for the rationale. expression sets the exact logic variable
// the module reads.

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

class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Edit;
            class Combo;
        };
        class ModuleDescription;
    };

    class ghost_moduleElectronicWarZones: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Electronic War Zones";
        author = QAUTHOR;
        category = "ghost_drone_modules";
        function = QUOTE(DFUNC(moduleController));
        functionPriority = 1;
        isGlobal = 0;              // runs where placed; the function gates to the server
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\a3\ui_f\data\map\markers\military\warning_ca.paa";

        class Attributes: AttributesBase {
            APICK(faction,"ghost_DroneFactionChoice","''","Force Faction","Faction whose drones fill the response pickers below. Change it, click OK, then re-open to refresh the lists.");

            AEDIT(taor_marker,"STRING","''","TAOR Marker(s)","Comma-separated area-marker name(s). EW emitters spawn at random points inside these.");
            AEDIT(jammer_count,"NUMBER","2","Emitter Count","How many EW emitters to spawn across the TAOR marker(s). Each jams + detects.");
            AEDIT(jammer_class,"STRING","'Land_TTowerBig_2_F'","Emitter Object Class(es)","Comma-separated destructible object classnames; one chosen at random per emitter. Destroying it kills that jammer/detector.");
            AEDIT(jammer_radius_min,"NUMBER","100","Jam Radius Min (m)","Lower bound of each emitter's random jam radius.");
            AEDIT(jammer_radius_max,"NUMBER","800","Jam Radius Max (m)","Upper bound of each emitter's random jam radius. Keep modest so zones are pockets, not a blanket.");
            AEDIT(detector_range,"NUMBER","1500","Detector Range (m)","How close an emitter or recon drone must be to a long-range transmission to trigger a drone response.");
            AEDIT(cooldown,"NUMBER","180","Response Cooldown (sec)","Per-transmitter throttle between response waves (also de-dups overlapping detectors).");
            AEDIT(acre_power_threshold,"NUMBER","1000","ACRE Hunt Power (mW)","ACRE2 key-downs whose live channel transmit power is at or above this (milliwatts) are DF'd + hunted; lower-power keys stay safe. Guide: PRC-343 100, PRC-77/SEM-70 4000, PRC-148/152 5000, PRC-117F 20000. A manpack dialled to low power becomes hard to hunt - as it should. (ACRE2 only; TFAR uses its own SR/LR flag.)");

            class huntedSide: Combo {
                property = "ghost_electronic_war_zones_huntedSide";
                displayName = "Hunted Side";
                tooltip = "Side whose radio traffic is jammed and hunted.";
                typeName = "STRING";
                defaultValue = "'WEST'";
                expression = "_this setVariable ['huntedSide', _value]";
                class Values {
                    class west  { name = "BLUFOR (WEST)"; value = "WEST"; default = 1; };
                    class east  { name = "OPFOR (EAST)";  value = "EAST"; };
                    class indep { name = "INDEPENDENT";   value = "INDEPENDENT"; };
                };
            };

            // --- AI ambient emitters ---
            ABOOL(ai_chatter,"'false'","AI Radio Chatter","On: enemy AI transmit periodically, so direction finding hunts them as well as players. Off (default) = only human key-ups are detectable.");
            AEDIT(ai_chatter_interval,"NUMBER","10","AI Chatter Interval (sec)","How often a transmission is attempted near players.");

            // --- Part 3 propagation model (all default to legacy behaviour) ---
            ABOOL(jam_los,"'false'","Jamming: Terrain Blocks","On: a hill between the emitter and the receiver stops the jamming. Off (default) = the pre-model behaviour, jamming ignores terrain.");
            ABOOL(jam_burnthrough,"'false'","Jamming: Power Burn-Through","On: a stronger radio holds a link deeper into the field. Uses the live ACRE channel power.");
            AEDIT(jam_burnthrough_ref,"NUMBER","500","Jamming: Burn-Through Reference (mW)","Radio power that fully resists jamming. Lower = burn-through is easier.");
            AEDIT(jam_curve,"STRING","'LINEAR'","Jamming: Falloff Curve","LINEAR (default, pre-model behaviour) or INVSQ for a sharper edge.");
            AEDIT(jam_duty_cycle,"NUMBER","100","Jamming: Duty Cycle (%)","Percentage of the time emitters are transmitting. 100 = always on.");
            ABOOL(jam_cone_enable,"'false'","Jamming: Directional","On: each emitter gets a random bearing and arc rolled once at spawn, and only jams inside it.");
            ABOOL(jam_uavs,"'false'","Jamming: Affects UAVs","On: these zones also interfere with drones (Part 3 §4).");
            AEDIT(rdf_scan_range,"NUMBER","3000","RDF Scan Range (m)","How far the handheld scanner can detect emitters.");

            AEDIT(response_personnel_classes,"STRING","'O_UAV_02_CAS_F'","Response: Anti-Personnel Classes","Comma-separated anti-personnel response drone classnames; one is picked at random. Blank disables it.");
            AEDIT(response_personnel_count,"NUMBER","2","Response: Anti-Personnel Count","Airframes of the anti-personnel type per response wave.");
            AEDIT(response_vehicle_classes,"STRING","'O_UAV_02_CAS_F'","Response: Anti-Vehicle Classes","Comma-separated anti-vehicle response drone classnames; one is picked at random. Blank disables it.");
            AEDIT(response_vehicle_count,"NUMBER","1","Response: Anti-Vehicle Count","Airframes of the anti-vehicle type per response wave.");
            AEDIT(response_distance,"NUMBER","2000","Response Spawn Distance (m)","Horizontal distance from the transmitter the response package spawns in.");
            AEDIT(response_altitude,"NUMBER","1000","Response Spawn Altitude (m)","Altitude the response package spawns at (AGL).");
            AEDIT(response_lifetime,"NUMBER","15","Response Lifetime (min)","Lifetime of response drones before they fly off-map (0 = never). Shares the drone airframe ceiling.");

            ABOOL(debug,"'false'","Debug Markers","Draw emitter jam radii on the map and mark response drones.");
        };

        class ModuleDescription: ModuleDescription {
            description = "OPFOR electronic-warfare zones: emitters jam nearby radios (TFAR and ACRE2, graduated by range) and, together with recon drones, hunt long-range transmissions - spawning a drone response. Both TFAR and ACRE2 long-range traffic is jammed + tracked; short-range squad nets are safe. Requires the Drones addon.";
        };
    };

    // No self-interaction for direction finding. A set that is switched on is
    // sweeping, so carrying one IS the interaction - FUNC(rdfTick) runs it and
    // speaks up when the picture changes.
};
