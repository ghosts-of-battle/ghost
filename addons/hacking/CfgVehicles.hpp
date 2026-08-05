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

class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Edit;
            class Combo;
        };
        class ModuleDescription;
    };

    // A candidate location. Place a lot of them, sync them all to a Hack Intel
    // Targets module, and let its Pick attribute decide how many are real - so
    // the mission maker does not know where the intel is either.
    class ghost_moduleHackTargetSpot: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Intel Target Spot";
        author = QAUTHOR;
        category = "ghost_modules";
        function = QUOTE(DFUNC(moduleTargetSpot));
        functionPriority = 1;
        isGlobal = 2;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\search_ca.paa";

        class Attributes: AttributesBase {
            AEDIT(spawn_class,"STRING","''","Spawn Class","Object created here if this spot is picked, e.g. Land_Cargo20_military_green_F. Leave blank to use whatever is synchronised to this spot instead.");
            AEDIT(init_code,"STRING","''","Init (SQF)","SQF CODE run on the server for each object this spot produces, once it is placed - not a description, actual script. 'this' is the object, like an Eden init box; also passed [_object, _spot] as _this. Example: this setVariable ['cache', true, true]; Runs for pre-placed synchronised objects too, not only spawned ones. Blank = nothing.");

            class crew: Combo {
                property = "ghost_hacking_crew";
                displayName = "Crew It";
                tooltip = "On: the spawned object gets a crew. createVehicle makes an EMPTY vehicle, so a radar or SAM site spawned without this just stands there doing nothing. Anything with no crew positions - a crate, a prop - is unaffected either way.";
                typeName = "STRING";
                defaultValue = "'true'";
                expression = "_this setVariable ['crew', _value isEqualTo 'true']";
                class Values {
                    class on  { name = "On";  value = "true"; default = 1; };
                    class off { name = "Off"; value = "false"; };
                };
            };

            class crew_side: Combo {
                property = "ghost_hacking_crew_side";
                displayName = "Crew Side";
                tooltip = "Auto uses whatever faction the class itself belongs to, which is right for anything named O_ or B_. Force a side only when the class does not match the side you want it fighting for.";
                typeName = "STRING";
                defaultValue = "'AUTO'";
                expression = "_this setVariable ['crew_side', _value]";
                class Values {
                    class auto { name = "Auto (class faction)"; value = "AUTO"; default = 1; };
                    class west { name = "BLUFOR"; value = "WEST"; };
                    class east { name = "OPFOR"; value = "EAST"; };
                    class guer { name = "Independent"; value = "GUER"; };
                    class civ  { name = "Civilian"; value = "CIV"; };
                };
            };

            class datalink: Combo {
                property = "ghost_hacking_datalink";
                displayName = "Datalink";
                tooltip = "On: the spawned object joins its side's sensor network, so a radar feeds the launchers and a launcher can be cued by anything else that sees you.";
                typeName = "STRING";
                defaultValue = "'true'";
                expression = "_this setVariable ['datalink', _value isEqualTo 'true']";
                class Values {
                    class on  { name = "On";  value = "true"; default = 1; };
                    class off { name = "Off"; value = "false"; };
                };
            };
        };

        class ModuleDescription: ModuleDescription {
            description = "One candidate spot for an intel target. SYNCHRONISE IT to a Hack Intel Targets module to enter it in that module's draw - a spot with no parent module is not drawn for, it simply populates. Set the parent's Pick Per Class to pick a random few each run. Spots are grouped by their Spawn Class, so ten spots of one class and ten of another with a limit of five gives five of each. Either give the spot a Spawn Class or synchronise the objects it should use - with no Spawn Class it is grouped by the first object synced to it. Init runs on whatever it produces.";
            sync[] = {"AnyStaticObject", "AnyVehicle", "AnyPerson"};
        };
    };

    // Sync any objects or units to this module to make them the intel pool, or
    // sync Intel Target Spots to it and let Pick draw from them. A successful
    // tower hack drops a marker on whichever target is nearest the hacker. Place
    // more than one to run pools with different marker styles.
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
            AEDIT(marker_type,"STRING","''","Marker Icon","Optional icon drawn at the CIRCLE's centre - which is not the objective, so leave it blank unless you want one. CfgMarkers type, e.g. hd_unknown, mil_objective.");
            AEDIT(marker_colour,"STRING","'ColorRed'","Marker Colour","CfgMarkerColors class, e.g. ColorRed, ColorYellow, ColorGhost.");
            AEDIT(max_range,"NUMBER","0","Max Range (m)","Only mark a target within this distance of the hacker. 0 = any distance.");
            AEDIT(pick_count,"NUMBER","0","Pick Per Class","How many of EACH class of candidate are real, drawn at random each time the mission runs. Ten spots of one class and ten of another with this set to 5 gives five of each. 0 (or more than there are) uses all of them, which is the plain behaviour.");
            AEDIT(class_limits,"STRING","''","Class Limits","Per-class exceptions to Pick Per Class, as class: count, comma separated - e.g. Land_Cargo20_military_green_F: 3, B_Truck_01_box_F: 1. Any class not named here uses Pick Per Class.");
            ABOOL(clear_unpicked,"'false'","Clear Unpicked","On: candidates that lose the draw are deleted. Off: they stay put as decoys, which is usually the better search - twenty crates of which eight are real beats eight crates and twelve empty fields.");
            ABOOL(maintain,"'false'","Repair & Rearm","On: live targets rearm and patch battle damage over time, so wearing one down is not the same as killing it. A DESTROYED target is never repaired - killing it is the objective and it stays killed.");
            AEDIT(maintain_interval,"NUMBER","60","Maintain Interval (sec)","Seconds between a target's maintenance passes.");
            AEDIT(maintain_repair,"NUMBER","0.25","Repair Per Pass","Damage healed each pass, 0 to 1. Sustained fire still beats it; a single strafing run does not. 0 = rearm only, never repair.");
            ABOOL(maintain_crew,"'true'","Replace Crew","On: a target whose crew has been shot out gets a new one. A repaired launcher with nobody in it looks like an objective and is not one.");

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
            description = "Synchronise objects, units, or Intel Target Spots to this module to make them the intel pool for tower hacking. A successful hack marks the nearest one on everyone's map. Set Pick Per Class to use only a random few of each class, so nobody knows where the intel is until the mission runs. Marked targets are destroy objectives: the marker clears when the target is destroyed, and a message goes out when the last one is down.";
            sync[] = {"AnyStaticObject", "AnyVehicle", "AnyPerson"};
        };
    };

    // Optional tuning module. Tower hacking works without it - every attribute
    // below falls back to the same default in FUNC(hackSetting) - but a mission
    // that wants different numbers places one of these rather than reaching for
    // a CBA setting (settings policy, Part 1 section 0).
    class ghost_moduleHacking: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Hacking Settings";
        author = QAUTHOR;
        category = "ghost_modules";
        function = QUOTE(DFUNC(moduleHacking));
        functionPriority = 1;
        isGlobal = 2;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\radio_ca.paa";

        class Attributes: AttributesBase {
            AEDIT(hack_time,"NUMBER","60","Hack Time (sec)","Seconds a tower hack takes.");
            AEDIT(hack_range,"NUMBER","20","Hack Range (m)","Stay inside this or the signal drops and progress pauses.");
            AEDIT(hack_cooldown,"NUMBER","600","Re-hack Cooldown (sec)","Before the same tower can be hacked again. -1 = one shot per tower.");
            AEDIT(abandon_timeout,"NUMBER","60","Abandon Timeout (sec)","Continuous seconds out of range before the hack resets and progress is lost.");
            AEDIT(local_picture_radius,"NUMBER","1500","Local Picture Radius (m)","How far the Local Picture product looks around the hacked tower.");
            AEDIT(emitter_hack_response_chance,"NUMBER","25","EW Emitter Response Chance (%)","Hacking an EW emitter (not a plain comm tower) may dispatch the EW drone response to your grid.");
            AEDIT(circle_radii,"STRING","'4000,3000,2000,1000'","Target Circle Radii (m)","Comma-separated. Each hack on the same objective steps to the next radius; past the end the last one repeats. The circle is permanent and only clears when the objective is destroyed.");
            AEDIT(circle_offset,"NUMBER","75","Target Circle Offset (%)","How far the circle is displaced from the objective, as a percentage of its own radius, on a fresh random bearing each hack. 0 centres it on the objective; anything under 100 still covers it. Capped at 95.");
            AEDIT(intel_lifetime,"NUMBER","300","Intel Marker Lifetime (sec)","How long intel markers persist. Does not apply to target search circles, which are permanent.");
            AEDIT(intel_alpha,"NUMBER","0.5","Intel Marker Alpha","Starting opacity of area markers.");
            ABOOL(intel_fade,"'false'","Intel Markers Fade","On: markers step down to invisible across their lifetime. Off: they hold, then vanish.");
            ABOOL(combat_interrupts,"'false'","Combat Interrupts Hack","On: firing your weapon or taking a hit cancels the hack.");
        };

        class ModuleDescription: ModuleDescription {
            description = "Tuning for tower and remote hacking. Entirely optional - without one, the defaults apply.";
        };
    };

    // Remote Unit Hack (Part 1 section 6). The feature exists only while one of
    // these is placed - no module, no menu entry, nothing to configure away.
    class ghost_moduleRemoteHack: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Remote Unit Hack";
        author = QAUTHOR;
        category = "ghost_modules";
        function = QUOTE(DFUNC(moduleRemoteHack));
        functionPriority = 1;
        isGlobal = 2;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa";

        class Attributes: AttributesBase {
            AEDIT(max_range,"NUMBER","800","Max Range (m)","How far a target can be to start, and how far before the signal drops.");
            AEDIT(hack_time,"NUMBER","60","Hack Time (sec)","Seconds a remote hack takes.");
            AEDIT(fail_chance,"NUMBER","15","Fail Chance (%)","Rolled once, at completion. Success opens the intel choice; failure fires the failure package.");
            AEDIT(alert_radius,"NUMBER","2000","Failure: Alert Radius (m)","Enemy groups with a unit inside this of the hacker learn where you are and go to COMBAT.");
            AEDIT(jam_chance,"NUMBER","50","Failure: Jam Chance (%)","Independent roll for a temporary jamming zone centred on the hacker.");
            AEDIT(jam_radius_min,"NUMBER","500","Failure: Jam Radius Min (m)","Lower bound of the rolled zone radius.");
            AEDIT(jam_radius_max,"NUMBER","2000","Failure: Jam Radius Max (m)","Upper bound of the rolled zone radius (hard cap 2000).");
            AEDIT(jam_duration,"NUMBER","600","Failure: Jam Duration (sec)","Temp zone lifetime.");
            AEDIT(abandon_timeout,"NUMBER","60","Abandon Timeout (sec)","Continuous seconds out of range before the hack resets.");
            ABOOL(combat_interrupts,"'false'","Combat Interrupts Hack","On: the hacker firing or taking damage cancels the hack - no fail roll, no alert, just cancelled.");
        };

        class ModuleDescription: ModuleDescription {
            description = "Enables hacking an enemy soldier's comms at range. Success buys one intel product centred on the target; failure can alert the area and jam your own grid. Intel marker styling comes from the Hacking Settings module.";
        };
    };

    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            // One entry now. Choosing a device and choosing what to pull out of
            // it are screen jobs, not radial-menu jobs - see tablet.hpp.
            class GVAR(scanner) {
                displayName = "Signal Scanner";
                condition = QUOTE([_player] call FUNC(hasScanner));
                statement = QUOTE([_player] call FUNC(scannerToggle));
                exceptions[] = {};
                showDisabled = 0;
                priority = 2.35;
            };
            class GVAR(tablet) {
                displayName = "Hacking Tablet";
                // Carrying the kit is what puts this on the menu; being an ISR
                // operator is what makes it open. FUNC(tabletOpen) says which
                // one you are missing - gating the entry on the whole chain left
                // a player holding a tablet with no menu entry and no reason.
                condition = QUOTE([_player] call FUNC(hasTablet));
                statement = QUOTE([_player] call FUNC(tabletOpen));
                exceptions[] = {};
                showDisabled = 0;
                priority = 2.4;
            };
        };
    };
};
