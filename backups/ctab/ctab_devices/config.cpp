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
// The FBCB2's own background picture, which ui_fbcb4.hpp reopens to swap the
// border art. Missing this cost a hard crash at config parse - "Undefined
// base class", which hemtt check does not catch. Cross-check the whole set
// with:
//   grep -ohE ": *(Rsc[A-Za-z_]+|cTab_[A-Za-z_0-9]+)" ui_*.hpp | sed 's/: *//' | sort -u
class cTab_FBCB2_background;
// the case-art and loading-text classes the device patches reopen
class cTab_android_background;
class cTab_android_loadingtxt;
class cTab_Tablet_background;
class cTab_Tablet_loadingtxt;
class cTab_android_btnBack;
// bases for the message page grafted into the FBCB4 - the vehicle screen
// never had one, so the tablet's control family is borrowed for it
class cTab_RscFrame;
class cTab_RscListBox_Tablet;
class cTab_RscEdit_Tablet;
class cTab_RscButton_Tablet;
class cTab_RscButton_Tablet_Danger;

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

// The tools-drawer keys, rounded to match the live tiles. A plain button
// cannot round itself - the corner has to come from a texture, which means a
// shortcut button carrying animTextures, exactly as the tiles do.
class GVAR(toolKey): RscButtonMenu {
    idc = -1;
    style = "0x02 + 0x0C + 0x0100";
    x = 0;
    y = 0;
    w = 0;
    h = 0;
    text = "";
    textureNoShortcut = "";
    colorBackground[] = {0, 0, 0, 0};
    colorBackground2[] = {0, 0, 0, 0};
    colorBackgroundFocused[] = {0, 0, 0, 0};
    animTextureDefault = QPATHTOF(data\toolkey_n_ca.paa);
    animTextureNormal = QPATHTOF(data\toolkey_n_ca.paa);
    animTextureDisabled = QPATHTOF(data\toolkey_n_ca.paa);
    animTextureOver = QPATHTOF(data\toolkey_o_ca.paa);
    animTextureFocused = QPATHTOF(data\toolkey_n_ca.paa);
    animTexturePressed = QPATHTOF(data\toolkey_p_ca.paa);
    periodFocus = 0;
    periodOver = 0;

    class ShortcutPos {
        left = 0;
        top = 0;
        w = 0;
        h = 0;
    };
    class TextPos {
        left = 0;
        top = 0;
        right = 0;
        bottom = 0;
    };
    class Attributes {
        font = "RobotoCondensed";
        color = "#D6DAD8";
        align = "center";
        shadow = 0;
    };
};

// The two keys that sit ON the glass - the app menu top right, the map tools
// bottom right - rounded to match everything else on these screens. They were
// the last square corners left.
//
// A SQUARE texture of their own rather than toolKey's: that one is authored
// 2:1 for the drawer's wide buttons, and these keys are near square on all
// three devices, so it would have drawn them elliptical. See data/gen_keys.py.
//
// ONE declaration, at config.cpp root, where every root-level template in this
// addon belongs - the same class in each ui file is three declarations in one
// scope and the game terminates at config parse.
class GVAR(glassKey): RscButtonMenu {
    idc = -1;
    style = "0x02 + 0x0C + 0x0100";
    x = 0;
    y = 0;
    w = 0;
    h = 0;
    text = "";
    textureNoShortcut = "";
    colorBackground[] = {0, 0, 0, 0};
    colorBackground2[] = {0, 0, 0, 0};
    colorBackgroundFocused[] = {0, 0, 0, 0};
    animTextureDefault = QPATHTOF(data\keysq_n_ca.paa);
    animTextureNormal = QPATHTOF(data\keysq_n_ca.paa);
    animTextureDisabled = QPATHTOF(data\keysq_n_ca.paa);
    animTextureOver = QPATHTOF(data\keysq_o_ca.paa);
    animTextureFocused = QPATHTOF(data\keysq_n_ca.paa);
    animTexturePressed = QPATHTOF(data\keysq_p_ca.paa);
    periodFocus = 0;
    periodOver = 0;

    // the glyph is a control of its own, laid over the key by the layout
    class ShortcutPos {
        left = 0;
        top = 0;
        w = 0;
        h = 0;
    };
    class TextPos {
        left = 0;
        top = 0;
        right = 0;
        bottom = 0;
    };
    class Attributes {
        font = "RobotoCondensed";
        color = "#D6DAD8";
        align = "center";
        shadow = 0;
    };
};

#include "ui_s23.hpp"
#include "ui_tablet.hpp"
#include "ui_fbcb4.hpp"
