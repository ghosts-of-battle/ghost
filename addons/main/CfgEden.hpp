// Engine UI control classes forward-declared at TOP-LEVEL scope, used as
// inheritance targets by the custom drone-picker attribute controls in
// CfgEdenDrone.hpp. MUST stay top-level: declaring them inside
// Cfg3DEN>>Attributes shadows BI's global ctrl* classes and breaks every BI
// attribute that chains through ctrlStatic (Type, EditCode, ...).
class ctrlControlsGroupNoScrollbars;
class ctrlListBox;
class ctrlStatic;
class ctrlEdit;
class ctrlButton;

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

    // Custom module-attribute controls (faction dropdown + drone pickers) for
    // the drone / EW modules. Kept in a separate file, included here so there
    // is exactly one `class Cfg3DEN` in this addon (HEMTT rejects reopening it).
    class Attributes {
        #include "CfgEdenDrone.hpp"
    };
};
