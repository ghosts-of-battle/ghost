class CfgWeapons {
    class VestItem;
    class V_PlateCarrier1_rgr;

    class GVAR(SOF_V_AVSCarrier_Lite_rgr): V_PlateCarrier1_rgr {
        author = "OokamiJamie";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Light Carrier Vest (Green)";
        picture = QPATHTOF(data\v_carrieravs_ico_ca.paa);
        hiddenSelections[] = {
            "camo",
            "camo1"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_rgr_co.paa),
            ""
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\v_carrieravs.rvmat),
            ""
        };
        model = "\SOFGear\sof_characters\Vests\V_CarrierAVS_Lite.p3d";
        class ItemInfo: VestItem {
            uniformModel = "\SOFGear\sof_characters\Vests\V_CarrierAVS_Lite.p3d";
            hiddenSelections[] = {
                "camo",
                "camo1"
            };
            hiddenSelectionsTextures[] = {
                QPATHTOF(data\v_carrieravs_rgr_co.paa),
                ""
            };
            containerClass = "Supply110";
            mass = 60;
            class HitpointsProtectionInfo {
                class Chest {
                    hitpointName = "HitChest";
                    armor = 14;
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 14;
                    passThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 14;
                    passThrough = 0.1;
                };
            };
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_rgr_noflag): GVAR(SOF_V_AVSCarrier_Lite_rgr) {
        author = "OokamiJamie";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Light Carrier Vest (Green, No Flag)";
        picture = QPATHTOF(data\v_carrieravs_ico_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_rgr_co.paa),
            ""
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_mcam): GVAR(SOF_V_AVSCarrier_Lite_rgr) {
        author = "OokamiJamie";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Light Carrier Vest (MTP)";
        picture = QPATHTOF(data\v_carrieravs_ico_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_mcam_co.paa),
            ""
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_tna): GVAR(SOF_V_AVSCarrier_Lite_rgr) {
        author = "OokamiJamie";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Light Carrier Vest (Tropic)";
        picture = QPATHTOF(data\v_carrieravs_ico_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_tna_co.paa),
            ""
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_wdl): GVAR(SOF_V_AVSCarrier_Lite_rgr) {
        author = "OokamiJamie";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Ghost] Light Carrier Vest (Woodland)";
        picture = QPATHTOF(data\v_carrieravs_ico_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_wdl_co.paa),
            ""
        };
    };
    class GVAR(SOF_V_AVSCarrier_Lite_ocp): GVAR(SOF_V_AVSCarrier_Lite_rgr) {
        displayName = "[Ghost] Light Carrier Vest (OCP)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\v_carrieravs_ocp_co.paa),
            ""
        };
    };
};
