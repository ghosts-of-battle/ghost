class CfgVehicles {    
        // Rebreather
    class Vest_V_RebreatherB;
    class GVAR(Item_vest_rebreather): Vest_V_RebreatherB {
        scope = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "[Ghost] Rebreather";
        class TransportItems {
            class GVAR(rebreather) {
                name = QGVAR(rebreather);
                count = 1;
            };
        };
    };
    class Item_U_B_Wetsuit;
    class GVAR(Item_Wetsuit): Item_U_B_Wetsuit {
        author = QAUTHOR;
        displayName = "[Ghost] Wetsuit";
        class TransportItems {
            class GVAR(Wetsuit) {
                name = QGVAR(Wetsuit);
                count = 1;
            };
        };
    };
    class ACE_Item_Vector;
    class GVAR(Item_Vector_Designator): ACE_Item_Vector {
        author = "NemesisRE";
        displayName = "[Ghost] ACE Vector Designator (NVG/TI)";
        class TransportItems {
            class GVAR(Vector_Designator) {
                name=QGVAR(Vector_Designator);
                count=1;
            };
        };
    };
    class GVAR(Item_Vector_Designator_NVG): GVAR(Item_Vector_Designator) {
        displayName = "[Ghost] ACE Vector Designator (NVG)";
        class TransportItems {
            class GVAR(Vector_Designator_NVG) {
                name=QGVAR(Vector_Designator_NVG);
                count=1;
            };
        };
    };
    class Item_optic_Nightstalker;
    class GVAR(Item_optic_Nightstalker): Item_optic_Nightstalker {
        displayName="[Ghost] Nightstalker";
        author="NemesisRE";
        vehicleClass="WeaponAccessories";
        class TransportItems {
            class GVAR(optic_Nightstalker) {
                name=QGVAR(optic_Nightstalker);
                count=1;
            };
        };
    };
    class Item_optic_AMS;
    class GVAR(Item_optic_AMS): Item_optic_AMS {
        displayName="[Ghost] AMS (Black)";
        author="NemesisRE";
        class TransportItems {
            class GVAR(optic_AMS) {
                name=QGVAR(optic_AMS);
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMS_khk): GVAR(Item_optic_AMS) {
        displayName="[Ghost] AMS (Khaki)";
        class TransportItems {
            class GVAR(optic_AMS_khk) {
                name=QGVAR(optic_AMS_khk);
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMS_snd): GVAR(Item_optic_AMS) {
        displayName="[Ghost] AMS (Sand)";
        class TransportItems {
            class GVAR(optic_AMS_snd) {
                name=QGVAR(optic_AMS_snd);
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMSTI): Item_optic_AMS {
        displayName="[Ghost] AMS-TI (Black)";
        author="NemesisRE";
        class TransportItems {
            class GVAR(optic_AMSTI) {
                name=QGVAR(optic_AMSTI);
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMSTI_khk): GVAR(Item_optic_AMSTI) {
        displayName="[Ghost] AMS-TI (Khaki)";
        class TransportItems {
            class GVAR(optic_AMSTI_khk) {
                name=QGVAR(optic_AMSTI_khk);
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMSTI_snd): GVAR(Item_optic_AMSTI) {
        displayName="[Ghost] AMS-TI (Sand)";
        class TransportItems {
            class GVAR(optic_AMSTI_snd) {
                name=QGVAR(optic_AMSTI_snd);
                count=1;
            };
        };
    };
    class Box_NATO_Support_F;
    class ACE_Box_Misc: Box_NATO_Support_F {
        class TransportItems {
            class GVAR(Vector_Designator) {
                name=QGVAR(Vector_Designator);
                count=3;
            };
        };
    };
};
