// Modern 3DEN attribute system. Each attribute writes the logic variable that
// FUNC(moduleController) reads; state is kept per-logic so several batteries can
// run at once with different TAORs, intervals and payloads.

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

    class ghost_moduleAmbientArty: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Ambient Artillery";
        author = QAUTHOR;
        category = "ghost_ambient_modules";
        function = QUOTE(DFUNC(moduleController));
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";

        class Attributes: AttributesBase {
            AEDIT(taor_marker,"STRING","''","TAOR Marker(s)","Comma-separated area-marker name(s). Only players INSIDE these are shelled near. Blank = anywhere.");
            AEDIT(interval,"NUMBER","360","Interval (sec)","Seconds between fire missions.");
            AEDIT(min_dist,"NUMBER","500","Min Distance (m)","Never shell closer than this to ANY player.");
            AEDIT(max_dist,"NUMBER","2500","Max Distance (m)","Search this far from a player for a target building.");
            AEDIT(rounds,"NUMBER","3","Rounds","Shells per fire mission.");
            AEDIT(spread,"NUMBER","50","Spread (m)","Scatter radius of the impact points.");
            AEDIT(shell,"STRING","'Sh_155mm_AMOS'","Shell Ammo Class","CfgAmmo class fired. Sh_155mm_AMOS is the vanilla 155mm HE.");

            class debug: Combo {
                property = "ghost_ambient_arty_debug";
                displayName = "Debug";
                tooltip = "Reports scheduler state to system chat every 60 seconds: armed or not, qualifying players, whether a target can be found, and time to the next mission.";
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
            description = "Periodically shells a random intact building near the players. Place one per battery; each runs its own timer and TAOR.";
        };
    };
};
