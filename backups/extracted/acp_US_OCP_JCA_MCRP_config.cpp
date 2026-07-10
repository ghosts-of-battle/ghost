class CfgPatches {
    class acp_US_OCP_JCA_MCRP {
        name = "US_OCP_JCA_MCRP";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.14;
        requiredAddons[] = {"acp_US_OCP_contact", "Vests_F_JCA_MCRP"};
        skipWhenMissingDependencies = 1;
        author = "Seb";
        version = "3.3.3.0";
        versionStr = "3.3.3.0";
        versionAr[] = {3, 3, 3, 0};
    };
};
class CfgWeapons {
    class JCA_MCRP_V_CarrierRigKBT_01_compact_base_F;
    class JCA_MCRP_V_CarrierRigKBT_01_cqb_base_F;
    class JCA_MCRP_V_CarrierRigKBT_01_crew_base_F;
    class JCA_MCRP_V_CarrierRigKBT_01_holster_base_F;
    class JCA_MCRP_V_CarrierRigKBT_01_recon_base_F;
    class JCA_MCRP_V_CarrierRigKBT_01_tactical_base_F;
    class acp_US_OCP_JCA_MCRP_JCA_MCRP_V_CarrierRigKBT_01_compact_US_OCP_F: JCA_MCRP_V_CarrierRigKBT_01_compact_base_F {
        author = "Seb";
        displayName = "[US OCP] Modular Carrier JCA Compact";
        hiddenSelectionsTextures[] = {"\z\acp\addons\US_OCP_contact\data\CarrierRigKBT_01_US_OCP_CO.paa"};
        picture = "\z\acp\addons\US_OCP_JCA_MCRP\data\UI\Icon_CarrierRigKBT_01_compact_US_OCP_F_CA.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
    };
    class acp_US_OCP_JCA_MCRP_JCA_MCRP_V_CarrierRigKBT_01_cqb_US_OCP_F: JCA_MCRP_V_CarrierRigKBT_01_cqb_base_F {
        author = "Seb";
        displayName = "[US OCP] Modular Carrier JCA CQB";
        hiddenSelectionsTextures[] = {"\z\acp\addons\US_OCP_contact\data\CarrierRigKBT_01_US_OCP_CO.paa"};
        picture = "\z\acp\addons\US_OCP_JCA_MCRP\data\UI\Icon_CarrierRigKBT_01_cqb_US_OCP_F_CA.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
    };
    class acp_US_OCP_JCA_MCRP_JCA_MCRP_V_CarrierRigKBT_01_crew_US_OCP_F: JCA_MCRP_V_CarrierRigKBT_01_crew_base_F {
        author = "Seb";
        displayName = "[US OCP] Modular Carrier JCA Crew";
        hiddenSelectionsTextures[] = {"\z\acp\addons\US_OCP_contact\data\CarrierRigKBT_01_US_OCP_CO.paa"};
        picture = "\z\acp\addons\US_OCP_JCA_MCRP\data\UI\Icon_CarrierRigKBT_01_crew_US_OCP_F_CA.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
    };
    class acp_US_OCP_JCA_MCRP_JCA_MCRP_V_CarrierRigKBT_01_holster_US_OCP_F: JCA_MCRP_V_CarrierRigKBT_01_holster_base_F {
        author = "Seb";
        displayName = "[US OCP] Modular Carrier JCA Holster";
        hiddenSelectionsTextures[] = {"\z\acp\addons\US_OCP_contact\data\CarrierRigKBT_01_US_OCP_CO.paa"};
        picture = "\z\acp\addons\US_OCP_JCA_MCRP\data\UI\Icon_CarrierRigKBT_01_holster_US_OCP_F_CA.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
    };
    class acp_US_OCP_JCA_MCRP_JCA_MCRP_V_CarrierRigKBT_01_recon_US_OCP_F: JCA_MCRP_V_CarrierRigKBT_01_recon_base_F {
        author = "Seb";
        displayName = "[US OCP] Modular Carrier JCA Recon";
        hiddenSelectionsTextures[] = {"\z\acp\addons\US_OCP_contact\data\CarrierRigKBT_01_US_OCP_CO.paa"};
        picture = "\z\acp\addons\US_OCP_JCA_MCRP\data\UI\Icon_CarrierRigKBT_01_recon_US_OCP_F_CA.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
    };
    class acp_US_OCP_JCA_MCRP_JCA_MCRP_V_CarrierRigKBT_01_tactical_US_OCP_F: JCA_MCRP_V_CarrierRigKBT_01_tactical_base_F {
        author = "Seb";
        displayName = "[US OCP] Modular Carrier JCA Tactical";
        hiddenSelectionsTextures[] = {"\z\acp\addons\US_OCP_contact\data\CarrierRigKBT_01_US_OCP_CO.paa"};
        picture = "\z\acp\addons\US_OCP_JCA_MCRP\data\UI\Icon_CarrierRigKBT_01_tactical_US_OCP_F_CA.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
    };
};
class CfgVehicles {};
class CfgGlasses {};
