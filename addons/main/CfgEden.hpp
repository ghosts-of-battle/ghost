
class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class PREFIX {
                displayName = GHOST_ATTRIBUTES;
                collapsed = 1;
                class Attributes {};
            };
        };
    };

    // Custom module-attribute control (the faction dropdown) for the drone / EW
    // modules. Kept in a separate file, included here so there is exactly one
    // `class Cfg3DEN` in this addon (HEMTT rejects reopening it).
    class Attributes {
        #include "CfgEdenDrone.hpp"
    };
};
