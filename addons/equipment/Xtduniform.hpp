#include "script_component.hpp"
class XtdGearModels {
    class CfgWeapons {
        class GFPGP_2_Opsuni {
            options[] = { "camo"};
            label = "Uniform";
            class camo {
                alwaysSelectable = 1;
                values[] = { "mcb","khk","mc","m81", "mcar", "mct","rgr","dts","ts"};
                label = "Uniform Top";
                class mcb {
                  label = "MCB";
                  image = "z\aceax\addons\gearinfo\data\camo\mcb.paa";
                };
                class mct {
                  label = "MCT";
                  image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
                class mc {
                  label = "MC";
                  image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class khk {
                  label = "KHK";
                  image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class m81 {
                  label = "M81";
                  image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
                class mcar {
                  label = "MCAR";
                  image = "z\aceax\addons\gearinfo\data\camo\mcd.paa";
                };
                class rgr {
                  label = "RGR";
                  image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class dts {
                  label = "DTS";
                  image = "z\aceax\addons\gearinfo\data\camo\tsd.paa";
                };
                class ts {
                  label = "TS";
                  image = "z\aceax\addons\gearinfo\data\camo\tsw.paa";
                };
            };
        };
    };
};

class XtdGearInfos {
  class CfgWeapons {

    class FPGP2_Uni_Crye_1_U {
      model = "GFPGP_2_Opsuni";
      camo = "mc";
    };
    class FPGP2_Uni_Crye_dts_1_U {
      model = "GFPGP_2_Opsuni";
      camo = "dts";
    };
    class FPGP2_Uni_Crye_khk_1_U {
      model = "GFPGP_2_Opsuni";
      camo = "khk";
    };
    class FPGP2_Uni_Crye_m81_1_U {
      model = "GFPGP_2_Opsuni";
      camo = "m81";
    };
    class FPGP2_Uni_Crye_mcar_1_U {
      model = "GFPGP_2_Opsuni";
      camo = "mcar";
    };
    class FPGP2_Uni_Crye_mcb_1_U {
      model = "GFPGP_2_Opsuni";
      camo = "mcb";
    };
    class FPGP2_Uni_Crye_mct_1_U {
      model = "GFPGP_2_Opsuni";
      top = "mct";
      camo = "mct";
    };
    class FPGP2_Uni_Crye_rgr_1_U {
      model = "GFPGP_2_Opsuni";
      camo = "rgr";
    };
    class FPGP2_Uni_Crye_ts_1_U {
      model = "GFPGP_2_Opsuni";
      camo = "ts";
    };
  };
};
