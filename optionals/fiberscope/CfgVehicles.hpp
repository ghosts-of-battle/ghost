class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(use) {
                    displayName = CSTRING(useAction);
                    condition = QUOTE(QQGVAR(item) in (items _player));
                    statement = QUOTE(call FUNC(create));
                    exceptions[] = {};
                    icon = QPATHTOF(data\fibrescope.paa);
                };
            };
        };
    };
};
