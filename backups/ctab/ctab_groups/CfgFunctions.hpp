// CfgFunctions is used here for ONE job: overriding two cTab functions.
//
// Declaring a name here compiles it before preInit event handlers run, so it
// beats cTab's own PREP pass - the only way to change behaviour in a mod that
// compiles its functions final. Our own functions are NOT declared here; they
// are PREP'd as usual in XEH_PREP.hpp, so FUNC() resolves the way it does
// everywhere else in this mod (the forks call ours through FUNC too).

class CfgFunctions {
    class ctab_messaging {
        tag = "ctab_messaging";

        class Functions {
            class fillRecipientList {
                file = QPATHTOF(ctab_fork\fn_fillRecipientList.sqf);
            };
            class getSelectedRecipients {
                file = QPATHTOF(ctab_fork\fn_getSelectedRecipients.sqf);
            };
        };
    };
};
