// Modern 3DEN attribute system, as used by the ambient modules. Each attribute
// writes the logic variable FUNC(moduleController) reads.

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

    class ghost_moduleCounterBattery: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Counter-Battery Radar";
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
            class hunted_side: Combo {
                property = "ghost_counter_battery_hunted_side";
                displayName = "Hunted Side";
                tooltip = "Whose artillery this radar looks for. Place two modules to have both sides hunting each other.";
                typeName = "STRING";
                defaultValue = "'WEST'";
                expression = "_this setVariable ['hunted_side', _value]";
                class Values {
                    class west { name = "BLUFOR"; value = "WEST"; default = 1; };
                    class east { name = "OPFOR"; value = "EAST"; };
                    class guer { name = "Independent"; value = "GUER"; };
                    class any  { name = "Any side"; value = "ANY"; };
                };
            };

            AEDIT(shots_to_detect,"NUMBER","3","Shots to Fix","Rounds a gun must fire before the radar has a firing solution. One round is a track, not a fix.");
            AEDIT(detect_chance,"NUMBER","70","Fix Chance (%)","Rolled once the shot count is reached. On a miss the count resets and they have to fire that many again.");
            AEDIT(delay,"NUMBER","45","Reply Delay (sec)","From fix to first impact. This is the window a crew has to displace.");
            AEDIT(accuracy,"NUMBER","100","Fix Error (m)","How far off the returned position can be. 0 lands it exactly on the gun.");
            AEDIT(rounds,"NUMBER","8","Rounds","Shells in the reply.");
            AEDIT(spread,"NUMBER","60","Spread (m)","Scatter radius of the impacts.");
            AEDIT(window,"NUMBER","20","Window (sec)","Seconds the reply is spread across. 0 dumps them as fast as the barrage helper allows.");
            AEDIT(shell,"STRING","'Sh_155mm_AMOS'","Shell Ammo Class","CfgAmmo class fired back. Sh_155mm_AMOS is the vanilla 155mm HE.");
            AEDIT(cooldown,"NUMBER","300","Cooldown (sec)","Before the same gun can be fixed again. Stops one firebase drawing an endless stream.");
            AEDIT(safe_radius,"NUMBER","200","Friendly Safety (m)","The mission is cancelled if the radar's OWN side has anyone within this of the fix. The fix is up to a minute old, and in that time the position may have been overrun by the people who called it. 0 = fire regardless.");
            AEDIT(dedupe_radius,"NUMBER","300","Duplicate Guard (m)","A grid already under an inbound mission is not booked a second time. Two guns close together are two fixes and would otherwise draw two full missions onto the same ground.");
            AEDIT(displace_radius,"NUMBER","400","Displace Distance (m)","How far a fixed AI gun relocates.");

            class displace: Combo {
                property = "ghost_counter_battery_displace";
                displayName = "AI Displaces";
                tooltip = "On: an AI gun crew that gets fixed relocates. Warning the crew only helps players - this is the same mechanic for everyone else, without which AI batteries sit still and die. Player-crewed and emplaced guns are never moved.";
                typeName = "STRING";
                defaultValue = "'true'";
                expression = "_this setVariable ['displace', _value isEqualTo 'true']";
                class Values {
                    class on  { name = "On";  value = "true"; default = 1; };
                    class off { name = "Off"; value = "false"; };
                };
            };
            AEDIT(extra_classes,"STRING","''","Extra Artillery Classes","Comma-separated classnames to treat as artillery on top of anything with artilleryScanner set. Only needed for mods whose configs omit that flag.");

            class warn: Combo {
                property = "ghost_counter_battery_warn";
                displayName = "Warn the Crew";
                tooltip = "On: the hunted side is told a radar has their position, and told again when rounds are inbound. Off: the first they know is the impact.";
                typeName = "STRING";
                defaultValue = "'true'";
                expression = "_this setVariable ['warn', _value isEqualTo 'true']";
                class Values {
                    class on  { name = "On";  value = "true"; default = 1; };
                    class off { name = "Off"; value = "false"; };
                };
            };

            class debug: Combo {
                property = "ghost_counter_battery_debug";
                displayName = "Debug";
                tooltip = "Logs every decision to the RPT - guns hooked, rounds tracked, cooldowns, failed rolls and fixes - and draws a temporary marker where the reply will land, so you can see the fix error against the gun's real position. The useful half is the refusals: it tells you why nothing happened.";
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
            description = "Enemy counter-battery radar. Artillery on the hunted side that keeps firing from one place gets found and shelled - the reply lands where the gun WAS, so a crew that shoots and scoots survives and one that sits still does not. No gun is placed on the map; the reply is virtual. Place two modules for both sides.";
        };
    };
};
