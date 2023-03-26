#include "script_component.hpp"

class CfgPatches {
    class ADDON {
    units[] = {
        "ghost_w_rifleman","ghost_w_rifleman_02","ghost_w_rifleman_03","ghost_w_rifleman_04","ghost_w_sf_rifleman","ghost_w_sf_rifleman_02","ghost_w_sniper","ghost_w_aar","ghost_w_sf_aar","ghost_w_mmgag","ghost_w_hmgag","ghost_w_matag","ghost_w_hatag","ghost_w_msamag","ghost_w_mtrag","ghost_w_mtrg","ghost_w_spotter","ghost_w_ar","ghost_w_sf_ar","ghost_w_mmgg","ghost_w_hmgg","ghost_w_lat","ghost_w_sf_lat","ghost_w_matg","ghost_w_hatg","ghost_w_msamg","ghost_w_coy","ghost_w_xo","ghost_w_uav","ghost_w_fac","ghost_w_plt","ghost_w_sgt","ghost_w_sl","ghost_w_sf_sl","ghost_w_mmgl","ghost_w_hmgl","ghost_w_matl","ghost_w_hatl","ghost_w_msaml","ghost_w_mtrl","ghost_w_stl","ghost_w_ftl","ghost_w_sf_ftl","ghost_w_vicl","ghost_w_demol","ghost_w_engl","ghost_w_cm","ghost_w_plm","ghost_w_sm","ghost_w_sf_sm","ghost_w_eng","ghost_w_demo","ghost_w_mine","ghost_w_vicc","ghost_w_vicd","ghost_w_pilot","ghost_w_cc","ghost_w_helicrew","ghost_w_artl","ghost_w_artg","ghost_e_rifleman","ghost_e_rifleman_02","ghost_e_rifleman_03","ghost_e_rifleman_04","ghost_e_sf_rifleman","ghost_e_sf_rifleman_02","ghost_e_sniper","ghost_e_aar","ghost_e_sf_aar","ghost_e_mmgag","ghost_e_hmgag","ghost_e_matag","ghost_e_hatag","ghost_e_msamag","ghost_e_mtrag","ghost_e_mtrg","ghost_e_spotter","ghost_e_ar","ghost_e_sf_ar","ghost_e_mmgg","ghost_e_hmgg","ghost_e_lat","ghost_e_sf_lat","ghost_e_matg","ghost_e_hatg","ghost_e_msamg","ghost_e_coy","ghost_e_xo","ghost_e_uav","ghost_e_fac","ghost_e_plt","ghost_e_sgt","ghost_e_sl","ghost_e_sf_sl","ghost_e_mmgl","ghost_e_hmgl","ghost_e_matl","ghost_e_hatl","ghost_e_msaml","ghost_e_mtrl","ghost_e_stl","ghost_e_ftl","ghost_e_sf_ftl","ghost_e_vicl","ghost_e_demol","ghost_e_engl","ghost_e_cm","ghost_e_plm","ghost_e_sm","ghost_e_sf_sm","ghost_e_eng","ghost_e_demo","ghost_e_mine","ghost_e_vicc","ghost_e_vicd","ghost_e_pilot","ghost_e_cc","ghost_e_helicrew","ghost_e_artl","ghost_e_artg","ghost_i_rifleman","ghost_i_rifleman_02","ghost_i_rifleman_03","ghost_i_rifleman_04","ghost_i_sf_rifleman","ghost_i_sf_rifleman_02","ghost_i_sniper","ghost_i_aar","ghost_i_sf_aar","ghost_i_mmgag","ghost_i_hmgag","ghost_i_matag","ghost_i_hatag","ghost_i_msamag","ghost_i_mtrag","ghost_i_mtrg","ghost_i_spotter","ghost_i_ar","ghost_i_sf_ar","ghost_i_mmgg","ghost_i_hmgg","ghost_i_lat","ghost_i_sf_lat","ghost_i_matg","ghost_i_hatg","ghost_i_msamg","ghost_i_coy","ghost_i_xo","ghost_i_uav","ghost_i_fac","ghost_i_plt","ghost_i_sgt","ghost_i_sl","ghost_i_sf_sl","ghost_i_mmgl","ghost_i_hmgl","ghost_i_matl","ghost_i_hatl","ghost_i_msaml","ghost_i_mtrl","ghost_i_stl","ghost_i_ftl","ghost_i_sf_ftl","ghost_i_vicl","ghost_i_demol","ghost_i_engl","ghost_i_cm","ghost_i_plm","ghost_i_sm","ghost_i_sf_sm","ghost_i_eng","ghost_i_demo","ghost_i_mine","ghost_i_vicc","ghost_i_vicd","ghost_i_pilot","ghost_i_cc","ghost_i_helicrew","ghost_i_artl","ghost_i_artg","ghost_e_rifleman","ghost_e_rifleman_02","ghost_e_rifleman_03","ghost_e_rifleman_04","ghost_e_sf_rifleman","ghost_e_marksman","ghost_e_sf_marksman","ghost_e_aar","ghost_e_sf_aar","ghost_e_ag","ghost_e_sf_ag","ghost_e_mmgag","ghost_e_hmgag","ghost_e_matag","ghost_e_hatag","ghost_e_msamag","ghost_e_mtrag","ghost_e_mtrg","ghost_e_ar","ghost_e_sf_ar","ghost_e_mmgg","ghost_e_hmgg","ghost_e_g","ghost_e_sf_g","ghost_e_matg","ghost_e_hatg","ghost_e_msamg","ghost_e_coy","ghost_e_acoy","ghost_e_pol","ghost_e_fac","ghost_e_plt","ghost_e_aplt","ghost_e_sl","ghost_e_sf_sl","ghost_e_sf_ftl","ghost_e_mmgl","ghost_e_hmgl","ghost_e_matl","ghost_e_hatl","ghost_e_msaml","ghost_e_mtrl","ghost_e_stl","ghost_e_sr","ghost_e_vicl","ghost_e_engl","ghost_e_cm","ghost_e_plm","ghost_e_sm","ghost_e_sf_sm","ghost_e_eng","ghost_e_demo","ghost_e_vicc","ghost_e_vicd","ghost_e_pilot","ghost_e_cc"
        };
        /*units[] = {
            #include "subStrings\usmc.hpp"
            #include "subStrings\msv.hpp"
            #include "subStrings\air.hpp"
            #include "subStrings\bwc_msv.hpp"
        };*/
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "ghost_core", "A3_Characters_F" };
        author = "Ghost";
        authors[] = {"Alablm", "AACO"};
        authorUrl = "https://github.com/BourbonWarfare/GHOST";
        VERSION_CONFIG;
    };
};

#include "CfgEditorSubcategories.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
