#define AEDIT(NAME,TYPE,DEF,LBL,DESC) \
    class NAME: Edit { \
        property = QUOTE(TRIPLES(ghost,COMPONENT,NAME)); \
        displayName = LBL; \
        tooltip = DESC; \
        typeName = TYPE; \
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

    // Synchronise the units or objects to be hunted. They are hunted in order,
    // nearest to this module first; each one takes a full set of processings to
    // close in on, and killing it advances the hunt to the next.
    class ghost_moduleIntelHunt: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Intel Hunt";
        author = QAUTHOR;
        category = "ghost_modules";
        function = QUOTE(DFUNC(moduleIntelHunt));
        functionPriority = 1;
        isGlobal = 2;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\search_ca.paa";

        class Attributes: AttributesBase {
            AEDIT(intel_required,"NUMBER","10","Intel per Processing","Documents that must be gathered before ISR can process a batch.");
            AEDIT(hint_radii,"STRING","'3000,2000,1000'","Hint Radii (m)","Comma-separated, one per successive processing. Past the end of the list the last value repeats.");
            AEDIT(marker_duration,"NUMBER","60","Hint Duration (sec)","How long the hint circle stays on the map.");
            AEDIT(marker_alpha,"NUMBER","0.7","Hint Alpha","Opacity of the hint circle.");
            AEDIT(drop_chance,"NUMBER","30","Drop Chance (%)","Chance an enemy body carries searchable intel.");
            ABOOL(intel_fade,"'false'","Hint Fades","On: the circle steps down to invisible over its duration.");
            ABOOL(debug,"'false'","Debug","Reports hunt state to system chat every 60 seconds.");
        };

        class ModuleDescription: ModuleDescription {
            description = "A hunt for synchronised targets. Enemy bodies sometimes carry intel; gather enough and an ISR operator can process it into a map hint that tightens each time. Killing the current target resets the tier and moves the hunt on to the next.";
            sync[] = {"AnyPerson", "AnyVehicle", "AnyStaticObject"};
        };
    };

    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class GVAR(process) {
                displayName = "Process Intel";
                condition = QUOTE([_player] call FUNC(canProcess));
                statement = QUOTE([ARR_2(QQGVAR(process),[_player])] call CBA_fnc_serverEvent);
                exceptions[] = {};
                showDisabled = 0;
                priority = 2.2;
            };
        };
    };
};
