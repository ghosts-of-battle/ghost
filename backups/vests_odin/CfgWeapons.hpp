class CfgWeapons {
    // Odin Rig (V_CarrierRigBW) ported from Ample Camo Pack (author: Jamie, Aegis Team).
    // ODOL models are self-contained (skeleton baked); baked ACP materials are overridden
    // per selection via hiddenSelectionsMaterials -> local data\ rvmats, so ACP is not required.
    class ItemInfo; // defined for real in ghost_main (see its CfgWeapons.hpp)
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier2_rgr;
    class V_PlateCarrierGL_rgr;

    class GVAR(V_OdinRig_base): V_PlateCarrier1_rgr {
        author = "Jamie (Aegis Team)";
        scope = 0;
        model = QPATHTOF(data\v_carrierrigbw_f.p3d);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\carrierrigbw.rvmat)};
        class ItemInfo: ItemInfo {
            uniformModel = QPATHTOF(data\v_carrierrigbw_f.p3d);
            hiddenSelections[] = {"camo"};
            hiddenSelectionsMaterials[] = {QPATHTOF(data\carrierrigbw.rvmat)};
        };
    };

    class GVAR(V_OdinRig_CQB_base): V_PlateCarrierGL_rgr {
        author = "Jamie (Aegis Team)";
        scope = 0;
        model = QPATHTOF(data\v_carrierrigbw_cqb_f.p3d);
        hiddenSelections[] = {"camo", "camo1", "camo2"};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\carrierrigbw.rvmat), QPATHTOF(data\carrierrigbw_pouches.rvmat), QPATHTOF(data\carrierrigbw_gl.rvmat)};
        class ItemInfo: ItemInfo {
            uniformModel = QPATHTOF(data\v_carrierrigbw_cqb_f.p3d);
            hiddenSelections[] = {"camo", "camo1", "camo2"};
            hiddenSelectionsMaterials[] = {QPATHTOF(data\carrierrigbw.rvmat), QPATHTOF(data\carrierrigbw_pouches.rvmat), QPATHTOF(data\carrierrigbw_gl.rvmat)};
        };
    };

    class GVAR(V_OdinRig_GL_base): V_PlateCarrierGL_rgr {
        author = "Jamie (Aegis Team)";
        scope = 0;
        model = QPATHTOF(data\v_carrierrigbw_gl_f.p3d);
        hiddenSelections[] = {"camo", "camo1", "camo2"};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\carrierrigbw.rvmat), QPATHTOF(data\carrierrigbw_pouches.rvmat), QPATHTOF(data\carrierrigbw_gl.rvmat)};
        class ItemInfo: ItemInfo {
            uniformModel = QPATHTOF(data\v_carrierrigbw_gl_f.p3d);
            hiddenSelections[] = {"camo", "camo1", "camo2"};
            hiddenSelectionsMaterials[] = {QPATHTOF(data\carrierrigbw.rvmat), QPATHTOF(data\carrierrigbw_pouches.rvmat), QPATHTOF(data\carrierrigbw_gl.rvmat)};
        };
    };

    class GVAR(V_OdinRig_Lite_base): V_PlateCarrier2_rgr {
        author = "Jamie (Aegis Team)";
        scope = 0;
        model = QPATHTOF(data\v_carrierrigbw_lite_f.p3d);
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\carrierrigbw.rvmat), QPATHTOF(data\carrierrigbw_pouches.rvmat)};
        class ItemInfo: ItemInfo {
            uniformModel = QPATHTOF(data\v_carrierrigbw_lite_f.p3d);
            hiddenSelections[] = {"camo", "camo1"};
            hiddenSelectionsMaterials[] = {QPATHTOF(data\carrierrigbw.rvmat), QPATHTOF(data\carrierrigbw_pouches.rvmat)};
        };
    };

    class GVAR(V_OdinRig_ocp): GVAR(V_OdinRig_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig (OCP)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_ocp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_ocp_co.paa)};
    };

    class GVAR(V_OdinRig_mtp): GVAR(V_OdinRig_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig (MTP)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_mtp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mtp_co.paa)};
    };

    class GVAR(V_OdinRig_mcam): GVAR(V_OdinRig_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig (Multicam)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_mcam.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mcam_co.paa)};
    };

    class GVAR(V_OdinRig_mcam_wdl): GVAR(V_OdinRig_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig (Multicam Woodland)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_mcam_wdl.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mcam_wdl_co.paa)};
    };

    class GVAR(V_OdinRig_mcam_snow): GVAR(V_OdinRig_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig (Multicam Snow)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_mcam_snow.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mcam_snow_co.paa)};
    };

    class GVAR(V_OdinRig_CQB_ocp): GVAR(V_OdinRig_CQB_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig CQB (OCP)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_cqb_ocp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_ocp_co.paa), QPATHTOF(data\carrierrigbw_pouches_ocp_co.paa), QPATHTOF(data\carrierrigbw_gl_ocp_co.paa)};
    };

    class GVAR(V_OdinRig_CQB_mtp): GVAR(V_OdinRig_CQB_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig CQB (MTP)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_cqb_mtp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mtp_co.paa), QPATHTOF(data\carrierrigbw_pouches_mtp_co.paa), QPATHTOF(data\carrierrigbw_gl_mtp_co.paa)};
    };

    class GVAR(V_OdinRig_CQB_mcam): GVAR(V_OdinRig_CQB_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig CQB (Multicam)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_cqb_mcam.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mcam_co.paa), QPATHTOF(data\carrierrigbw_pouches_mcam_co.paa), QPATHTOF(data\carrierrigbw_gl_mcam_co.paa)};
    };

    class GVAR(V_OdinRig_CQB_mcam_wdl): GVAR(V_OdinRig_CQB_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig CQB (Multicam Woodland)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_cqb_mcam_wdl.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mcam_wdl_co.paa), QPATHTOF(data\carrierrigbw_pouches_mcam_wdl_co.paa), QPATHTOF(data\carrierrigbw_gl_mcam_wdl_co.paa)};
    };

    class GVAR(V_OdinRig_CQB_mcam_snow): GVAR(V_OdinRig_CQB_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig CQB (Multicam Snow)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_cqb_mcam_snow.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mcam_snow_co.paa), QPATHTOF(data\carrierrigbw_pouches_mcam_snow_co.paa), QPATHTOF(data\carrierrigbw_gl_mcam_snow_co.paa)};
    };

    class GVAR(V_OdinRig_GL_ocp): GVAR(V_OdinRig_GL_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig GL (OCP)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_gl_ocp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_ocp_co.paa), QPATHTOF(data\carrierrigbw_pouches_ocp_co.paa), QPATHTOF(data\carrierrigbw_gl_ocp_co.paa)};
    };

    class GVAR(V_OdinRig_GL_mtp): GVAR(V_OdinRig_GL_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig GL (MTP)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_gl_mtp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mtp_co.paa), QPATHTOF(data\carrierrigbw_pouches_mtp_co.paa), QPATHTOF(data\carrierrigbw_gl_mtp_co.paa)};
    };

    class GVAR(V_OdinRig_GL_mcam): GVAR(V_OdinRig_GL_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig GL (Multicam)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_gl_mcam.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mcam_co.paa), QPATHTOF(data\carrierrigbw_pouches_mcam_co.paa), QPATHTOF(data\carrierrigbw_gl_mcam_co.paa)};
    };

    class GVAR(V_OdinRig_GL_mcam_wdl): GVAR(V_OdinRig_GL_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig GL (Multicam Woodland)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_gl_mcam_wdl.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mcam_wdl_co.paa), QPATHTOF(data\carrierrigbw_pouches_mcam_wdl_co.paa), QPATHTOF(data\carrierrigbw_gl_mcam_wdl_co.paa)};
    };

    class GVAR(V_OdinRig_GL_mcam_snow): GVAR(V_OdinRig_GL_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig GL (Multicam Snow)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_gl_mcam_snow.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mcam_snow_co.paa), QPATHTOF(data\carrierrigbw_pouches_mcam_snow_co.paa), QPATHTOF(data\carrierrigbw_gl_mcam_snow_co.paa)};
    };

    class GVAR(V_OdinRig_Lite_ocp): GVAR(V_OdinRig_Lite_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig Lite (OCP)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_lite_ocp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_ocp_co.paa), QPATHTOF(data\carrierrigbw_pouches_ocp_co.paa)};
    };

    class GVAR(V_OdinRig_Lite_mtp): GVAR(V_OdinRig_Lite_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig Lite (MTP)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_lite_mtp.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mtp_co.paa), QPATHTOF(data\carrierrigbw_pouches_mtp_co.paa)};
    };

    class GVAR(V_OdinRig_Lite_mcam): GVAR(V_OdinRig_Lite_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig Lite (Multicam)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_lite_mcam.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mcam_co.paa), QPATHTOF(data\carrierrigbw_pouches_mcam_co.paa)};
    };

    class GVAR(V_OdinRig_Lite_mcam_wdl): GVAR(V_OdinRig_Lite_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig Lite (Multicam Woodland)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_lite_mcam_wdl.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mcam_wdl_co.paa), QPATHTOF(data\carrierrigbw_pouches_mcam_wdl_co.paa)};
    };

    class GVAR(V_OdinRig_Lite_mcam_snow): GVAR(V_OdinRig_Lite_base) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ghost] Odin Rig Lite (Multicam Snow)";
        picture = QPATHTOF(data\ui\icon_v_carrierrigbw_lite_mcam_snow.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\carrierrigbw_mcam_snow_co.paa), QPATHTOF(data\carrierrigbw_pouches_mcam_snow_co.paa)};
    };

};
