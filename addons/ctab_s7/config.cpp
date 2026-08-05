#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_xeh",
            "ghost_main",
            "cTab"
        };
        // hard cTab dep for the config-level UI patches; the whole addon
        // skips gracefully when cTab is absent
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
        authors[] = {"YonV"};
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgWeapons.hpp"

// Root declarations of the cTab classes both device files inherit from. Each
// device is then patched in its own file - there is nothing shared between
// them but these names.
class RscText;
class RscPicture;
class RscStructuredText;
class RscButton;
class RscProgress;
class RscEdit;
class RscCombo;
// The tiles are shortcut buttons - one control carrying its own icon and
// label. Missing this declaration is a hard config error, not a warning: the
// game refuses to load.
class RscButtonMenu;
class cTab_RscPicture;
class cTab_RscControlsGroup;
class cTab_RscButton;
class cTab_ActiveText;
class cTab_android_windowsBG;
class cTab_android_btnBack;

// The runtime click-catchers. Clicks on controls config-merged into cTab's
// dialogs never dispatch, so fnc_wireButtons lays a ctrlCreate'd button over
// every one of ours - the pattern the ATAK addons use against this same cTab
// build. The engine's stock ctrlButton paints itself orange when focused and
// drops a black shadow, and neither can be overridden by script - only by
// config - so the catchers are created from this class, which draws nothing
// and makes no sound, ever.
class ctrlButton;
class GVAR(catcher): ctrlButton {
    style = 2;
    text = "";
    shadow = 0;
    borderSize = 0;
    colorText[] = {0, 0, 0, 0};
    colorDisabled[] = {0, 0, 0, 0};
    colorBackground[] = {0, 0, 0, 0};
    colorBackgroundDisabled[] = {0, 0, 0, 0};
    colorBackgroundActive[] = {0, 0, 0, 0};
    colorFocused[] = {0, 0, 0, 0};
    colorShadow[] = {0, 0, 0, 0};
    colorBorder[] = {0, 0, 0, 0};
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0;
    offsetPressedY = 0;
    period = 0;
    periodFocus = 0;
    periodOver = 0;
    soundClick[] = {"", 0, 1};
    soundEnter[] = {"", 0, 1};
    soundPush[] = {"", 0, 1};
    soundEscape[] = {"", 0, 1};
};

// Visual pieces of the embedded intrusion page (the hacking addon's screen
// rebuilt inside the cTab tablet by fnc_hackBuild). Script commands cannot set
// style, focus colours or silence button sounds - only config can.
class GVAR(hackButton): RscButton {
    style = 2;
    text = "";
    borderSize = 0;
    colorText[] = {0.933, 0.910, 0.863, 1};
    colorDisabled[] = {0.4, 0.4, 0.4, 1};
    colorBackground[] = {1, 1, 1, 0.06};
    colorBackgroundDisabled[] = {1, 1, 1, 0.03};
    colorBackgroundActive[] = {0.914, 0.651, 0.235, 0.35};
    colorFocused[] = {1, 1, 1, 0.06};
    colorShadow[] = {0, 0, 0, 0};
    colorBorder[] = {0, 0, 0, 0};
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0;
    offsetPressedY = 0;
    shadow = 0;
    soundClick[] = {"", 0, 1};
    soundEnter[] = {"", 0, 1};
    soundPush[] = {"", 0, 1};
    soundEscape[] = {"", 0, 1};
};
class GVAR(hackBar): RscProgress {
    colorFrame[] = {0.61, 0.67, 0.73, 0.5};
    colorBar[] = {0.914, 0.651, 0.235, 1};
};
class GVAR(hackPct): RscText {
    style = 1;
    colorText[] = {0.933, 0.910, 0.863, 1};
    colorBackground[] = {0, 0, 0, 0};
};

#include "ui_s7.hpp"
#include "ui_tablet.hpp"
#include "ui_s23.hpp"
#include "ui_gft.hpp"
