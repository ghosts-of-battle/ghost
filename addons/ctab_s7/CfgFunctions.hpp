// CfgFunctions is used here for ONE job: overriding a cTab function.
//
// Declaring a name here compiles it before preInit event handlers run, so it
// beats cTab's own PREP pass - the only way to change behaviour in a mod that
// compiles its functions final. Our own functions are NOT declared here; they
// are PREP'd as usual in XEH_PREP.hpp, so FUNC() resolves the way it does
// everywhere else in this mod.

class CfgFunctions {
    class cTab {
        class Functions {
            class updateInterface {
                file = QPATHTOF(ctab_fork\fn_updateInterface.sqf);
            };
        };
    };
};
