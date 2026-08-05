// Config-level patch of cTab's message-template footer. The footer group is
// instantiated from this config class at runtime (messaging fnc_generateTemplateUI
// -> ctrlCreate [QGVAR(templateFooter), ...]), so re-pointing its Send button
// here is a real hook - unlike overriding the function it used to call, which
// cTab blocks by compiling its functions final.
//
// Both reopened classes restate their parents: a parentless reopen severs the
// class from its base, which would leave the footer and its button untyped.

class RscControlsGroupNoScrollbars;
class cTab_RscButton;

class ctab_messaging_templateFooter: RscControlsGroupNoScrollbars {
    class controls {
        class sendButton: cTab_RscButton {
            onButtonClick = QUOTE(call FUNC(btnSend));
        };
    };
};
