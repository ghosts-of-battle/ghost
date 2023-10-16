    

class GHOST_Morphine {
    allowSelfTreatment = 1;
    
    medicRequired = 0;
    treatmentTimeSelfCoef = 1; // todo: this isn't used anywhere, remove?
    consumeItem = 1;
    allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
    treatmentTime = "ace_medical_treatment_treatmentTimeAutoinjector";
    displayName = "Morphine 10mg/1mL";
    displayNameProgress = "Injecting Morphine";
    icon = "\z\ghost\addons\media\images\icon\VPN.paa";
    category = "medication";
    condition = "GHOST_Medical_fnc_vpnMedicationCondition";
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "GHOST_Medical_fnc_vpnMedicationSuccess";
    callbackFailure = "";
    items[] = {
        "GHOST_morphine",
        "GHOST_VPN"
    };
    
    animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
    animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
    animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
    animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
    sounds[] = {{"z\ace\addons\medical_treatment\sounds\Inject.ogg",1,1,50}};
    litter[] = {{}};
};

class GHOST_Epinephrine: GHOST_Morphine {
    displayName = "Adrenaline 1mg/1mL";
    displayNameProgress = "Injecting Adrenaline";
    icon = "\z\ghost\addons\media\images\icon\VPN.paa";
    condition = "GHOST_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "GHOST_Medical_fnc_vpnMedicationSuccess";
    requiresAll= "true";
    items[] = {
        "GHOST_epinephrine",
        "GHOST_VPN"
    };
    litter[] = {{}};
};


////////////////////////////////////////////////////////////////////////////////

class Naloxone : GHOST_Morphine {
    displayName="Naloxone 1.6mg/4mL";
    displayNameProgress="Injecting Naloxone";
    icon="\z\ghost\addons\media\images\icon\VPN.paa";
    condition = "GHOST_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "GHOST_Medical_fnc_naloxoneSuccess";
    requiresAll= "true";
    items[] = {
        "GHOST_naloxone",
        "GHOST_VPN"
    };
    litter[] = {{}};
};

class Fentanyl: GHOST_Morphine{
    displayName="Fentanyl 100mcg/2mL";
    displayNameProgress="Injecting Fentanyl";
    icon = "\z\ghost\addons\media\images\icon\VPN.paa";
    condition = "GHOST_Medical_fnc_vpnMedicationCondition";
    callbackSuccess = "GHOST_Medical_fnc_vpnMedicationSuccess";
    requiresAll= "true";
    items[]={
        "GHOST_fentanyl",
        "GHOST_VPN"
    };
    litter[] = {{}};
};

class Ketamine_6mg : GHOST_Morphine {
    displayName="Ketamine 6mg/2mL";
    displayNameProgress="Injecting Ketamine 6mg/2mL";
    icon = "\z\ghost\addons\media\images\icon\VPN.paa";
    requiresAll= "true";
    items[] = {
        "GHOST_ketamine",
        "GHOST_VPN"
    };
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "GHOST_Medical_fnc_ketamineSuccess";
    litter[] = {{}};
};

class Ketamine_200mg : GHOST_Morphine {
    displayName="Ketamine 200mg/2mL";
    displayNameProgress="Injecting Ketamine 200mg/2mL";
    icon = "\z\ghost\addons\media\images\icon\VPN.paa";
    requiresAll= "true";
    items[] = {
        "GHOST_ketamine",
        "GHOST_VPN"
    };
    callbackStart = "";
    callbackProgress = "";
    callbackSuccess = "GHOST_Medical_fnc_ketamineSuccess";
    litter[] = {{}};
};

////////////////////////////////////////////////////////////////////////////////

class NonVPNMedication : GHOST_Morphine {
    condition = "";
    callbackSuccess = "";
};

class Tetra : NonVPNMedication {
    displayName="Tetracycline 250mg";
    displayNameProgress="Giving Tetracycline";
    icon="\z\ghost\addons\media\images\icon\tetra.paa";
    items[]={
        "GHOST_tetra"
    };
    allowedSelections[]={
        "Head"
    };
};

class GHOST_Apap : NonVPNMedication {
    displayName="Paracetemol 1g";
    displayNameProgress="Giving Paracetemol 1g";
    icon="\z\ghost\addons\media\images\icon\apap.paa";
    callbackSuccess = "GHOST_Medical_fnc_apapSuccess";
    items[] = {
        "GHOST_Apap"
    };
    allowedSelections[] = {
        "Head"
    };
    treatmentTime=1;
    litter[]={
        {"All","",{"GHOST_ApapLitter"}}
    };
};