// Modern 3DEN attribute system, as used by the drone/ambient modules.
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

    // Sync any objects or units to this module to make them the intel pool. A
    // successful tower hack drops a marker on whichever of them is nearest the
    // hacker. Place more than one to run pools with different marker styles.
    class ghost_moduleHackTargets: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Hack Intel Targets";
        author = QAUTHOR;
        category = "ghost_modules";
        function = QUOTE(DFUNC(moduleController));
        functionPriority = 1;
        isGlobal = 2;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\intel_ca.paa";

        class Attributes: AttributesBase {
            AEDIT(marker_text,"STRING","'Signal Intercept'","Marker Text","Label put on the marker. Blank for no label.");
            AEDIT(marker_type,"STRING","'hd_dot'","Marker Type","CfgMarkers type, e.g. hd_dot, hd_unknown, mil_objective, o_inf.");
            AEDIT(marker_colour,"STRING","'ColorRed'","Marker Colour","CfgMarkerColors class, e.g. ColorRed, ColorYellow, ColorGhost.");
            AEDIT(max_range,"NUMBER","0","Max Range (m)","Only mark a target within this distance of the hacker. 0 = any distance.");

            class one_shot: Combo {
                property = "ghost_hacking_one_shot";
                displayName = "One Shot";
                tooltip = "On: each target can only be revealed once, so repeated hacks walk through the pool. Off: the nearest target is re-marked every hack.";
                typeName = "STRING";
                defaultValue = "'true'";
                expression = "_this setVariable ['one_shot', _value isEqualTo 'true']";
                class Values {
                    class on  { name = "On";  value = "true"; default = 1; };
                    class off { name = "Off"; value = "false"; };
                };
            };
        };

        class ModuleDescription: ModuleDescription {
            description = "Synchronise objects or units to this module to make them the intel pool for tower hacking. A successful hack marks the nearest one on everyone's map. Marked targets are destroy objectives: the marker clears when the target is destroyed, and a message goes out when the last one is down.";
            sync[] = {"AnyStaticObject", "AnyVehicle", "AnyPerson"};
        };
    };

    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            // Parent "Hack" menu - only visible while a cTab-family item is carried.
            class GVAR(hack) {
                displayName = "Hack";
                icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\intel_ca.paa";
                condition = QUOTE([_player] call FUNC(canHack));
                statement = "";
                exceptions[] = {};
                priority = 2.4;

                class GVAR(hackTower) {
                    displayName = "Hack Tower";
                    icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\radiotower_ca.paa";
                    condition = QUOTE(!isNull ([_player] call FUNC(nearestTower)));
                    statement = QUOTE([_player] call FUNC(hackTower));
                    exceptions[] = {};
                    showDisabled = 0;
                };
                class GVAR(downDrone) {
                    displayName = "Down Drone";
                    icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\uav_ca.paa";
                    condition = QUOTE(!isNull ([_player] call FUNC(nearestDrone)));
                    statement = QUOTE([_player] call FUNC(downDrone));
                    exceptions[] = {};
                    showDisabled = 0;
                };
            };
        };
    };
};
