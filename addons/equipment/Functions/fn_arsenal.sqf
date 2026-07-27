#include "\z\ghost\addons\equipment\script_component.hpp"
/*
Arguments:
0: items only misc items <ARRAY of STRING>
1: tooltip <STRING> (Optional)
2: picture path <STRING> (Optional)
3: override a specific button (0-9) <NUMBER> (Optional)

Return Value:
successful: number of the slot; error: -1 <NUMBER>

Example:

call lxiv_fnc_arsenal;
Public: Yes

[
    ["ACE_Flashlight_XL50"],
    "better flashlight",
    "\path\to\a\pictureWithAFlashlight.paa",
    _buttonId
] call ace_arsenal_fnc_addRightPanelButton
*/

private _radios = uiNamespace getVariable QGVAR(allRadios);
if (isNil "_radios") then {
    _radios = "(getNumber(_x >> 'acre_isRadio')) == 1" configClasses (configFile >> "CfgWeapons") apply {configName _x};
    uiNamespace setVariable [QGVAR(allRadios), _radios];
};

[
    _radios,
    "Radios",
    "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\radio_ca.paa"
] call ACEFUNC(arsenal,addRightPanelButton);


[
    ["ACE_ChalkYellow","ACE_ChalkWhite","ACE_ChalkRed","ACE_ChalkGreen","ACE_ChalkBlue","ACE_ChalkBlack","VS17_Small_Panel_Item","VS17_Large_Panel_Item","ghost_vs17_vs17","ACE_SpraypaintYellow","ACE_SpraypaintWhite","ace_marker_flags_black","ace_marker_flags_blue","ace_marker_flags_green","ace_marker_flags_orange","ace_marker_flags_purple","ace_marker_flags_red","ace_marker_flags_white","ace_marker_flags_yellow","ACE_IR_Strobe_Item","ACE_Chemlight_Shield","KNB_PanelGreen","KNB_PanelRed","KNB_PanelYellow","ACE_SpraypaintBlack","ACE_SpraypaintBlue","ACE_SpraypaintGreen","ACE_SpraypaintRed","taro_vs17_panel"],
    "Marking",
    "\z\ace\addons\arsenal\data\iconCustom.paa"
] call ACEFUNC(arsenal,addRightPanelButton);

[
    ["SwitchBlade_600_Tube_Woodland","SwitchBlade_300_Tube_Woodland","SwitchBlade_300_Tube_Desert","SwitchBlade_600_Tube_Desert","GX_DEPLOYABLE_MAGAZINE_UAV_06","GX_DEPLOYABLE_MAGAZINE_UAV_06_MEDICAL","GX_DEPLOYABLE_MAGAZINE_UAV_02_lxWS","GX_DEPLOYABLE_MAGAZINE_UAV_01","GX_DEPLOYABLE_MAGAZINE_BLACKHORNET_UAV","GX_DEPLOYABLE_MAGAZINE_UAV_06_ANTIMINE","Rev_Pelican","Rev_Bustard","Rev_darter","Rev_Demine","Rev_Pelter","Rev_Roller","Rev_Designator","Rev_UAV_IED","GX_DEPLOYABLE_MAGAZINE_UGV_02_SCIENCE","GX_DEPLOYABLE_MAGAZINE_UGV_02_DEMINING","GX_DEPLOYABLE_MAGAZINE_HONEYBADGER_UGV_AT_BLACK","GX_DEPLOYABLE_MAGAZINE_HONEYBADGER_UGV_AT_DESERT","GX_DEPLOYABLE_MAGAZINE_HONEYBADGER_UGV_AT_GREEN","GX_DEPLOYABLE_MAGAZINE_HONEYBADGER_UGV_AT_HEX","GX_DEPLOYABLE_MAGAZINE_STATIC_DESIGNATOR_DESERT","GX_DEPLOYABLE_MAGAZINE_STATIC_DESIGNATOR_WOODLAND","GX_DEPLOYABLE_MAGAZINE_RQ11B_UAV","GX_UAVBattery","ACE_UAVBattery","GX_DEPLOYABLE_MAGAZINE_HMG_01","GX_DEPLOYABLE_MAGAZINE_GMG_01","GX_DEPLOYABLE_MAGAZINE_UAV_02_IED_lxWS"],
    "Drones",
    "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\transport_ca.paa"
] call ACEFUNC(arsenal,addRightPanelButton);

[
    ["ACE_ATragMX","ALIVE_Tablet","ItemcTabHCam","ACE_HuntIR_monitor","ACE_Kestrel4500","ItemMicroDAGRMisc","ACE_microDAGR","ItemcTabMisc","ItemAndroidMisc"],
    "Tech",
    "\a3\ui_f\data\igui\cfg\simpletasks\types\Use_ca.paa"
] call ACEFUNC(arsenal,addRightPanelButton);

