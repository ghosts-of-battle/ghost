class GVAR(cargoPrep)
{
	idd = CARGO_IDD;
	movingenable=1;
	
	class controls 
	{

////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Mr H., v1.063, #Lymexe)
////////////////////////////////////////////////////////


////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Mr H., v1.063, #Xycive)
////////////////////////////////////////////////////////

class GUIBack: RscText
{
	idc = 2200;
    moving = 1;
    x = "0.335 * safezoneW + safezoneX";
	y = "0.313 * safezoneH + safezoneY";
	w = "0.340312 * safezoneW";
	h = "0.264 * safezoneH";
    /*
	x = "0.335 * safezoneW + safezoneX";
	y = "0.324 * safezoneH + safezoneY";
	w = "0.340312 * safezoneW";
	h = "0.253 * safezoneH";
    */
};
class Frame: RscFrame
{
	idc = 1800;
    moving = 1;
	text = "$STR_GHOST_Insertion_PrepCarGoloadinterfTitle"; //--- ToDo: Localize;
    sizeEx = 20;
	x = "0.335 * safezoneW + safezoneX";
	y = "0.313 * safezoneH + safezoneY";
	w = "0.340312 * safezoneW";
	h = "0.264 * safezoneH";
};
class ObjectPreviewPic: RscPicture
{
	idc = 1200;
    moving = 1;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = "0.587656 * safezoneW + safezoneX";
	y = "0.357 * safezoneH + safezoneY";
	w = "0.0876563 * safezoneW";
	h = "0.121 * safezoneH";
};
class InfoText: RscStructuredText
{
	idc = 1100;
    moving = 1;
	text = "$STR_GHOST_Insertion_PrepareCGinfotext"; //--- ToDo: Localize;
	x = "0.345312 * safezoneW + safezoneX";
	y = "0.335 * safezoneH + safezoneY";
	w = "0.232031 * safezoneW";
	h = "0.066 * safezoneH";
};
class DefineNameInfo: RscStructuredText
{
	idc = 1101;
    moving = 1;
	text = "$STR_GHOST_Insertion_defineCGnameinfotext"; //--- ToDo: Localize;
	x = "0.347396 * safezoneW + safezoneX";
	y = "0.42037 * safezoneH + safezoneY";
	w = "0.226875 * safezoneW";
	h = "0.033 * safezoneH";
};
class InputNameBox: RscEdit
{
	idc = 1400;
    moving = 1;
	x = "0.350469 * safezoneW + safezoneX";
	y = "0.467 * safezoneH + safezoneY";
	w = "0.221719 * safezoneW";
	h = "0.044 * safezoneH";
};
class OkButton: RscButton
{
	idc = 1600;
    moving = 1;
	text = "$STR_GHOST_Insertion_PrepareCargo"; //--- ToDo: Localize;
	x = "0.350469 * safezoneW + safezoneX";
	y = "0.522 * safezoneH + safezoneY";
	w = "0.0721875 * safezoneW";
	h = "0.044 * safezoneH";
};
class CancelButton: RscButton
{
	idc = 1601;
    moving = 1;
	text = "$STR_GHOST_Insertion_Cancel"; //--- ToDo: Localize;
    action = "closeDialog 0";
	x = "0.432969 * safezoneW + safezoneX";
	y = "0.522 * safezoneH + safezoneY";
	w = "0.0721875 * safezoneW";
	h = "0.044 * safezoneH";
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
    };
};
