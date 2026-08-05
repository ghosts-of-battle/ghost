#define COMPONENT ctab_s7
#define COMPONENT_BEAUTIFIED S7 ATAK

#ifdef DEBUG_ENABLED_CTAB_S7
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_CTAB_S7
    #define DEBUG_SETTINGS DEBUG_SETTINGS_CTAB_S7
#endif

#include "\z\ghost\addons\main\script_mod.hpp"
#include "\z\ghost\addons\main\script_macros.hpp"

// The S7 bezel art is authored in a 2048x2048 pixel space; the screen rectangle
// and header strip inside it (values from cTab's android controls header, also
// used verbatim by the BCE/ATAK and BII addons)
#define S7_PX           2048
#define S7_SCR_X        452
#define S7_SCR_Y        713
#define S7_SCR_W        1134
#define S7_SCR_H        624
#define S7_HDR_H        60

// runtime control IDCs for the camera and info pages (the menu and icons are
// config-declared, so they need none)
#define IDC_S7_CAMPIC   467100
#define IDC_S7_CAMLABEL 467101
// The handset camera page's source picker - the tablets use cTab's own
// list-beside-picture layout instead, which a phone has no room for.
#define IDC_S7_CAMLIST  467102
#define IDC_S7_INFOPAGE 467200
#define IDC_S7_INFOTEXT 467201
#define IDC_S7_MENU     467300
#define IDC_S7_DESKMENU 467310
// The GFT-1 rugged tablet's own screen. Its own display class, its own IDCs - a
// device that shares another device's dialog cannot be changed without
// changing that one too.
#define IDC_S23_MENUBTN   467395
#define IDC_GFT_MENU    467320
#define IDC_GFT_MENUBTN 467390
#define IDC_S7_WIDGETTIME    467400
#define IDC_S7_WIDGETWEATHER 467401
#define IDC_S7_LOGO          467410
// The app panel's own backing, so the settings app can re-shade it. The screen
// backdrop is cTab's own windowsBG (S7_IDC_SCREENBG below) repainted at runtime;
// adding our own layer in config lands on top of the map and hides it.
#define IDC_S7_PANELBG       467421

// Tile IDCs run one per app from these bases, in panel order, so the settings
// app can paint them. Kept in step with ui_s7.hpp and ui_tablet.hpp.
// The scanner readout is four rows built exactly like cTab's own map-tools
// readout - same mono font, same size, same black backing - so the two blocks
// read as one instrument rather than two different mods.
#define IDC_S7_SCANUAV   467700
#define IDC_S7_SCANJAM   467701
#define IDC_S7_SCANMESH  467702
#define IDC_S7_SCANRADIO 467703
#define IDC_S7_JAMICON  467710
#define IDC_S7_MESHICON 467711
#define IDC_S7_COMPASS  467720
#define IDC_S7_NEEDLE   467721
#define IDC_S7_WXICON   467730
// The alarm page's time-of-day field, and the button that arms from it.
#define IDC_S7_ALARMAT  467508
#define IDC_S7_ALARMSET 467509

#define S7_ICON_PHONE   467600
#define S7_ICON_TABLET  467620
#define S7_APP_COUNT    13

// The icon colours the settings app offers, and their names for the hint.
// Index order matches the swatch buttons; only ever append.
#define S7_COLOURS [[0.78,0.20,0.17,1],[0.22,0.70,0.29,1],[0.24,0.51,0.84,1],[0.90,0.80,0.20,1],[1,1,1,1],[0.91,0.55,0.16,1],[0.80,0.26,0.19,1]]
#define S7_COLOUR_NAMES ["Red","Green","Blue","Yellow","White","Orange","Ghost red"]
#define S7_COLOUR_DEFAULT 4

// Screen background shades and label fonts the settings app offers. Index order
// matches the buttons; only ever append.
#define S7_BGCOLOURS [[0.10,0.10,0.11,1],[0.16,0.17,0.18,1],[0.15,0.18,0.22,1],[0.16,0.18,0.13,1]]
#define S7_BGCOLOUR_NAMES ["Black","Charcoal","Slate","Olive"]
#define S7_BGCOLOUR_DEFAULT 1

#define S7_FONTS ["RobotoCondensed","RobotoCondensedBold","PuristaMedium","EtelkaMonospacePro"]
#define S7_FONT_NAMES ["Condensed","Bold","Purista","Mono"]
#define S7_FONT_DEFAULT 0

// cTab's bezel-art and screen-backdrop controls. Named apart from cTab's own
// IDC_CTAB_* macros: the updateInterface fork includes cTab's macro header, and
// identical names there would collide.
#define S7_IDC_BEZEL    1200
#define S7_IDC_SCREENBG 1210
