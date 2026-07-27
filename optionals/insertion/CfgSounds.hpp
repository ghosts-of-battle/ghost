class CfgSounds {
    class GVAR(Strapping) {
        name = QGVAR(Strapping);
        sound[] = {QPATHTOF(sounds\Strapping.ogg), 5, 1, 100};
        titles[] = {};
    };

    class GVAR(subAmbiant) {
        name = QGVAR(subAmbiant);
        sound[] = {QPATHTOF(sounds\subAmbiant.ogg), 5, 1, 100};
        titles[] = {};
    };

    // the original declared this one with name = "..._subAmbiant", so playing it
    // by name got the wrong clip
    class GVAR(USSProteusComArrived) {
        name = QGVAR(USSProteusComArrived);
        sound[] = {QPATHTOF(sounds\USSProteusComArrived.ogg), 10, 1, 100};
        titles[] = {};
    };

    // shipped with the original but never declared, so detaching an SDV was silent
    class GVAR(sdvDetach) {
        name = QGVAR(sdvDetach);
        sound[] = {QPATHTOF(sounds\sdvDetach.ogg), 5, 1, 100};
        titles[] = {};
    };
};
