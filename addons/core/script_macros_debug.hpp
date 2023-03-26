// Dev Ony: Enabling these will skip configs from any ghost addons that require external mods
// Allows loading just cba/ace/ghost

// Should now be handled automatically by __has_include checks
// EXCEPT when using filePatching: files that exist outside of pbos will still pass for some reason
// Ref https://feedback.bistudio.com/T161113 (so might still need to use these for acre)


// #define GHOST_LEAN_RHS_CUP_HLC "LEAN RHS/CUP/HLC"
// #define GHOST_LEAN_ACRE "LEAN ACRE"


// macro add a dummy cfgPatch and notLoaded entry
#define GHOST_PATCH_NOT_LOADED(NAME,CAUSE) \
class CfgPatches { \
    class DOUBLES(NAME,notLoaded) { \
        units[] = {}; \
        weapons[] = {}; \
        requiredVersion = REQUIRED_VERSION; \
        requiredAddons[] = {"ghost_core"}; \
        version = VERSION; \
    }; \
}; \
class ghost_notLoaded { \
    NAME = CAUSE; \
};
