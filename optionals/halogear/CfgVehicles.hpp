class CfgVehicles {
    class Bag_Base;
    class B_Parachute: Bag_Base {};
    class ACE_NonSteerableParachute;

    // Rigs with the AAD already fitted -- these are what
    // ghost_halogear_fnc_hasAADParachute looks for.
    class GVAR(parachute): B_Parachute {
        author = QAUTHOR;
        scope = 2;
        displayName = CSTRING(aadChute);
    };

    class GVAR(parachuteNS): ACE_NonSteerableParachute {
        author = QAUTHOR;
        scope = 2;
        displayName = CSTRING(aadChuteNS);
    };

    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(setAAD) {
                    displayName = CSTRING(aadSetting);
                    condition = QUOTE([_player] call FUNC(hasAADParachute) && {GVAR(allowManualAADSetting)});
                    statement = QUOTE([_player] call FUNC(openAADMenu));
                    exceptions[] = {"isNotSitting", "isNotInside"};
                    icon = "";
                };
            };
        };
    };

    // --- AAD attach/detach on droppable objects ------------------------------
    // The same three actions are repeated on each base class below rather than
    // hidden behind a macro, so the tree is greppable.

    class ThingX;
    class ReammoBox_F: ThingX {
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(attachAAD) {
                    displayName = CSTRING(attachAAD);
                    condition = QUOTE(!(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]) && {QQGVAR(aad) in (items _player)});
                    statement = QUOTE([ARR_2(_target,_player)] call FUNC(attachAAD));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
                class GVAR(detachAAD) {
                    displayName = CSTRING(detachAAD);
                    condition = QUOTE(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]);
                    statement = QUOTE([ARR_2(_target,_player)] call FUNC(detachAAD));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
                class GVAR(changeAADSetting) {
                    displayName = CSTRING(aadSetting);
                    condition = QUOTE(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]);
                    statement = QUOTE([_target] call FUNC(openAADMenu));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
            };
        };
    };

    class LandVehicle;
    class Car: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(attachAAD) {
                    displayName = CSTRING(attachAAD);
                    condition = QUOTE(!(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]) && {QQGVAR(aad) in (items _player)});
                    statement = QUOTE([ARR_2(_target,_player)] call FUNC(attachAAD));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
                class GVAR(detachAAD) {
                    displayName = CSTRING(detachAAD);
                    condition = QUOTE(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]);
                    statement = QUOTE([ARR_2(_target,_player)] call FUNC(detachAAD));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
                class GVAR(changeAADSetting) {
                    displayName = CSTRING(aadSetting);
                    condition = QUOTE(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]);
                    statement = QUOTE([_target] call FUNC(openAADMenu));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
            };
        };
    };

    class Tank: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(attachAAD) {
                    displayName = CSTRING(attachAAD);
                    condition = QUOTE(!(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]) && {QQGVAR(aad) in (items _player)});
                    statement = QUOTE([ARR_2(_target,_player)] call FUNC(attachAAD));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
                class GVAR(detachAAD) {
                    displayName = CSTRING(detachAAD);
                    condition = QUOTE(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]);
                    statement = QUOTE([ARR_2(_target,_player)] call FUNC(detachAAD));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
                class GVAR(changeAADSetting) {
                    displayName = CSTRING(aadSetting);
                    condition = QUOTE(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]);
                    statement = QUOTE([_target] call FUNC(openAADMenu));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
            };
        };
    };

    class Motorcycle: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(attachAAD) {
                    displayName = CSTRING(attachAAD);
                    condition = QUOTE(!(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]) && {QQGVAR(aad) in (items _player)});
                    statement = QUOTE([ARR_2(_target,_player)] call FUNC(attachAAD));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
                class GVAR(detachAAD) {
                    displayName = CSTRING(detachAAD);
                    condition = QUOTE(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]);
                    statement = QUOTE([ARR_2(_target,_player)] call FUNC(detachAAD));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
                class GVAR(changeAADSetting) {
                    displayName = CSTRING(aadSetting);
                    condition = QUOTE(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]);
                    statement = QUOTE([_target] call FUNC(openAADMenu));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
            };
        };
    };

    class Ship;
    class Ship_F: Ship {
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(attachAAD) {
                    displayName = CSTRING(attachAAD);
                    condition = QUOTE(!(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]) && {QQGVAR(aad) in (items _player)});
                    statement = QUOTE([ARR_2(_target,_player)] call FUNC(attachAAD));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
                class GVAR(detachAAD) {
                    displayName = CSTRING(detachAAD);
                    condition = QUOTE(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]);
                    statement = QUOTE([ARR_2(_target,_player)] call FUNC(detachAAD));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
                class GVAR(changeAADSetting) {
                    displayName = CSTRING(aadSetting);
                    condition = QUOTE(_target getVariable [ARR_2(QQGVAR(itemAsAAD),false)]);
                    statement = QUOTE([_target] call FUNC(openAADMenu));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
            };
        };
    };
};
