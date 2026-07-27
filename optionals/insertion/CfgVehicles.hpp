class CfgVehicles {
    class Boat_F;

    // Cast the SDV off its parent submarine. The original declared this action
    // *as* ACE_Passengers, which replaces ACE's passenger submenu wholesale; it
    // is a child of that container here instead.
    class SDV_01_base_F: Boat_F {
        class ACE_SelfActions {
            class ACE_Passengers {
                class GVAR(detachSDV) {
                    displayName = CSTRING(detachSDVAceAction);
                    condition = QUOTE([_target] call FUNC(canDetachSDV));
                    statement = QUOTE([_target] call FUNC(detachSDV));
                    exceptions[] = {"isNotSwimming"};
                    showDisabled = 0;
                    icon = "";
                };
            };
        };
    };
};
