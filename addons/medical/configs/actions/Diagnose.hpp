    
class Diagnose: BasicBandage {};
class CheckPulse: Diagnose {};
class CheckBloodPressure: CheckPulse {};
class CheckResponse : CheckPulse {
    displayName = "Check Condition";
    displayNameProgress = "Checking Patient's Condition...";
    callbackSuccess = "GHOST_Medical_fnc_checkResponse";
};