class GVAR(interface)
{
	idd = INSERTION_IDD;
	movingenable=1;
	
	class controls 
	{

////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Mr H., v1.063, #Lymexe)
////////////////////////////////////////////////////////

class Back: RscText
{
	idc = 2200;
	x = "7.37607e-008 * safezoneW + safezoneX";
	y = "-4.91738e-008 * safezoneH + safezoneY";
	w = "1.00547 * safezoneW";
	h = "1.001 * safezoneH";
};
class SelectInfo: RscStructuredText
{
	idc = 1100;
	text = "$STR_GHOST_Insertion_SelectinsertPoint"; //--- ToDo: Localize;
	x = "0.12875 * safezoneW + safezoneX";
	y = "0.00500001 * safezoneH + safezoneY";
	w = "0.12375 * safezoneW";
	h = "0.033 * safezoneH";
};
class MapZone: RscMapControl
{
	idc = 1200;
    onMouseButtonDblClick = QUOTE(call FUNC(onMapDoubleClick););
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = "0.128751 * safezoneW + safezoneX";
	y = "0.038 * safezoneH + safezoneY";
	w = "0.443438 * safezoneW";
	h = "0.946 * safezoneH";
};
class SelectVehInfo: RscStructuredText
{
	idc = 1101;
	text = "$STR_GHOST_Insertion_selectInsertVeh"; //--- ToDo: Localize;
	x = "-0.000156274 * safezoneW + safezoneX";
	y = "0.049 * safezoneH + safezoneY";
	w = "0.128906 * safezoneW";
	h = "0.022 * safezoneH";
};
class SelectVehCombo: RscCombo
{
	idc = 2100; 
    onLbSelChanged = QUOTE(call FUNC(fillPlayersToGoList););
	x = "-0.000156274 * safezoneW + safezoneX";
	y = "0.071 * safezoneH + safezoneY";
	w = "0.128906 * safezoneW";
	h = "0.022 * safezoneH";
};
class AvailablecargoslotsText: RscStructuredText
{
	idc = 1102;
	text = "$STR_GHOST_Insertion_AvailCGSlotsIntel"; //--- ToDo: Localize;
	x = "-0.000156274 * safezoneW + safezoneX";
	y = "0.093 * safezoneH + safezoneY";
	w = "0.128906 * safezoneW";
	h = "0.044 * safezoneH";
};
class SelectAltitudeText: RscStructuredText
{
	idc = 1103;
	text = "$STR_GHOST_Insertion_DesiredAltIntel"; //--- ToDo: Localize;
	x = "-0.000156274 * safezoneW + safezoneX";
	y = "0.137 * safezoneH + safezoneY";
	w = "0.128906 * safezoneW";
	h = "0.022 * safezoneH";
};
class AltitudeField: RscEdit
{
	idc = 1000;
	text = "500"; //--- ToDo: Localize;
	x = "-0.000156274 * safezoneW + safezoneX";
	y = "0.159 * safezoneH + safezoneY";
	w = "0.128906 * safezoneW";
	h = "0.022 * safezoneH";
};
class StartInsertButton: RscButton
{
	idc = 1600;
	text = "$STR_GHOST_Insertion_startInsertionBtton"; //--- ToDo: Localize;
    action = QUOTE(call FUNC(startInsertion););
	x = "-0.000156274 * safezoneW + safezoneX";
	y = "0.918 * safezoneH + safezoneY";
	w = "0.128906 * safezoneW";
	h = "0.033 * safezoneH";
};
class RscControlsGroup_2300: RscControlsGroup
{
	idc = 2300;
	moving = 1;
    x = "-0.000156274 * safezoneW + safezoneX";
    y = "0.203 * safezoneH + safezoneY";
    w = "0.128906 * safezoneW";
    h = "0.715 * safezoneH";
	class Controls
	{
        class FlightChecList: RscStructuredText
        {
            idc = 1104;
            text = ""; //--- ToDo: Localize;
            x = 0;
            y = 0;
            w = "0.128906 * safezoneW";
            h = "0.715 * safezoneH";
        };
    };
};
class CecklistTitle: RscStructuredText
{
	idc = 1105;
	text = "$STR_GHOST_Insertion_InsertionChecListTitle"; //--- ToDo: Localize;
	x = "-0.000156274 * safezoneW + safezoneX";
	y = "0.181 * safezoneH + safezoneY";
	w = "0.128906 * safezoneW";
	h = "0.022 * safezoneH";
};
class SelectInsertionTypeCombo: RscCombo
{
	idc = 2101;
	show = 1;//for later devs
	onLbSelChanged = QUOTE(call FUNC(onInsertionTypeChanged));
	x = "-0.0104688 * safezoneW + safezoneX";
	y = "0.027 * safezoneH + safezoneY";
	w = "0.139219 * safezoneW";
	h = "0.022 * safezoneH";
};
class SelectInsertionTypeText: RscStructuredText
{
	idc = 1106;
	show = 1;//for later devs
	text = "$STR_GHOST_Insertion_MenuSelectInsertTypeTitle"; //--- ToDo: Localize;
	x = "-0.000156274 * safezoneW + safezoneX";
	y = "0.00500001 * safezoneH + safezoneY";
	w = "0.128906 * safezoneW";
	h = "0.022 * safezoneH";
};
class PersonelChoiceInfo: RscStructuredText
{
	idc = 1107;
	text = "$STR_GHOST_Insertion_PerToInsertTitle"; //--- ToDo: Localize;
	x = "0.572187 * safezoneW + safezoneX";
	y = "0.00500001 * safezoneH + safezoneY";
	w = "0.422812 * safezoneW";
	h = "0.033 * safezoneH";
};
class PersonelToAdd: RscStructuredText
{
	idc = 1108;
	text = "$STR_GHOST_Insertion_persToAddFlight"; //--- ToDo: Localize;
	x = "0.572187 * safezoneW + safezoneX";
	y = "0.038 * safezoneH + safezoneY";
	w = "0.201094 * safezoneW";
	h = "0.022 * safezoneH";
};
class SelectGrpInfo: RscStructuredText
{
	idc = 1109;
	text = "$STR_GHOST_Insertion_selectGrpTitle"; //--- ToDo: Localize;
	x = "0.572187 * safezoneW + safezoneX";
	y = "0.06 * safezoneH + safezoneY";
	w = "0.201094 * safezoneW";
	h = "0.022 * safezoneH";
};
class SelectGrpCombo: RscCombo
{
	idc = 2102;
    onLbSelChanged = QUOTE(call FUNC(fillPlayersToAddList););
	x = "0.572187 * safezoneW + safezoneX";
	y = "0.082 * safezoneH + safezoneY";
	w = "0.201094 * safezoneW";
	h = "0.022 * safezoneH";
};
class RscControlsGroup_2301: RscControlsGroup
{
	idc = 2301;
	moving = 1;
    x = "0.572187 * safezoneW + safezoneX";
    y = "0.104 * safezoneH + safezoneY";
    w = "0.201094 * safezoneW";
    h = "0.495 * safezoneH";

    class Controls
	{
        class SelectedGrpListBox: RscListBox
        {
            idc = 1500;
            x = 0;
            y = 0;
            w = "0.201094 * safezoneW";
            h = "0.495 * safezoneH";
        };
    };
};
class PersonelOnboardInfo: RscStructuredText
{
	idc = 1110;
	text = "$STR_GHOST_Insertion_perInInsertText"; //--- ToDo: Localize;
	x = "0.773281 * safezoneW + safezoneX";
	y = "0.038 * safezoneH + safezoneY";
	w = "0.221719 * safezoneW";
	h = "0.066 * safezoneH";
};
class RscControlsGroup_2302: RscControlsGroup
{
	idc = 2302;
	moving = 1;
    x = "0.773281 * safezoneW + safezoneX";
    y = "0.104 * safezoneH + safezoneY";
    w = "0.221719 * safezoneW";
    h = "0.495 * safezoneH";

    class Controls
	{
        class OnboardListBox: RscListBox
        {
            idc = 1501;
            x = 0;
            y = 0;
            w = "0.221719 * safezoneW";
            h = "0.495 * safezoneH";
        };
    };
};
class AddToPersonelButton: RscButton
{
	idc = 1601;
	text = "$STR_GHOST_Insertion_addToPersButton"; //--- ToDo: Localize;
    action = QUOTE(call FUNC(addToPlayerListAction););
	x = "0.572187 * safezoneW + safezoneX";
	y = "0.599 * safezoneH + safezoneY";
	w = "0.201094 * safezoneW";
	h = "0.044 * safezoneH";
};
class RemoveFromPersonelButton: RscButton
{
	idc = 1602;
	text = "$STR_GHOST_Insertion_remvFromPersButton"; //--- ToDo: Localize;
    action = QUOTE(call FUNC(removeFromPlayerListAction););
	x = "0.773281 * safezoneW + safezoneX";
	y = "0.599 * safezoneH + safezoneY";
	w = "0.221719 * safezoneW";
	h = "0.044 * safezoneH";
};
class ExtraGear: RscStructuredText
{
	idc = 1111;
	text = "$STR_GHOST_Insertion_extraGearExplanationInfo"; //--- ToDo: Localize;
	x = "0.572187 * safezoneW + safezoneX";
	y = "0.643 * safezoneH + safezoneY";
	w = "0.422812 * safezoneW";
	h = "0.044 * safezoneH";
};
class RscControlsGroup_2303: RscControlsGroup
{
	idc = 2303;
	moving = 1;
    x = "0.572187 * safezoneW + safezoneX";
    y = "0.687 * safezoneH + safezoneY";
    w = "0.201094 * safezoneW";
    h = "0.264 * safezoneH";

    class Controls
	{
        class AvailableGearListBox: RscListBox
        {
            idc = 1502;
            x = 0;
            y = 0;
            w = "0.201094 * safezoneW";
            h = "0.264 * safezoneH";
        };
    };
};
class RscControlsGroup_2304: RscControlsGroup
{
	idc = 2304;
	moving = 1;
    x = "0.773281 * safezoneW + safezoneX";
    y = "0.687 * safezoneH + safezoneY";
    w = "0.221719 * safezoneW";
    h = "0.264 * safezoneH";

    class Controls
	{
        class GearOnboardListBox: RscListBox
        {
            idc = 1503;
            x = 0;
            y = 0;
            w = "0.221719 * safezoneW";
            h = "0.264 * safezoneH";
        };
    };
};
class AddToGearButton: RscButton
{
	idc = 1603;
	text = "$STR_GHOST_Insertion_BringOnBoardButt"; //--- ToDo: Localize;
	action = QUOTE(call FUNC(addToGearListAction););
	x = "0.572187 * safezoneW + safezoneX";
	y = "0.951 * safezoneH + safezoneY";
	w = "0.201094 * safezoneW";
	h = "0.044 * safezoneH";
};
class RemoveFromBoardButton: RscButton
{
	idc = 1604;
	action = QUOTE(call FUNC(removeFromGearListAction););
	text = "$STR_GHOST_Insertion_RmvFromCGButton"; //--- ToDo: Localize;
	x = "0.773281 * safezoneW + safezoneX";
	y = "0.951 * safezoneH + safezoneY";
	w = "0.221719 * safezoneW";
	h = "0.044 * safezoneH";
};
class CancelButton: RscButton
{
	idc = 1605;
	text = "$STR_GHOST_Insertion_Cancel"; //--- ToDo: Localize;
    action = "closedialog 0";
	x = "-0.000156274 * safezoneW + safezoneX";
	y = "0.951 * safezoneH + safezoneY";
	w = "0.128906 * safezoneW";
	h = "0.033 * safezoneH";
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
    };
};
