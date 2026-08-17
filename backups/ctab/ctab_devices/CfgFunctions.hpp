// CfgFunctions is used here for ONE job: overriding a cTab function.
//
// Declaring a name here compiles it before preInit event handlers run, so it
// beats cTab's own PREP pass - the only way to change behaviour in a mod that
// compiles its functions final. Our own functions are NOT declared here; they
// are PREP'd as usual in XEH_PREP.hpp, so FUNC() resolves the way it does
// everywhere else in this mod.
//
// IT ONLY WORKS FOR FUNCTIONS cTab CALLS BY THEIR `cTab_fnc_` NAME. A block
// here compiles `cTab_fnc_<name>`; cTab's macros (PREFIX ctab, COMPONENT core)
// make FUNC(x) `ctab_core_fnc_x`, so anything cTab reaches through FUNC() is a
// different global and the fork is never called. updateInterface qualifies -
// cTab's own code calls cTab_fnc_updateInterface. aceSelfActions did NOT: its
// only caller is the ACE config entry, through FUNC(). That fork is reached by
// reopening the config entry instead - see CfgVehicles below.

class CfgFunctions {
    class cTab {
        class Functions {
            class updateInterface {
                file = QPATHTOF(ctab_fork\fn_updateInterface.sqf);
            };
        };
    };
};

// cTab's own ACE entry, pointed at this mod's builder. Parents are restated
// all the way down: a parentless patch of an existing class severs its
// inheritance and floods the RPT.
class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class cTab_Interact {
                insertChildren = QUOTE(call FUNC(aceSelfActions));
            };
        };
    };
};
