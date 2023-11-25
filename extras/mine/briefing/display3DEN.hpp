class ctrlMenuStrip;
class display3DEN
{
    class Controls
    {
        class MenuStrip : ctrlMenuStrip
        {
            class Items {
                class PREFIX {
                    items[] += {QGVAR(Briefing)};
                };
                class GVAR(Briefing)
                {
                    text = "GHOST Briefing Settings";
                    action = "edit3DENMissionAttributes 'GHOST_MissionBriefingAttributes';";
                    //picture = "\z\ghost\addons\common\UI\icon_gear_ca";
                };
            };
        };
    };
};