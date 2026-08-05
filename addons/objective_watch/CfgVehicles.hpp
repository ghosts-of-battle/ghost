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

    // Place one per objective, at the objective. Taking it starts a countdown
    // and brings artillery down on the position you just took.
    class ghost_moduleObjectiveWatch: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Objective Watch";
        author = QAUTHOR;
        category = "ghost_modules";
        function = QUOTE(DFUNC(moduleObjectiveWatch));
        functionPriority = 1;
        isGlobal = 2;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\a3\ui_f\data\map\markers\military\objective_ca.paa";

        class Attributes: AttributesBase {
            AEDIT(capture_side,"STRING","'WEST'","Capturing Side","Side whose presence takes the objective: WEST, EAST, GUER, or ANY to let either flip it.");
            AEDIT(capture_radius,"NUMBER","200","Capture Radius (m)","Detection radius around this module. A named area marker overrides it.");
            AEDIT(min_players,"NUMBER","1","Players Required","How many of the capturing side must be inside.");
            AEDIT(hold_time,"NUMBER","60","Hold Time (sec)","Continuous seconds both conditions must hold. Any break resets the streak.");
            AEDIT(marker,"STRING","''","Area Marker","Optional marker name defining the footprint; its size also sets the barrage dispersion. Only used when no objective markers match.");

            // --- where the objectives come from ---
            AEDIT(objective_markers,"STRING","'obj_'","Objective Marker Prefix","Comma-separated marker-name prefixes. EVERY map marker starting with one becomes a watched objective, using its own size as the footprint - this is how you track objectives without ALiVE. Blank to use only this module's position.");
            ABOOL(use_alive_objectives,"'true'","Use ALiVE Objectives","On and with ALiVE loaded: its objective list is watched too. Ignored entirely without ALiVE.");
            AEDIT(alive_range,"NUMBER","0","ALiVE Objective Range (m)","Only take ALiVE objectives within this of the module. 0 = all of them.");
            ABOOL(alive_bridge,"'true'","ALiVE AI Captures","On and with ALiVE loaded: an AI commander completing a capture order on a watched objective triggers it too, not just players.");

            ABOOL(barrage_enable,"'true'","Counter-Barrage","Master switch for the artillery payoff.");
            AEDIT(barrage_chance,"NUMBER","100","Barrage Chance (%)","Rolled per capture, after the cooldown check.");
            AEDIT(barrage_delay,"NUMBER","180","Impact Delay (sec)","Nominal seconds from capture to impact. The countdown announces this.");
            AEDIT(barrage_jitter,"NUMBER","30","Impact Jitter (sec)","Actual impact floats this far either side of the nominal time.");
            AEDIT(barrage_rounds,"NUMBER","24","Rounds","Shells in the fire mission.");
            AEDIT(barrage_window,"NUMBER","60","Impact Window (sec)","Seconds the rounds are spread across.");
            AEDIT(barrage_shell,"STRING","'Sh_155mm_AMOS'","Shell Class","CfgAmmo class fired.");
            AEDIT(barrage_dispersion,"NUMBER","0","Dispersion (m)","0 = size it automatically from the marker, then ALiVE, then 150 m. Above 0 forces a radius.");
            AEDIT(barrage_side,"STRING","'EAST'","Firing Side","Notional side the shells belong to, for kill attribution.");
            AEDIT(barrage_cooldown,"NUMBER","900","Barrage Cooldown (sec)","Before this objective can be shelled again. Recaptures inside it still raise the capture event.");

            ABOOL(debug,"'false'","Debug","Reports capture-condition state to system chat every 60 seconds.");
        };

        class ModuleDescription: ModuleDescription {
            description = "Watches objectives for a capture - your side present, no enemies, held for a while - then counts down and drops artillery on the position. Objectives come from map markers (no ALiVE needed), from ALiVE's objective list, or from this module's own position. Independent of the ambient artillery addon.";
            sync[] = {};
        };
    };
};
