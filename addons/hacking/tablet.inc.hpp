// The intrusion suite's dialog id and the idcs of the controls another addon
// might legitimately need to find - ghost_tacpad_apps repaints them so the
// suite matches the rest of the tacpad.
//
// Deliberately free of script_mod.hpp and script_macros.hpp: an addon that
// included this one's whole script_component.hpp would have its own COMPONENT
// redefined out from under it, and every PREP in it would then look for its
// functions in this folder.
//
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
