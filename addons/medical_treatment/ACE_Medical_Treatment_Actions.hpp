class ACEGVAR(medical_treatment,actions) {
    class BasicBandage {
        treatmentTime = QUOTE(call ACEFUNC(medical_treatment,getBandageTime));
    };

    class ApplyTourniquet: BasicBandage {
        treatmentTime = 2.5;
    };
    class RemoveTourniquet: ApplyTourniquet {
        treatmentTime = 1.5;
    };

    class Splint: BasicBandage {
        treatmentTime = 5;
    };

    class Morphine {
        medicRequired = 2;
    };
    class EatApap: Morphine {
        allowedSelections[] = {"head"};
        allowSelfTreatment = 1;
        displayName = CSTRING(Eat_Apap);
        displayNameProgress = CSTRING(Eating_Apap);
        icon = QPATHTOF(ui\icons\apap.paa);
        items[] = {"GHOST_apap"};
        condition = "(_this select 1) isEqualTo player";
        litter[] = { {"All", "", {"GHOST_MedicalLitter_apap"}} };
    };
    class AdministerApap: EatApap {
        allowSelfTreatment = 0;
        displayName = CSTRING(Administer_Apap);
        displayNameProgress = CSTRING(Administering_Apap);
        condition = "!((_this select 1) getVariable ['ACE_isUnconscious', false])";
    };

    class BloodIV: BasicBandage {
        treatmentTime = 5;
    };
    class PackingBandage {
        medicRequired = 1;
    };
    class ElasticBandage {
        medicRequired = 1;
    };
    class QuikClot {
        medicRequired = 1;
    };
    class CheckBloodPressure {
        medicRequired = 1;
    };
    class Splint {
        medicRequired = 1;
    };
};
