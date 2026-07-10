class XtdGearModels {
    class CfgWeapons {
        class ghost_vest_selected {
            label = "Vest";
            options[] = {"camo","type"};
            class camo {
                alwaysSelectable = 1;
                values[] = {"Multicam", "Multicam_Snow", "Multicam_Woodland", "US_OCP", "GB_MTP"};
                class Multicam {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Multicam_Snow {
                    label = "MCS";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Multicam_Woodland {
                    label = "MCW";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class US_OCP {
                    label = "OCP";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class GB_MTP {
                    label = "MTP";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
            };
            class type {
                alwaysSelectable = 1;
                values[] = {"chestrig", "jca_tactical", "jca_holster", "rangemaster", "carrier_gl", "jca_crew", "jca_command", "carrier_lite", "carrier_spec", "carrier_rig", "jca_recon", "jca_cqb", "carrier_lite_nobelt", "jca_compact"};
                class chestrig { label = "Chest Rig"; };
                class jca_tactical { label = "JCA Tactical"; };
                class jca_holster { label = "JCA Holster"; };
                class rangemaster { label = "Rangemaster"; };
                class carrier_gl { label = "Carrier GL"; };
                class jca_crew { label = "JCA Crew"; };
                class jca_command { label = "JCA Command"; };
                class carrier_lite { label = "Carrier Lite"; };
                class carrier_spec { label = "Carrier Special"; };
                class carrier_rig { label = "Carrier Rig"; };
                class jca_recon { label = "JCA Recon"; };
                class jca_cqb { label = "JCA CQB"; };
                class carrier_lite_nobelt { label = "Carrier Lite NB"; };
                class jca_compact { label = "JCA Compact"; };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class GVAR(V_CarrierSpec_Multicam) {
            model = "ghost_vest_selected";
            camo = "Multicam";
            type = "carrier_spec";
        };
        class GVAR(V_CarrierGL_Multicam) {
            model = "ghost_vest_selected";
            camo = "Multicam";
            type = "carrier_gl";
        };
        class GVAR(V_CarrierLite_Multicam) {
            model = "ghost_vest_selected";
            camo = "Multicam";
            type = "carrier_lite";
        };
        class GVAR(V_CarrierRig_Multicam) {
            model = "ghost_vest_selected";
            camo = "Multicam";
            type = "carrier_rig";
        };
        class GVAR(V_CarrierLiteNoBelt_Multicam) {
            model = "ghost_vest_selected";
            camo = "Multicam";
            type = "carrier_lite_nobelt";
        };
        class GVAR(V_Rangemaster_Multicam) {
            model = "ghost_vest_selected";
            camo = "Multicam";
            type = "rangemaster";
        };
        class GVAR(V_ChestRig_Multicam) {
            model = "ghost_vest_selected";
            camo = "Multicam";
            type = "chestrig";
        };
        class GVAR(V_JCACompact_Multicam) {
            model = "ghost_vest_selected";
            camo = "Multicam";
            type = "jca_compact";
        };
        class GVAR(V_JCACQB_Multicam) {
            model = "ghost_vest_selected";
            camo = "Multicam";
            type = "jca_cqb";
        };
        class GVAR(V_JCACrew_Multicam) {
            model = "ghost_vest_selected";
            camo = "Multicam";
            type = "jca_crew";
        };
        class GVAR(V_JCACommand_Multicam) {
            model = "ghost_vest_selected";
            camo = "Multicam";
            type = "jca_command";
        };
        class GVAR(V_JCAHolster_Multicam) {
            model = "ghost_vest_selected";
            camo = "Multicam";
            type = "jca_holster";
        };
        class GVAR(V_JCARecon_Multicam) {
            model = "ghost_vest_selected";
            camo = "Multicam";
            type = "jca_recon";
        };
        class GVAR(V_JCATactical_Multicam) {
            model = "ghost_vest_selected";
            camo = "Multicam";
            type = "jca_tactical";
        };
        class GVAR(V_CarrierSpec_Multicam_Snow) {
            model = "ghost_vest_selected";
            camo = "Multicam_Snow";
            type = "carrier_spec";
        };
        class GVAR(V_CarrierGL_Multicam_Snow) {
            model = "ghost_vest_selected";
            camo = "Multicam_Snow";
            type = "carrier_gl";
        };
        class GVAR(V_CarrierLite_Multicam_Snow) {
            model = "ghost_vest_selected";
            camo = "Multicam_Snow";
            type = "carrier_lite";
        };
        class GVAR(V_CarrierRig_Multicam_Snow) {
            model = "ghost_vest_selected";
            camo = "Multicam_Snow";
            type = "carrier_rig";
        };
        class GVAR(V_CarrierLiteNoBelt_Multicam_Snow) {
            model = "ghost_vest_selected";
            camo = "Multicam_Snow";
            type = "carrier_lite_nobelt";
        };
        class GVAR(V_Rangemaster_Multicam_Snow) {
            model = "ghost_vest_selected";
            camo = "Multicam_Snow";
            type = "rangemaster";
        };
        class GVAR(V_ChestRig_Multicam_Snow) {
            model = "ghost_vest_selected";
            camo = "Multicam_Snow";
            type = "chestrig";
        };
        class GVAR(V_JCACompact_Multicam_Snow) {
            model = "ghost_vest_selected";
            camo = "Multicam_Snow";
            type = "jca_compact";
        };
        class GVAR(V_JCACQB_Multicam_Snow) {
            model = "ghost_vest_selected";
            camo = "Multicam_Snow";
            type = "jca_cqb";
        };
        class GVAR(V_JCACrew_Multicam_Snow) {
            model = "ghost_vest_selected";
            camo = "Multicam_Snow";
            type = "jca_crew";
        };
        class GVAR(V_JCACommand_Multicam_Snow) {
            model = "ghost_vest_selected";
            camo = "Multicam_Snow";
            type = "jca_command";
        };
        class GVAR(V_JCAHolster_Multicam_Snow) {
            model = "ghost_vest_selected";
            camo = "Multicam_Snow";
            type = "jca_holster";
        };
        class GVAR(V_JCARecon_Multicam_Snow) {
            model = "ghost_vest_selected";
            camo = "Multicam_Snow";
            type = "jca_recon";
        };
        class GVAR(V_JCATactical_Multicam_Snow) {
            model = "ghost_vest_selected";
            camo = "Multicam_Snow";
            type = "jca_tactical";
        };
        class GVAR(V_CarrierSpec_Multicam_Woodland) {
            model = "ghost_vest_selected";
            camo = "Multicam_Woodland";
            type = "carrier_spec";
        };
        class GVAR(V_CarrierGL_Multicam_Woodland) {
            model = "ghost_vest_selected";
            camo = "Multicam_Woodland";
            type = "carrier_gl";
        };
        class GVAR(V_CarrierLite_Multicam_Woodland) {
            model = "ghost_vest_selected";
            camo = "Multicam_Woodland";
            type = "carrier_lite";
        };
        class GVAR(V_CarrierRig_Multicam_Woodland) {
            model = "ghost_vest_selected";
            camo = "Multicam_Woodland";
            type = "carrier_rig";
        };
        class GVAR(V_CarrierLiteNoBelt_Multicam_Woodland) {
            model = "ghost_vest_selected";
            camo = "Multicam_Woodland";
            type = "carrier_lite_nobelt";
        };
        class GVAR(V_Rangemaster_Multicam_Woodland) {
            model = "ghost_vest_selected";
            camo = "Multicam_Woodland";
            type = "rangemaster";
        };
        class GVAR(V_ChestRig_Multicam_Woodland) {
            model = "ghost_vest_selected";
            camo = "Multicam_Woodland";
            type = "chestrig";
        };
        class GVAR(V_JCACompact_Multicam_Woodland) {
            model = "ghost_vest_selected";
            camo = "Multicam_Woodland";
            type = "jca_compact";
        };
        class GVAR(V_JCACQB_Multicam_Woodland) {
            model = "ghost_vest_selected";
            camo = "Multicam_Woodland";
            type = "jca_cqb";
        };
        class GVAR(V_JCACrew_Multicam_Woodland) {
            model = "ghost_vest_selected";
            camo = "Multicam_Woodland";
            type = "jca_crew";
        };
        class GVAR(V_JCACommand_Multicam_Woodland) {
            model = "ghost_vest_selected";
            camo = "Multicam_Woodland";
            type = "jca_command";
        };
        class GVAR(V_JCAHolster_Multicam_Woodland) {
            model = "ghost_vest_selected";
            camo = "Multicam_Woodland";
            type = "jca_holster";
        };
        class GVAR(V_JCARecon_Multicam_Woodland) {
            model = "ghost_vest_selected";
            camo = "Multicam_Woodland";
            type = "jca_recon";
        };
        class GVAR(V_JCATactical_Multicam_Woodland) {
            model = "ghost_vest_selected";
            camo = "Multicam_Woodland";
            type = "jca_tactical";
        };
        class GVAR(V_CarrierSpec_US_OCP) {
            model = "ghost_vest_selected";
            camo = "US_OCP";
            type = "carrier_spec";
        };
        class GVAR(V_CarrierGL_US_OCP) {
            model = "ghost_vest_selected";
            camo = "US_OCP";
            type = "carrier_gl";
        };
        class GVAR(V_CarrierLite_US_OCP) {
            model = "ghost_vest_selected";
            camo = "US_OCP";
            type = "carrier_lite";
        };
        class GVAR(V_CarrierRig_US_OCP) {
            model = "ghost_vest_selected";
            camo = "US_OCP";
            type = "carrier_rig";
        };
        class GVAR(V_CarrierLiteNoBelt_US_OCP) {
            model = "ghost_vest_selected";
            camo = "US_OCP";
            type = "carrier_lite_nobelt";
        };
        class GVAR(V_Rangemaster_US_OCP) {
            model = "ghost_vest_selected";
            camo = "US_OCP";
            type = "rangemaster";
        };
        class GVAR(V_ChestRig_US_OCP) {
            model = "ghost_vest_selected";
            camo = "US_OCP";
            type = "chestrig";
        };
        class GVAR(V_JCACompact_US_OCP) {
            model = "ghost_vest_selected";
            camo = "US_OCP";
            type = "jca_compact";
        };
        class GVAR(V_JCACQB_US_OCP) {
            model = "ghost_vest_selected";
            camo = "US_OCP";
            type = "jca_cqb";
        };
        class GVAR(V_JCACrew_US_OCP) {
            model = "ghost_vest_selected";
            camo = "US_OCP";
            type = "jca_crew";
        };
        class GVAR(V_JCACommand_US_OCP) {
            model = "ghost_vest_selected";
            camo = "US_OCP";
            type = "jca_command";
        };
        class GVAR(V_JCAHolster_US_OCP) {
            model = "ghost_vest_selected";
            camo = "US_OCP";
            type = "jca_holster";
        };
        class GVAR(V_JCARecon_US_OCP) {
            model = "ghost_vest_selected";
            camo = "US_OCP";
            type = "jca_recon";
        };
        class GVAR(V_JCATactical_US_OCP) {
            model = "ghost_vest_selected";
            camo = "US_OCP";
            type = "jca_tactical";
        };
        class GVAR(V_JCACompact_GB_MTP) {
            model = "ghost_vest_selected";
            camo = "GB_MTP";
            type = "jca_compact";
        };
        class GVAR(V_JCACQB_GB_MTP) {
            model = "ghost_vest_selected";
            camo = "GB_MTP";
            type = "jca_cqb";
        };
        class GVAR(V_JCACrew_GB_MTP) {
            model = "ghost_vest_selected";
            camo = "GB_MTP";
            type = "jca_crew";
        };
        class GVAR(V_JCACommand_GB_MTP) {
            model = "ghost_vest_selected";
            camo = "GB_MTP";
            type = "jca_command";
        };
        class GVAR(V_JCAHolster_GB_MTP) {
            model = "ghost_vest_selected";
            camo = "GB_MTP";
            type = "jca_holster";
        };
        class GVAR(V_JCARecon_GB_MTP) {
            model = "ghost_vest_selected";
            camo = "GB_MTP";
            type = "jca_recon";
        };
        class GVAR(V_JCATactical_GB_MTP) {
            model = "ghost_vest_selected";
            camo = "GB_MTP";
            type = "jca_tactical";
        };
    };
};
