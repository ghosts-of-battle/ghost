#define COMPONENT ctab_devices
#define COMPONENT_BEAUTIFIED S7 ATAK

#ifdef DEBUG_ENABLED_CTAB_DEVICES
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_CTAB_DEVICES
    #define DEBUG_SETTINGS DEBUG_SETTINGS_CTAB_DEVICES
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
// The FBCB4 vehicle display's own app menu.
#define IDC_FBCB4_MENU  467330
#define IDC_S7_WIDGETTIME    467400
#define IDC_S7_WIDGETWEATHER 467401
#define IDC_S7_LOGO          467410
// The dashboard header's title, so the layout can size it to the glass
// instead of hunting for it by its text. Kept clear of 467800-467818, which
// the vehicle screen's glass cards run through.
#define IDC_S7_MENUTITLE     467819
// The app panel's own backing, so the settings app can re-shade it. The screen
// backdrop is cTab's own windowsBG (S7_IDC_SCREENBG below) repainted at runtime;
// adding our own layer in config lands on top of the map and hides it.
#define IDC_S7_PANELBG       467421

// Tile IDCs run one per app from these bases, in panel order, so the settings
// app can paint them. Kept in step with ui_s23.hpp and ui_tablet.hpp.
// The scanner readout is four rows built exactly like cTab's own map-tools
// readout - same mono font, same size, same black backing - so the two blocks
// read as one instrument rather than two different mods.
#define IDC_S7_SCANUAV   467700
#define IDC_S7_SCANJAM   467701
#define IDC_S7_SCANMESH  467702
#define IDC_S7_SCANRADIO 467703
#define IDC_S7_COMPASS  467720
#define IDC_S7_NEEDLE   467721
// The weather glyph is two layers: the cloud, which follows the accent
// colour, and everything else - sun, drops, bolt - which keeps its own.
// Arma tints a whole picture at once, so it takes two controls.
#define IDC_S7_WXICON   467730
#define IDC_S7_WXDETAIL 467731
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

// --- medical -----------------------------------------------------------
// Status key -> icon, in the SAME order FUNC(medicalRead) ranks them, so the
// tile can take the first N and get the N worst. Icons are MIRA Vehicle
// Medical's, Apache-2.0, see data/medical/NOTICE.md.
#define MED_ICON_DIR "\z\ghost\addons\ctab_devices\data\medical\"
#define MED_ICONS [ \
    ["dead",       MED_ICON_DIR + "dead.paa",              "#D04539"], \
    ["arrest",     MED_ICON_DIR + "cardiac_arrest_red.paa","#D04539"], \
    ["uncon",      MED_ICON_DIR + "unconscious_white.paa", "#E9A63C"], \
    ["bleeding",   MED_ICON_DIR + "bleeding_red.paa",      "#D04539"], \
    ["fracture",   MED_ICON_DIR + "fracture.paa",          "#E9A63C"], \
    ["tourniquet", MED_ICON_DIR + "tourniquet.paa",        "#E9A63C"], \
    ["spo2",       MED_ICON_DIR + "kat_spo2_low.paa",      "#E9A63C"], \
    ["bp",         MED_ICON_DIR + "bp_low.paa",            "#E9A63C"], \
    ["hr",         MED_ICON_DIR + "hr_low.paa",            "#E9A63C"], \
    ["bandaged",   MED_ICON_DIR + "bandage.paa",           "#39B24A"]  \
]
// Nobody hurt gets an icon of its own rather than a word, so a roster reads as
// one column of icons all the way down instead of icons and text interleaved.
// Drawn at MIRA's own 64x64 so it carries the same weight as the rest.
#define MED_ICON_OK (MED_ICON_DIR + "ok_green.paa")
// how many icons the dashboard tile has room for beside a name
#define MED_TILE_ICONS 3

// How far the ENGINEERING app's DETONATE reaches. Far past any hand
// detonator on purpose - the device is the long-range firing circuit.
#define ENG_DET_RANGE 5000
// ACE trigger types the device can fire. Anything else - a tripwire, a pressure
// plate, a timer - is not something a remote detonator has any business
// setting off, and listing them here rather than inline keeps the device and
// any future filter agreeing about which is which.
#define ENG_TRIGGERS ["Command", "MK16_Transmitter", "Cellphone"]

#define S7_FONTS ["RobotoCondensed","RobotoCondensedBold","PuristaMedium","EtelkaMonospacePro"]
#define S7_FONT_NAMES ["Condensed","Bold","Purista","Mono"]
#define S7_FONT_DEFAULT 0

// cTab's bezel-art and screen-backdrop controls. Named apart from cTab's own
// IDC_CTAB_* macros: the updateInterface fork includes cTab's macro header, and
// identical names there would collide.
// cTab's display IDDs. Named because "1775144" appearing in six files with no
// explanation is how a device gets skinned by the wrong layout function.
// The S23 has two: one for the handheld dialog, one for the held-up HUD.
// The OSD strip is drawn this fraction of the glass height ABOVE the glass, so
// no sliver of bright map shows along its top edge - the seam you get rounding
// a float rect to pixels. The overspill lands on the case's black inner frame,
// where a black bar is invisible.
//
// data/gen_masks.py PARSES this line. It crops the corner masks from the same
// point the layouts start drawing from, so the two numbers have to agree; they
// used to be typed out separately in four files with a comment asking nicely.
#define HDR_OVER 0.005

#define IDD_S23         177382
#define IDD_S23_HUD     177383
#define IDD_GFT         1775154
#define IDD_FBCB4       1775144

// cTab's display NAMES, in the same order. Every entry point that skins,
// lays out or ticks a device gates on this exact list.
#define DEVICE_DISPLAYS ["cTab_Android_dlg", "cTab_Tablet_dlg", "cTab_Android_dsp", "cTab_FBCB2_dlg"]

// cTab's own hardware buttons - the hotspots over the keys painted down the
// side of its device art. They live on the CASE, outside the screen, which is
// why FUNC(auditLayout) must not measure them against the glass.
#define CTAB_CASE_BUTTONS [16, 1600, 1601, 1602, 1603, 1604, 1605, 1606, 1607, 1608, 1609, 1610, 1611]

#define S7_IDC_BEZEL    1200
#define S7_IDC_SCREENBG 1210

// cTab's own OSD icons along the top strip, in strip order: battery, signal,
// satellite. Pictures, so the remap's uneven x/y scaling stretches them - see
// FUNC(osdCapture) / FUNC(osdRestore).
#define OSD_IDCS [2, 3, 4]

// The devices' real screen holes, measured off the art itself (canvas px of
// 2048). Measure them as the longest run along a centre line where the case
// stops being SOLID - alpha < 128 - and never as "the run where alpha is
// exactly 0". The S23's hole carries stray alpha-2 pixels, which halted an
// edge-walk 69px early and had this reading 232 wide instead of 163: the map
// then sat inset from the left of the glass, which is the "not sized right"
// sliver. The GFT's screen is tinted rather than punched (its centre is alpha
// 8) with a soft shadow ramp inside the bezel, so a strict test finds the
// tint's edge, not the frame's - it read 50px low at the top and left a white
// band above the header.
#define S23_GLASS_X 163
#define S23_GLASS_Y 659
#define S23_GLASS_W 1610
#define S23_GLASS_H 729
// The GFT's aperture was CUT LARGER in the art itself (backup of the previous
// frame in data/_backup_gft): the bevel profile was lifted off the real edge
// and replayed around the bigger rectangle, so the lip looks the same.
#define GFT_GLASS_X 213
#define GFT_GLASS_Y 618
#define GFT_GLASS_W 1623
#define GFT_GLASS_H 1000
// where the GFT art's opaque content starts and ends vertically, for fitting
// the case on screen (the art runs to the canvas bottom, cTab's grid cuts it)
#define GFT_ART_TOP 479
#define GFT_ART_H   1569

// The FBCB4 border. Its screen is not a punched hole like the handhelds' - it
// is painted dark grey - so the rectangle below is the grey panel, measured off
// the art the same way. ART_TOP/ART_H are the opaque case, for fitting the
// whole unit inside the safe zone: on cTab's own FBCB2 grid (safezoneH * 1.6)
// the case stood 109% of the screen tall and the map ran off the top.
// Re-measured by walking out from the screen's centre until the pixel stops
// being screen-dark (a plain dark-pixel bbox lies: the painted keys and their
// connector stubs are the same tone). The old numbers were 6px short at the
// top, which is the sliver of bare panel that showed above the OSD strip.
#define FBCB4_GLASS_X 235
#define FBCB4_GLASS_Y 568
#define FBCB4_GLASS_W 1578
#define FBCB4_GLASS_H 886
#define FBCB4_ART_TOP 327
#define FBCB4_ART_H   1394

// How much of the safe zone's height a device case fills, and the gap above it.
#define CASE_FILL 0.94
#define CASE_TOP  0.03

// the rectangles cTab authored its own controls into, on the art it shipped
#define S7_OLD_X 452
#define S7_OLD_Y 713
#define S7_OLD_W 1134
#define S7_OLD_H 624
#define TAB_OLD_X 257
#define TAB_OLD_Y 533
#define TAB_OLD_W 1341
#define TAB_OLD_H 960

// The corner mask laid over the S23's glass: the screen is a rounded
// rectangle and every full-screen control is not, so this paints the case's
// own corner arcs back on top. Never in a hide list.
#define IDC_S23_MASK      467384
// and one each for the other two, cut from THEIR art - the arcs and the case
// colour differ per device, so this is not a thing to share between them
#define IDC_GFT_MASK      467382
#define IDC_FBCB4_MASK    467383
// the S23's menu key, top right of the glass - the case has no bezel keys
#define IDC_S23_MENUKEY   467394
#define IDC_S23_MENUGLYPH 467395
// cTab keeps both maps and shows one; a tool has to go on the one that is up.
#define S7_IDC_MAP      1201
#define S7_IDC_MAPTOPO  1202

// cTab's own controls this addon has to place or read: the signal icons the
// header ends with, the map-tools readout the scanner readout lines up with,
// and the message groups whose children need resizing with them.
#define S7_IDC_SIGNAL   3
#define S7_IDC_SAT      4
#define S7_IDC_HOOKGRID 2617
#define S7_IDC_HOOKDIR  2618
#define S7_IDC_HOOKDST  2619
#define S7_IDC_HOOKELEV 2620
#define S7_IDC_MSGLIST  15000
#define S7_IDC_MSGTEXT  18510

// The rest of cTab's messaging page, placed by hand in FUNC(messageLayout).
// S7_IDC_ prefixed like everything else of cTab's named here: the updateInterface
// fork includes cTab's own macro header, so an IDC_CTAB_* name would collide.
#define S7_IDC_MSGRECIPIENTS 15010
#define S7_IDC_MSGCOMPOSE    14000
#define S7_IDC_MSGDELETE     16120
#define S7_IDC_MSGSEND       16130
#define S7_IDC_MSGMEDEVAC    16140
#define S7_IDC_MSGTEMPLATES  16150
#define S7_IDC_MSGFRAMEREAD     14
#define S7_IDC_MSGFRAMECOMPOSE  15

// cTab's own app pages. Every one of them is authored to fill cTab's screen
// rectangle, so the proportional sweep lands them on the whole of this case's
// glass - title bars hard against the top frame, over the header strip. They
// are laid out below the strip like this mod's own pages; see
// FUNC(tabletLayout). The first four are controls groups, the last a picture.
// cTab reserves the bottom of every page group for a taskbar this mod hides,
// so a page laid out to fill the glass still stops short and leaves a band of
// dead screen along the bottom edge. Derived, not measured:
//   SCREEN_CONTENT_H = MAP_H - OSD_HEADER_H - OSD_FOOTER_H = 993 - 42 - 0 = 951
//   TASKBAR_H        = MAP_W / TASKBAR_PX_W * TASKBAR_PX_H
//                    = 1341 / 1335 * 50                    = 50.22
//   50.22 / 951 = 5.28%
// Page children are stretched by 1/(1 - this) so they reach the real bottom.
#define CTAB_TASKBAR_FRAC 0.0528


#define S7_IDC_PAGE_DESKTOP 4610
#define S7_IDC_PAGE_UAV     4630
#define S7_IDC_PAGE_HCAM    4640
#define S7_IDC_PAGE_MESSAGE 4650
#define S7_IDC_PAGE_HCAMFULL 1245

// --- the tools drawer ------------------------------------------------------
// One set of tool buttons (cTab's map switches 467541+, this mod's drawing
// tools 467550+) serves all three devices; the drawer is the panel they sit on
// and a key of its own on each device's glass, dotted so it reads apart from
// the app menu's bars. They used to be rows on the settings page.
#define IDC_S7_TOOLSBG      467320
#define IDC_S23_TOOLKEY     467396
#define IDC_S23_TOOLGLYPH   467397
#define IDC_GFT_TOOLKEY     467388
#define IDC_GFT_TOOLGLYPH   467389
#define IDC_FBCB4_TOOLKEY   467386
#define IDC_FBCB4_TOOLGLYPH 467387
// The FBCB4 art's own power key, bottom right - it closes the screen.
#define IDC_FBCB4_POWER     467385

// The other keys painted on the case art, wired the same way as the power
// key: an invisible catcher over the paint, given the meaning it looks like
// it has. Rects measured off the art (canvas px of 2048).
#define IDC_FBCB4_KEYF1     467360
#define IDC_FBCB4_KEYF2     467361
#define IDC_FBCB4_KEYF3     467362
#define IDC_GFT_KEYAPP1     467363
#define IDC_GFT_KEYAPP2     467364
#define IDC_GFT_KEYAPP3     467365
#define IDC_GFT_KEYLOCK     467366
// and the second column, painted down the right-hand bezel to mirror them
#define IDC_GFT_KEYAPP4     467367
#define IDC_GFT_KEYAPP5     467368
#define IDC_GFT_KEYHOME     467369
#define IDC_GFT_KEYPOWER    467370

// Every control the tools drawer puts on screen, in one list so the fork's
// show pass and the layouts cannot drift apart. 467540 ("TEXT") is gone -
// it was cTab's label on/off switch, but on the drawer it read as a header
// for TEXT +/- and the user asked for it out.
#define TOOL_IDCS 467541,467542,467543,467544,467545,467546, \
                  467550,467551,467552,467553,467554,467555,467556,467557
