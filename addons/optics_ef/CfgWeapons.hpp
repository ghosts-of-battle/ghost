class CfgWeapons {
    class InventoryOpticsItem_Base_F;
    // EF MBS-remote optics (base + colour variants) from the Expeditionary Force
    // characters mod (A3_EFA_characters_f); we inherit their physical scope model
    // and graft ACE's XM157 fire-control system over the top.
    class ef_optic_mbs_remote;
    class ef_optic_mbs_remote_coy;
    class ef_optic_mbs_remote_khk;
    class ef_optic_mbs_remote_sand;

    class GVAR(optic_mbs_remote_157): ef_optic_mbs_remote {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "[Ghost] MBS Remote XM157";
        // --- ACE XM157 fire-control system grafted onto the EF MBS-remote body ---
        inertia = 0.3;
        ACE_ScopeHeightAboveRail = 5.52874;
        class CBA_ScriptedOptic {
            bodyTexture = "\z\ace\addons\xm157\data\ace_vector_body_co.paa";
            bodyTextureSize = 1;
            hideMagnification = 1;
            disableTilt = 0;
        };
        weaponInfoType = "ace_xm157_info";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 14;
            optics = 1;
            modelOptics = "\x\cba\addons\optics\cba_optic_big_100.p3d";
            class OpticsModes {
                class lpvo {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                    opticsZoomMin = "8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomMax = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomInit = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
            };
        };
    };
    class GVAR(optic_mbs_remote_157_coy): ef_optic_mbs_remote_coy {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "[Ghost] MBS Remote XM157 (Coyote)";
        // --- ACE XM157 fire-control system grafted onto the EF MBS-remote body ---
        inertia = 0.3;
        ACE_ScopeHeightAboveRail = 5.52874;
        class CBA_ScriptedOptic {
            bodyTexture = "\z\ace\addons\xm157\data\ace_vector_body_co.paa";
            bodyTextureSize = 1;
            hideMagnification = 1;
            disableTilt = 0;
        };
        weaponInfoType = "ace_xm157_info";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 14;
            optics = 1;
            modelOptics = "\x\cba\addons\optics\cba_optic_big_100.p3d";
            class OpticsModes {
                class lpvo {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                    opticsZoomMin = "8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomMax = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomInit = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
            };
        };
    };
    class GVAR(optic_mbs_remote_157_khk): ef_optic_mbs_remote_khk {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "[Ghost] MBS Remote XM157 (Khaki)";
        // --- ACE XM157 fire-control system grafted onto the EF MBS-remote body ---
        inertia = 0.3;
        ACE_ScopeHeightAboveRail = 5.52874;
        class CBA_ScriptedOptic {
            bodyTexture = "\z\ace\addons\xm157\data\ace_vector_body_co.paa";
            bodyTextureSize = 1;
            hideMagnification = 1;
            disableTilt = 0;
        };
        weaponInfoType = "ace_xm157_info";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 14;
            optics = 1;
            modelOptics = "\x\cba\addons\optics\cba_optic_big_100.p3d";
            class OpticsModes {
                class lpvo {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                    opticsZoomMin = "8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomMax = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomInit = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
            };
        };
    };
    class GVAR(optic_mbs_remote_157_sand): ef_optic_mbs_remote_sand {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "[Ghost] MBS Remote XM157 (Sand)";
        // --- ACE XM157 fire-control system grafted onto the EF MBS-remote body ---
        inertia = 0.3;
        ACE_ScopeHeightAboveRail = 5.52874;
        class CBA_ScriptedOptic {
            bodyTexture = "\z\ace\addons\xm157\data\ace_vector_body_co.paa";
            bodyTextureSize = 1;
            hideMagnification = 1;
            disableTilt = 0;
        };
        weaponInfoType = "ace_xm157_info";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 14;
            optics = 1;
            modelOptics = "\x\cba\addons\optics\cba_optic_big_100.p3d";
            class OpticsModes {
                class lpvo {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                    opticsZoomMin = "8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomMax = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomInit = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
            };
        };
    };
};
