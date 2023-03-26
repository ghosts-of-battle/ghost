class CfgFactionClasses {
    class BLU_F;
    class DOUBLES(PREFIX,W): BLU_F {
        displayName = "GHOST: West";
        flag = "a3\data_f\Flags\flag_us_co.paa";
        icon = QPATHTOF(data\icon_usmc.paa);
    };

    class OPF_F;
    class DOUBLES(PREFIX,E): OPF_F {
        displayName = "GHOST: East";
        flag = QPATHTOF(data\flag_rus.paa);
        icon = QPATHTOF(data\icon_msv.paa);
    };

    class DOUBLES(PREFIX,msv): DOUBLES(PREFIX,E) { // lower case msv so it doesn't macro
        displayName = "GHOST: BWC MSV";
    }; 

    class IND_F;
    class DOUBLES(PREFIX,I): IND_F {
        displayName = "GHOST: Indy";
    };
};
