// In-place patches to DUST OMCP-camo headgear:
//   * ACE electronic hearing protection on ALL 40 (MACRO_ACE_HEARING).
//   * Ballistic helmets (ECH / FAST / FASTE / FASTEP) also get a Head-armour
//     bump (armor 12 / passThrough 0.35), matching our other ghost helmets.
//   * Soft headgear (BH boonie hats, PC patrol caps, + their headset variants)
//     get hearing only - no armour change (a boonie hat shouldn't stop rounds).
//
// Each helmet is reopened with its REAL parent restated so inheritance isn't
// severed. `class ItemInfo: ItemInfo` resolves against the helmet's INHERITED
// ItemInfo member (from the vanilla base), so it extends it - the model, mass
// and other hitpoints are preserved; only Head armour is overridden. The root
// ItemInfo lives in ghost_main (see its CfgWeapons.hpp note).

// Hearing only (soft headgear).
#define DUST_HEARING(NAME,BASE) \
    class NAME: BASE { \
        MACRO_ACE_HEARING \
    }

// Hearing + Head-armour bump (ballistic helmets).
#define DUST_ARMOR(NAME,BASE) \
    class NAME: BASE { \
        MACRO_ACE_HEARING \
        class ItemInfo: ItemInfo { \
            class HitpointsProtectionInfo { \
                class Head { \
                    hitpointName = "HitHead"; \
                    armor = 12; \
                    passThrough = 0.35; \
                }; \
            }; \
        }; \
    }

// Vest torso-armour override (extends the inherited ItemInfo, bumps the torso
// hitpoints). NECK/CH(chest+diaphragm)/AB(abdomen+pelvis)/ARM(arms+legs) armour
// + their passThrough. Matches the ghost vest standard (Std=29, Heavy=34 chest).
#define VEST_HPI(NECK,NPT,CH,CPT,AB,APT,ARM,ARMPT) \
    class ItemInfo: ItemInfo { \
        class HitpointsProtectionInfo { \
            class Neck      { hitpointName = "HitNeck";      armor = NECK; passThrough = NPT; }; \
            class Chest     { hitpointName = "HitChest";     armor = CH;   passThrough = CPT; }; \
            class Body      { hitpointName = "HitBody";                    passThrough = CPT; }; \
            class Diaphragm { hitpointName = "HitDiaphragm"; armor = CH;   passThrough = CPT; }; \
            class Abdomen   { hitpointName = "HitAbdomen";   armor = AB;   passThrough = APT; }; \
            class Pelvis    { hitpointName = "HitPelvis";    armor = AB;   passThrough = APT; }; \
            class Arms      { hitpointName = "HitArms";      armor = ARM;  passThrough = ARMPT; }; \
            class Legs      { hitpointName = "HitLegs";      armor = ARM;  passThrough = ARMPT; }; \
        }; \
    };
#define VEST_LIGHT VEST_HPI(6,0.35,24,0.11,16,0.3,10,0.6)
#define VEST_STD   VEST_HPI(8,0.3,29,0.085,19,0.255,12,0.55)
#define VEST_HEAVY VEST_HPI(10,0.25,34,0.06,24,0.21,14,0.5)

class CfgWeapons {
    class ItemInfo;   // real root defined in ghost_main

    // External DUST base classes (forward-declared so the reopens resolve).
    class Dust_BH_Base;
    class Dust_BH_H_Base;
    class Dust_PC_Base;
    class Dust_PC_H_Base;
    class Dust_ECH_US;
    class DUST_FAST_Flag;
    class DUST_FASTE_Flag;
    class DUST_FASTEP_Flag;
    // Vest bases (Cage plate carriers: 01=Light, 02=Std, 03=Heavy)
    class Dust_CageBase_01;
    class Dust_CageBase_02;
    class Dust_CageBase_03;

    // ---- Soft headgear: ACE hearing only -------------------------------
    // Boonie hats
    DUST_HEARING(Dust_H_BH_OMCPA,Dust_BH_Base);
    DUST_HEARING(Dust_H_BH_OMCPD,Dust_BH_Base);
    DUST_HEARING(Dust_H_BH_OMCPS,Dust_BH_Base);
    DUST_HEARING(Dust_H_BH_OMCPT,Dust_BH_Base);
    DUST_HEARING(Dust_H_BH_OMCPW,Dust_BH_Base);
    // Boonie hats + headset
    DUST_HEARING(Dust_H_BH_H_OMCPA,Dust_BH_H_Base);
    DUST_HEARING(Dust_H_BH_H_OMCPD,Dust_BH_H_Base);
    DUST_HEARING(Dust_H_BH_H_OMCPS,Dust_BH_H_Base);
    DUST_HEARING(Dust_H_BH_H_OMCPT,Dust_BH_H_Base);
    DUST_HEARING(Dust_H_BH_H_OMCPW,Dust_BH_H_Base);
    // Patrol caps
    DUST_HEARING(Dust_H_PC_OMCPA,Dust_PC_Base);
    DUST_HEARING(Dust_H_PC_OMCPD,Dust_PC_Base);
    DUST_HEARING(Dust_H_PC_OMCPS,Dust_PC_Base);
    DUST_HEARING(Dust_H_PC_OMCPT,Dust_PC_Base);
    DUST_HEARING(Dust_H_PC_OMCPW,Dust_PC_Base);
    // Patrol caps + headset
    DUST_HEARING(Dust_H_PC_H_OMCPA,Dust_PC_H_Base);
    DUST_HEARING(Dust_H_PC_H_OMCPD,Dust_PC_H_Base);
    DUST_HEARING(Dust_H_PC_H_OMCPS,Dust_PC_H_Base);
    DUST_HEARING(Dust_H_PC_H_OMCPT,Dust_PC_H_Base);
    DUST_HEARING(Dust_H_PC_H_OMCPW,Dust_PC_H_Base);

    // ---- Ballistic helmets: ACE hearing + Head-armour bump -------------
    // ECH
    DUST_ARMOR(Dust_H_ECH_OMCPA,Dust_ECH_US);
    DUST_ARMOR(Dust_H_ECH_OMCPD,Dust_ECH_US);
    DUST_ARMOR(Dust_H_ECH_OMCPS,Dust_ECH_US);
    DUST_ARMOR(Dust_H_ECH_OMCPT,Dust_ECH_US);
    DUST_ARMOR(Dust_H_ECH_OMCPW,Dust_ECH_US);
    // FAST
    DUST_ARMOR(Dust_H_FAST_OMCPA,DUST_FAST_Flag);
    DUST_ARMOR(Dust_H_FAST_OMCPD,DUST_FAST_Flag);
    DUST_ARMOR(Dust_H_FAST_OMCPS,DUST_FAST_Flag);
    DUST_ARMOR(Dust_H_FAST_OMCPT,DUST_FAST_Flag);
    DUST_ARMOR(Dust_H_FAST_OMCPW,DUST_FAST_Flag);
    // FASTE
    DUST_ARMOR(Dust_H_FASTE_OMCPA,DUST_FASTE_Flag);
    DUST_ARMOR(Dust_H_FASTE_OMCPD,DUST_FASTE_Flag);
    DUST_ARMOR(Dust_H_FASTE_OMCPS,DUST_FASTE_Flag);
    DUST_ARMOR(Dust_H_FASTE_OMCPT,DUST_FASTE_Flag);
    DUST_ARMOR(Dust_H_FASTE_OMCPW,DUST_FASTE_Flag);
    // FASTEP
    DUST_ARMOR(Dust_H_FASTEP_OMCPA,DUST_FASTEP_Flag);
    DUST_ARMOR(Dust_H_FASTEP_OMCPD,DUST_FASTEP_Flag);
    DUST_ARMOR(Dust_H_FASTEP_OMCPS,DUST_FASTEP_Flag);
    DUST_ARMOR(Dust_H_FASTEP_OMCPT,DUST_FASTEP_Flag);
    DUST_ARMOR(Dust_H_FASTEP_OMCPW,DUST_FASTEP_Flag);

    // ---- Vest torso-armour bump (Cage plate carriers; RangeBelt left as-is) ----
    // Cage1 = Light Plate Carrier
    class Dust_V_Cage1_OMCPA: Dust_CageBase_01 {
        VEST_LIGHT
    };
    class Dust_V_Cage1_OMCPD: Dust_CageBase_01 {
        VEST_LIGHT
    };
    class Dust_V_Cage1_OMCPS: Dust_CageBase_01 {
        VEST_LIGHT
    };
    class Dust_V_Cage1_OMCPT: Dust_CageBase_01 {
        VEST_LIGHT
    };
    class Dust_V_Cage1_OMCPW: Dust_CageBase_01 {
        VEST_LIGHT
    };
    // Cage2 = Plate Carrier (standard)
    class Dust_V_Cage2_OMCPA: Dust_CageBase_02 {
        VEST_STD
    };
    class Dust_V_Cage2_OMCPD: Dust_CageBase_02 {
        VEST_STD
    };
    class Dust_V_Cage2_OMCPS: Dust_CageBase_02 {
        VEST_STD
    };
    class Dust_V_Cage2_OMCPT: Dust_CageBase_02 {
        VEST_STD
    };
    class Dust_V_Cage2_OMCPW: Dust_CageBase_02 {
        VEST_STD
    };
    // Cage3 = Heavy Plate Carrier
    class Dust_V_Cage3_OMCPA: Dust_CageBase_03 {
        VEST_HEAVY
    };
    class Dust_V_Cage3_OMCPD: Dust_CageBase_03 {
        VEST_HEAVY
    };
    class Dust_V_Cage3_OMCPS: Dust_CageBase_03 {
        VEST_HEAVY
    };
    class Dust_V_Cage3_OMCPT: Dust_CageBase_03 {
        VEST_HEAVY
    };
    class Dust_V_Cage3_OMCPW: Dust_CageBase_03 {
        VEST_HEAVY
    };
};
