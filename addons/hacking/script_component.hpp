#define COMPONENT hacking
#define COMPONENT_BEAUTIFIED Hacking
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_HACKING
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_HACKING
    #define DEBUG_SETTINGS DEBUG_SETTINGS_HACKING
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// The required-items list (carry any ONE to unlock the Hack menu) is a CBA
// setting, GVAR(requiredItems) - a pure inventory check, no items-mod dependency.

// --- tuning ---
#define HACK_TOWER_RANGE   50      // metres: how close to a tower to hack it
#define HACK_DRONE_RANGE   400     // metres: how close to a drone to hack it down
#define HACK_WRECK_RANGE   25      // metres: a downed drone is stripped by hand, not at range
#define HACK_DURATION      8       // seconds: progress-bar time for a hack
#define HACK_WRECK_DURATION 20     // seconds: pulling a card off a wreck, no security to beat
#define TARGET_WATCH_INTERVAL 5   // sec between destroyed-target checks
#define MAINTAIN_TICK      10      // sec between maintenance passes; each target keeps its own due time


// Defaults for the optional Hacking Settings module - these are what applies
// when no module is placed, so they must match the module's attribute defaults.
#define HACK_TIME_DEF       60
#define HACK_RANGE_DEF      20
#define HACK_COOLDOWN_DEF   600
#define HACK_ABANDON_DEF    60
#define HACK_PICTURE_DEF    1500
#define HACK_RESPONSE_DEF   25
#define INTEL_LIFETIME_DEF  300
#define INTEL_ALPHA_DEF     0.5

// Target search circles. Each hack on the same objective steps to the next
// radius in the list and holds at the last one.
#define INTEL_RADII_DEF     "4000,3000,2000,1000"
#define INTEL_OFFSET_DEF    75      // % of the radius the circle is displaced by
#define INTEL_OFFSET_CAP    0.95    // any more and the objective falls outside it
#define INTEL_RADIUS_FALLBACK 1000  // if the radius list is unusable
#define INTEL_TARGET_ALPHA  0.35
#define PRODUCT_WINDOW      60      // sec the post-hack choice stays offered

// SIGINT clustering (D3)
#define SIGINT_BIN      500     // m grid cell for the density bin
#define SIGINT_CLUSTER  750     // m from the winning bin's centroid
#define SIGINT_PAD      200     // m padding on the drawn circle
#define SIGINT_MIN_R    300     // m minimum circle radius

// Remote unit hack (Part 1 section 6) - defaults mirror the module attributes.
// The feature only exists when a ghost_moduleRemoteHack is placed.
#define RH_RANGE_DEF        800
#define RH_TIME_DEF         60
#define RH_FAIL_DEF         15
#define RH_ALERT_DEF        2000
#define RH_JAM_CHANCE_DEF   50
#define RH_JAM_MIN_DEF      500
#define RH_JAM_MAX_DEF      2000
#define RH_JAM_MAX_CAP      2000    // hard cap on the rolled radius
#define RH_JAM_DURATION_DEF 600

// --- hacking tablet ---------------------------------------------------------
// One dialog replaces every hacking ACE action. Device cards on the left, intel
// choice on the right, progress along the bottom. Closing it pauses the hack.
#define IDD_TABLET          8700
#define IDC_TAB_BEZEL       8701
#define IDC_TAB_SCREEN      8702
#define IDC_TAB_TITLE       8703
#define IDC_TAB_STATUS      8704
#define IDC_TAB_BAR         8705
#define IDC_TAB_PCT         8706
#define IDC_TAB_ACTION      8707
#define IDC_TAB_CLOSE       8708
#define IDC_TAB_DEVHEAD     8709
#define IDC_TAB_INTELHEAD   8710

// Fixed card slots rather than ctrlCreate - same technique as the notify stack.
#define TAB_CARDS           6
#define IDC_CARD_BG(n)      (8720 + (n) * 5)
#define IDC_CARD_NAME(n)    (8721 + (n) * 5)
#define IDC_CARD_INFO(n)    (8722 + (n) * 5)
#define IDC_CARD_BTN(n)     (8723 + (n) * 5)

#define TAB_INTEL           5
#define IDC_INTEL_BTN(n)    (8780 + (n))

#define TAB_REFRESH         1       // sec between device-list refreshes
#define TAB_SCAN_PAD        50      // m added to the biggest hack range when scanning

// --- hand-held scanner ------------------------------------------------------
// A held device, not a dialog: it stays on screen while you walk, and every
// reading changes as you move. Behaviour referenced from ACE's MicroDAGR - ACE
// is GPL, so nothing is copied, only the idea of a device you carry.
#define IDD_SCANNER         8800
#define IDC_SCN_BEZEL       8801
// 8802 was the screen panel. The text draws straight onto the art now, so there
// is nothing opaque left to misalign with the moulding.
#define IDC_SCN_TITLE       8803
#define IDC_SCN_DRONE_L     8804
#define IDC_SCN_DRONE_V     8805
#define IDC_SCN_JAM_L       8806
#define IDC_SCN_JAM_V       8807
#define IDC_SCN_MESH_L      8808
#define IDC_SCN_MESH_V      8809
#define IDC_SCN_NETHEAD     8810
#define IDC_SCN_NET_L       8811
#define IDC_SCN_NET_V       8812
#define IDC_SCN_STATUS      8813
#define IDC_SCN_ICO_DRONE   8814
#define IDC_SCN_ICO_JAM     8815
#define IDC_SCN_ICO_MESH    8816
#define IDC_SCN_ICO_NET     8817
#define IDC_SCN_TIMER       8818
#define IDC_SCN_ALARM       8819

#define SCN_TICK            0.25    // sec between readings
#define SCN_DRONE_WARN      2000    // m: amber
#define SCN_DRONE_ALERT     1000    // m: red
#define SCN_MESH_RANGE      200     // m: a friendly close enough to stand in for a mesh link
#define SCN_HUD_ID          "hackScanner"

// Geometry. SCN_ASPECT is a PHYSICAL width:height - turn it into a UI width with
// EFUNC(common,uiSquare), because UI units are only square when safeZoneW /
// safeZoneH happens to match the display aspect. The art is a square 512x512
// image of a phone that MRH's own dialog stretches to a tall handset, and
// SCN_ASPECT reproduces that same stretch.
#define SCN_H               0.391   // x safeZoneH
#define SCN_ASPECT          0.602   // control w:h
// The same width expressed as a safeZoneW fraction, which is what the shared
// HUD position/move helpers take.
#define SCN_WFRAC           (SCN_H * SCN_ASPECT * safeZoneH / safeZoneW)

// The lit screen inside the art, as a fraction of the control. Measured off
// data/phone.paa: the black panel runs x 65..449, y 36..403 of 512, inset a
// touch so no glyph ever kisses the bezel.
#define SCN_SCR_X           0.140
#define SCN_SCR_Y           0.082
#define SCN_SCR_W           0.724
#define SCN_SCR_H           0.693

// The screen is a terminal, so everything sits on a fixed line grid.
#define SCN_ROWS            12

// Stopwatch states, cycled by one keybind: press to start, press to stop, press
// again to clear.
#define SCN_T_IDLE          0
#define SCN_T_RUNNING       1
#define SCN_T_STOPPED       2

// Alarm. Dialled in like a kitchen timer - each press adds a step, and it arms
// itself once the presses stop - because a handset has one spare key, not a
// number pad. The armed list lives on the server so an alarm outlives its
// setter, and the ring is server-wide: every scanner in the mission goes off.
#define SCN_ALARM_STEP      300     // sec added per press (5 min)
#define SCN_ALARM_ARM_DELAY 2       // sec of quiet after the last press before it arms
#define SCN_ALARM_RING      15      // sec a ring beeps and blinks before giving up

#define SCN_DEF_X           0.845
#define SCN_DEF_Y           0.42
