class ctrlMenu; /*proto*/
class display3DEN
{
    class ContextMenu: ctrlMenu
    {
        class Items
        {
            items[] += {"Patrol"};
            class Patrol
            {
                text = "Generate patrol";
                action = "findDisplay 313 createDisplay 'ghost_patrol_editBox';";
                conditionShow = "selectedGroup";
                value = 0;
            };
        };
    };
};
