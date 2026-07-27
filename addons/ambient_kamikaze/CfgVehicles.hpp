// Modern 3DEN attribute system. Each attribute writes the logic variable that
// FUNC(moduleController) reads; state is kept per-logic so several launch sites
// can run at once with different TAORs, intervals and drones.

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

    class ghost_moduleAmbientKamikaze: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Ambient Kamikaze Drones";
        author = QAUTHOR;
        category = "ghost_ambient_modules";
        function = QUOTE(DFUNC(moduleController));
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\A3\UI_F\Data\Map\Markers\NATO\b_uav.paa";

        class Attributes: AttributesBase {
            AEDIT(taor_marker,"STRING","''","TAOR Marker(s)","Comma-separated area-marker name(s). Only players INSIDE these are struck. Blank = anywhere.");
            AEDIT(interval,"NUMBER","300","Interval (sec)","Seconds between strikes.");
            AEDIT(min_dist,"NUMBER","250","Min Distance (m)","Never strike closer than this to ANY player.");
            AEDIT(max_dist,"NUMBER","2500","Max Distance (m)","Search this far from a player for a target building.");
            AEDIT(drone_class,"STRING","'O_UAV_02_CAS_F'","Drone Class","CfgVehicles class flown into the target. It carries its own warhead - a one-way dive, no loiter.");
            AEDIT(spawn_dist,"NUMBER","6000","Ingress Distance (m)","How far off-map the drone spawns before running in.");
            AEDIT(altitude,"NUMBER","800","Ingress Altitude (m)","Height it runs in at before diving.");

            class debug: Combo {
                property = "ghost_ambient_kamikaze_debug";
                displayName = "Debug";
                tooltip = "Reports scheduler state to system chat every 60 seconds: armed or not, qualifying players, whether a target can be found, drone class validity, and time to the next strike.";
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
            description = "Periodically sends a one-way kamikaze drone into a building near the players. Place one per launch site; each runs its own timer and TAOR.";
        };
    };
};
