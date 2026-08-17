#define COMPONENT ctab_ace
#define COMPONENT_BEAUTIFIED cTab ACE

#ifdef DEBUG_ENABLED_CTAB_ACE
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_CTAB_ACE
    #define DEBUG_SETTINGS DEBUG_SETTINGS_CTAB_ACE
#endif

#include "\z\ghost\addons\main\script_mod.hpp"
#include "\z\ghost\addons\main\script_macros.hpp"

// cTab's two map controls. It shows one and hides the other; both carry the
// gesture draw so switching map type does not lose the pointers.
#define IDC_CTAB_MAP     1201
#define IDC_CTAB_MAPTOPO 1202
