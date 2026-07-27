// 3DEN module: off-map aircraft strikes + glide bombs onto random buildings in a TAOR.
// Aircraft spawn 'Spawn Distance' m from the module along 'Spawn Bearing' (off the
// map), fly in, make one attack pass on a random building, then egress off-map.
// The glide bomb is an independent, side-owned munition that homes a random building
// on its own frequency timer.

// String/number Edit attribute. TYPE = "STRING"|"NUMBER", DEF = SQF-source string.
#define AEDIT(NAME,TYPE,DEF,LBL,DESC) \
    class NAME: Edit { \
        property = QUOTE(TRIPLES(ghost,COMPONENT,NAME)); \
        displayName = LBL; \
        tooltip = DESC; \
        typeName = TYPE; \
        defaultValue = DEF; \
        expression = QUOTE(_this setVariable [ARR_2('NAME',_value)]); \
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

    class ghost_moduleAircraftStrike: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Aircraft / Glide-Bomb Strikes";
        author = QAUTHOR;
        category = "ghost_drone_modules";
        function = QUOTE(DFUNC(moduleController));
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";

        class Attributes: AttributesBase {
            class side: Combo {
                property = "ghost_alive_aircraft_side";
                displayName = "Side";
                tooltip = "Side the aircraft and glide bombs belong to.";
                typeName = "STRING";
                defaultValue = "'EAST'";
                expression = "_this setVariable ['side', _value]";
                class Values {
                    class east { name = "East (OPFOR)"; value = "EAST"; default = 1; };
                    class west { name = "West (BLUFOR)"; value = "WEST"; };
                    class guer { name = "Independent"; value = "GUER"; };
                    class civ  { name = "Civilian"; value = "CIV"; };
                };
            };

            AEDIT(taor_marker,"STRING","''","Objective TAOR Marker(s)","Comma-separated area-marker name(s). A random building inside is chosen as each strike's target (BIS_fnc_randomPos).");
            AEDIT(spawn_bearing,"NUMBER","0","Spawn Bearing (deg)","Compass heading FROM the module that aircraft/bombs ingress along.");
            AEDIT(spawn_distance,"NUMBER","8000","Spawn Distance (m)","How far from the module (along the bearing) they spawn - large enough to be off the map.");

            AEDIT(altitude_min,"NUMBER","120","Altitude Min (m AGL)","Ingress height floor (rotor sits near this).");
            AEDIT(altitude_max,"NUMBER","600","Altitude Max (m AGL)","Ingress height ceiling (fixed-wing sits near this).");

            AEDIT(ceiling,"NUMBER","6","Airframe Ceiling","HARD server-safety cap on TOTAL live airframes (shared with the drone modules).");

            AEDIT(fixedwing_classes,"STRING","'O_Plane_CAS_02_dynamicLoadout_F'","Fixed-Wing Classes","Comma-separated fixed-wing classnames (one picked at random per spawn). Empty disables fixed-wing.");
            AEDIT(fixedwing_cap,"NUMBER","1","Fixed-Wing Cap","Max concurrent fixed-wing airframes from this module.");
            AEDIT(fixedwing_frequency,"NUMBER","300","Fixed-Wing Frequency (sec)","Seconds between fixed-wing launches (a new one launches only while under the cap; 0 = off).");
            AEDIT(rotor_classes,"STRING","'O_Heli_Attack_02_dynamicLoadout_F'","Rotary Classes","Comma-separated rotary-wing classnames (one picked at random per spawn). Empty disables rotary.");
            AEDIT(rotor_cap,"NUMBER","1","Rotary Cap","Max concurrent rotary airframes from this module.");
            AEDIT(rotor_frequency,"NUMBER","300","Rotary Frequency (sec)","Seconds between rotary launches (a new one launches only while under the cap; 0 = off).");

            AEDIT(glidebomb_class,"STRING","'Bo_Mk82'","Glide-Bomb Ammo","Ammo class of the side-owned glide bomb that homes a random building. Empty disables glide bombs.");
            AEDIT(glidebomb_frequency,"NUMBER","300","Glide-Bomb Frequency (sec)","Seconds between glide-bomb strikes (0 = off).");
            AEDIT(glidebomb_altitude,"NUMBER","1500","Glide-Bomb Altitude (m)","Height the glide bomb ingresses at before homing down onto the building.");

            class debug: Combo {
                property = "ghost_alive_aircraft_debug";
                displayName = "Debug Markers";
                tooltip = "Drop a side-colored map marker on every live airframe.";
                typeName = "STRING";
                defaultValue = "'false'";
                expression = "_this setVariable ['debug', _value isEqualTo 'true']";
                class Values {
                    class off { name = "Off"; value = "false"; default = 1; };
                    class on  { name = "On";  value = "true"; };
                };
            };
        };

        class ModuleDescription: ModuleDescription {
            description = "Spawns strike aircraft off-map that fly in for one attack pass on a random building in a TAOR, then egress. Optionally rains a side-owned glide bomb onto a random building on a frequency timer. Reuses the shared airframe ceiling / reaper.";
        };
    };
};
