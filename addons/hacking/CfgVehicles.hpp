// NO MODULES. The hacking suite used to carry four Eden modules - settings,
// remote-hack enable, and the synced intel-target pool with its spots. All of
// it is gone by direction: targets are the AUTO-PLACED systems (anti-ship
// batteries and radars, ALiVE AA and artillery, drone supply caches, and the
// leader chain on asymmetric ground), every tuning value falls back to the
// defaults in FUNC(hackSetting), remote hacking is the remoteEnable CBA
// setting, and the hackable ground is the towerTaor marker setting.

class CfgVehicles {
    // THE DROP, DEPLOYED. A ThingX rather than a weapon holder: holders are
    // garbage-collected out from under you, and a collection point that
    // quietly vanishes is worse than none. correspondingItem is what lets it
    // be packed up again.
    class ThingX;
    class GVAR(drop): ThingX {
        scope = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Intel Drop";
        model = "\A3\Supplies_F_Heli\Ammoboxes\AmmoBox_rounded_F.p3d";
        // vehicleClass only. editorCategory/editorSubcategory were set to
        // "ghost" as well, and no such editor category exists - the engine
        // warned about both at every mission start. Eden files a ThingX by
        // its vehicleClass, which is all this needs.
        //
        // "ghost" was wrong here too: that is the CfgFactionClasses entry, and
        // a vehicleClass has to name a CfgVehicleClasses one. Missing, the
        // engine could not read a displayName off it and warned about the
        // class, the field and the empty path at every mission start. This is
        // the class main has always defined for exactly this.
        vehicleClass = QUOTE(DOUBLES(PREFIX,Vehicles));
        correspondingItem = QGVAR(dropItem);

        class ACE_Actions {
            class ACE_MainActions {
                displayName = "Intel Drop";
                position = "";
                distance = 4;
                condition = "true";

                class GVAR(deposit) {
                    displayName = "Deposit Intel";
                    condition = QUOTE([ARR_2(_target,_player)] call FUNC(canDeposit));
                    statement = QUOTE([ARR_2(_target,_player)] call FUNC(depositIntel));
                    exceptions[] = {};
                    showDisabled = 0;
                    priority = 2.4;
                };

                class GVAR(packDrop) {
                    displayName = "Pack Up Intel Drop";
                    condition = "true";
                    statement = QUOTE([ARR_2(_target,_player)] call FUNC(packDrop));
                    exceptions[] = {};
                    showDisabled = 0;
                    priority = 2.0;
                };
            };
        };
    };

    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            // On the BODY, not in the self menu: searching is something you do
            // to a corpse. Shown only when that body actually has something,
            // so a battlefield of empty men is not a menu of empty promises.
            class ACE_MainActions {
                class GVAR(search) {
                    displayName = "Search For Intel";
                    condition = QUOTE([ARR_2(_target,_player)] call FUNC(canSearch));
                    statement = QUOTE([ARR_2(_target,_player)] call FUNC(searchBody));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    priority = 2.2;
                };
            };
        };
        class ACE_SelfActions {
            // The stand-alone scanner's entry is gone with the device - the
            // scanner has its own keybind and paints its own screen.
            // Put the drop down. Depositing happens ON the deployed case,
            // not here - you walk to the collection point, you do not summon
            // it from a menu.
            class GVAR(placeDrop) {
                displayName = "Deploy Intel Drop";
                condition = QUOTE([_player] call FUNC(canPlaceDrop));
                statement = QUOTE([_player] call FUNC(placeDrop));
                exceptions[] = {};
                showDisabled = 0;
                priority = 2.3;
            };

            // TIMERS, ON THE INTERACTION MENU AS WELL AS THE TABLET. The alarm
            // roster is this addon's - see FUNC(alarmAdd) - and the tacpad's
            // timer page arms into the same list. This is the third way in, for
            // the man who is prone in a ditch and is not opening a map to set
            // five minutes.
            //
            // FOUR ENTRIES, NOT A STEPPER. An interaction menu is navigated by
            // holding a key and looking; a plus-one you have to hit five times
            // is the wrong shape for that. These are the four a section actually
            // asks for.
            class GVAR(timers) {
                displayName = "Set Timer";
                condition = "true";
                statement = "";
                exceptions[] = {};
                showDisabled = 0;
                priority = 2.25;

                class GVAR(timer1) {
                    displayName = "1 Minute";
                    condition = "true";
                    statement = QUOTE([ARR_2(60,name _player)] call EFUNC(hacking,alarmArm));
                    exceptions[] = {};
                    showDisabled = 0;
                    priority = 4;
                };
                class GVAR(timer2) {
                    displayName = "2 Minutes";
                    condition = "true";
                    statement = QUOTE([ARR_2(120,name _player)] call EFUNC(hacking,alarmArm));
                    exceptions[] = {};
                    showDisabled = 0;
                    priority = 3;
                };
                class GVAR(timer3) {
                    displayName = "3 Minutes";
                    condition = "true";
                    statement = QUOTE([ARR_2(180,name _player)] call EFUNC(hacking,alarmArm));
                    exceptions[] = {};
                    showDisabled = 0;
                    priority = 2;
                };
                class GVAR(timer5) {
                    displayName = "5 Minutes";
                    condition = "true";
                    statement = QUOTE([ARR_2(300,name _player)] call EFUNC(hacking,alarmArm));
                    exceptions[] = {};
                    showDisabled = 0;
                    priority = 1;
                };
            };
        };
    };
};
