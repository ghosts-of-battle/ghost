
class EMM_mainMenu_CfgMenus {
    class VN {
        class menus {
            class MainMenu;
            class MultiplayerVN: MainMenu {
                items[] = {"Ghosts of Battle", "ServerBrowser", "SOGPrairieFire", "MikeForce", "Exit"};

                class ServerBrowser;
                class Ghosts: ServerBrowser {
                    action = QUOTE(call (uiNamespace getVariable QQFUNC(join)));
                    text = CSTRING(SpotlightHeader);
                };
            };
        };
    };
};
