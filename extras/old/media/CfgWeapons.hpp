#include "script_component.hpp"
class CfgWeapons {
    class GrenadeLauncher;
    class Rifle;
    class Rifle_Base_F: Rifle {};
    class Rifle_Long_Base_F: Rifle_Base_F {};
    class Rifle_Short_Base_F: Rifle_Base_F {};
    class UGL_F;
    class LRR_base_F: Rifle_Long_Base_F {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {
                    "M320_silencerShot_SoundSet",
                    "M320_silencerTail_SoundSet",
                    "M320_silencerInteriorTail_SoundSet"
                };
            };
        };
    };
    
    class WF50_base_F: Rifle_Long_Base_F {
        bullet1[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_01","db-4",1,15};
        bullet2[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_02","db-4",1,15};
        bullet3[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_03","db-4",1,15};
        bullet4[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_04","db-4",1,15};
        bullet5[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_01","db-4",1,15};
        bullet6[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_02","db-4",1,15};
        bullet7[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_03","db-4",1,15};
        bullet8[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_04","db-4",1,15};
        bullet9[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_01","db-4",1,15};
        bullet10[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_02","db-4",1,15};
        bullet11[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_03","db-4",1,15};
        bullet12[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_04","db-4",1,15};
        soundBullet[] = {
            "bullet1,1/12",
            "bullet2,1/12",
            "bullet3,1/12",
            "bullet4,1/12",
            "bullet5,1/12",
            "bullet6,1/12",
            "bullet7,1/12",
            "bullet8,1/12",
            "bullet9,1/12",
            "bullet10,1/12",
            "bullet11,1/12",
            "bullet12,1/12"
        };
        drySound[] = {"\z\ghost\addons\media\arsenal\weapons\LongRangeRifles\WF50\WF50_dry","db-6",1,20};
        reloadMagazineSound[] = {"\z\ghost\addons\media\arsenal\weapons\LongRangeRifles\WF50\WF50_reload","db-12",1,10};
        soundBipodDeploy[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy","db-3",1,20};
        soundBipodFold[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold","db-3",1,20};
        soundBipodDown[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down","db-3",1,20};
        soundBipodUp[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up","db-3",1,20};
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {
                    "WF50_Shot_SoundSet",
                    "WF50_Tail_SoundSet",
                    "WF50_InteriorTail_SoundSet"
                };
            };
        };
    };
    class Pistol_Base_F;
    class hgun_G17_F: Pistol_Base_F {
        bullet1[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_01","db-6",1,15};
        bullet2[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_02","db-6",1,15};
        bullet3[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_03","db-6",1,15};
        bullet4[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_04","db-6",1,15};
        bullet5[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_01","db-8",1,15};
        bullet6[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_02","db-8",1,15};
        bullet7[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_03","db-8",1,15};
        bullet8[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_04","db-8",1,15};
        bullet9[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_01","db-13",1,15};
        bullet10[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_02","db-13",1,15};
        bullet11[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_03","db-13",1,15};
        bullet12[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_04","db-13",1,15};
        soundBullet[] = {
            "bullet1,1/12",
            "bullet2,1/12",
            "bullet3,1/12",
            "bullet4,1/12",
            "bullet5,1/12",
            "bullet6,1/12",
            "bullet7,1/12",
            "bullet8,1/12",
            "bullet9,1/12",
            "bullet10,1/12",
            "bullet11,1/12",
            "bullet12,1/12"
        };
        drySound[] = {"\z\ghost\addons\media\arsenal\weapons\Pistols\G17\G17_dry","db-8",1,20};
        reloadMagazineSound[] = {"\z\ghost\addons\media\arsenal\weapons\Pistols\G17\G17_reload","db0",1,10};
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {
                    "G17_Shot_SoundSet",
                    "G17_Tail_SoundSet",
                    "G17_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {
                    "G17_silencerShot_SoundSet",
                    "G17_silencerTail_SoundSet",
                    "G17_silencerInteriorTail_SoundSet"
                };
            };
        };
    };
    class RFB_base_F: Rifle_Base_F {
        bullet1[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_01","db-6",1,15};
        bullet2[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_02","db-6",1,15};
        bullet3[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_03","db-6",1,15};
        bullet4[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_04","db-6",1,15};
        bullet5[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_01","db-8",1,15};
        bullet6[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_02","db-8",1,15};
        bullet7[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_03","db-8",1,15};
        bullet8[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_04","db-8",1,15};
        bullet9[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_01","db-12",1,15};
        bullet10[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_02","db-12",1,15};
        bullet11[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_03","db-12",1,15};
        bullet12[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_04","db-12",1,15};
        soundBullet[] = {
            "bullet1,1/12",
            "bullet2,1/12",
            "bullet3,1/12",
            "bullet4,1/12",
            "bullet5,1/12",
            "bullet6,1/12",
            "bullet7,1/12",
            "bullet8,1/12",
            "bullet9,1/12",
            "bullet10,1/12",
            "bullet11,1/12",
            "bullet12,1/12"
        };
        drySound[] = {"\z\ghost\addons\media\arsenal\weapons\Rifles\RFL\RFL_dry","db-8",1,10};
        reloadMagazineSound[] = {"\z\ghost\addons\media\arsenal\weapons\Rifles\RFL\RFL_reload","db0",1,10};
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {
                    "RFL_Shot_SoundSet",
                    "RFL_Tail_SoundSet",
                    "RFL_InteriorTail_SoundSet"
                };
            };
          };
    };
    class arifle_SA80_base_F: Rifle_Base_F {
        soundBipodDown[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down","db-3",1,20};
        soundBipodUp[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up","db-3",1,20};
        drySound[] = {"\z\ghost\addons\media\arsenal\weapons\Rifles\L85A3\L85A3_dry","db-5",1,10};
        reloadMagazineSound[] = {"\z\ghost\addons\media\arsenal\weapons\Rifles\L85A3\L85A3_reload","db8",1,10};
        changeFiremodeSound[] = {"\z\ghost\addons\media\arsenal\weapons\Rifles\L85A3\L85A3_firemode","db-15",1,5};
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {
                    "L85A3_Shot_SoundSet",
                    "L85A3_Tail_SoundSet",
                    "L85A3_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {
                    "L85A3_silencerShot_SoundSet",
                    "L85A3_silencerTail_SoundSet",
                    "L85A3_silencerInteriorTail_SoundSet"
                };
            };
          };
          class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {
                    "L85A3_Shot_SoundSet",
                    "L85A3_Tail_SoundSet",
                    "L85A3_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {
                    "L85A3_silencerShot_SoundSet",
                    "L85A3_silencerTail_SoundSet",
                    "L85A3_silencerInteriorTail_SoundSet"
                };
            };
          };
    };
    class arifle_SA80_GL_base_F: arifle_SA80_base_F {
        class EGLM: UGL_F {
            reloadMagazineSound[] = {"\z\ghost\addons\media\arsenal\weapons\Rifles\L85A3\L85A3_UGL_reload","db-2",1,10};
        };
    };
    class arifle_SCAR_base_F: Rifle_Base_F {
        bullet1[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_01","db-6",1,15};
        bullet2[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_02","db-6",1,15};
        bullet3[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_03","db-6",1,15};
        bullet4[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_04","db-6",1,15};
        bullet5[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_01","db-8",1,15};
        bullet6[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_02","db-8",1,15};
        bullet7[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_03","db-8",1,15};
        bullet8[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_04","db-8",1,15};
        bullet9[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_01","db-12",1,15};
        bullet10[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_02","db-12",1,15};
        bullet11[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_03","db-12",1,15};
        bullet12[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_04","db-12",1,15};
        soundBullet[] = {
            "bullet1,1/12",
            "bullet2,1/12",
            "bullet3,1/12",
            "bullet4,1/12",
            "bullet5,1/12",
            "bullet6,1/12",
            "bullet7,1/12",
            "bullet8,1/12",
            "bullet9,1/12",
            "bullet10,1/12",
            "bullet11,1/12",
            "bullet12,1/12"
        };
        drySound[] = {"\z\ghost\addons\media\arsenal\weapons\Rifles\SCAR\SCAR_dry","db-5",1,10};
        reloadMagazineSound[] = {"\z\ghost\addons\media\arsenal\weapons\Rifles\SCAR\SCAR_reload","db0",1,10};
        changeFiremodeSound[] = {"\z\ghost\addons\media\arsenal\weapons\Rifles\SCAR\SCAR_firemode","db-15",1,5};
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {
                    "SCAR_Shot_SoundSet",
                    "SCAR_Tail_SoundSet",
                    "SCAR_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {
                    "SCAR_silencerShot_SoundSet",
                    "SCAR_silencerTail_SoundSet",
                    "SCAR_silencerInteriorTail_SoundSet"
                };
            };
          };
          class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {
                    "SCAR_Shot_SoundSet",
                    "SCAR_Tail_SoundSet",
                    "SCAR_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {
                    "SCAR_silencerShot_SoundSet",
                    "SCAR_silencerTail_SoundSet",
                    "SCAR_silencerInteriorTail_SoundSet"
                };
            };
          };
    };
    class arifle_SCAR_GL_base_F: arifle_SCAR_base_F {
        class EGLM: UGL_F {
            reloadMagazineSound[] = {"\z\ghost\addons\media\arsenal\weapons\Rifles\SCAR\SCAR_UGL_reload","db-2",1,10};
        };
    };
    class arifle_SCAR_L_base_F: Rifle_Base_F {
        bullet1[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_01","db-6",1,15};
        bullet2[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_02","db-6",1,15};
        bullet3[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_03","db-6",1,15};
        bullet4[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_04","db-6",1,15};
        bullet5[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_01","db-8",1,15};
        bullet6[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_02","db-8",1,15};
        bullet7[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_03","db-8",1,15};
        bullet8[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_04","db-8",1,15};
        bullet9[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_01","db-12",1,15};
        bullet10[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_02","db-12",1,15};
        bullet11[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_03","db-12",1,15};
        bullet12[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_04","db-12",1,15};
        soundBullet[] = {
            "bullet1,1/12",
            "bullet2,1/12",
            "bullet3,1/12",
            "bullet4,1/12",
            "bullet5,1/12",
            "bullet6,1/12",
            "bullet7,1/12",
            "bullet8,1/12",
            "bullet9,1/12",
            "bullet10,1/12",
            "bullet11,1/12",
            "bullet12,1/12"
        };
        drySound[] = {"\z\ghost\addons\media\arsenal\weapons\Rifles\SCAR\SCAR_dry","db-5",1,10};
        reloadMagazineSound[] = {"\z\ghost\addons\media\arsenal\weapons\Rifles\SCAR\SCAR_reload","db0",1,10};
        changeFiremodeSound[] = {"\z\ghost\addons\media\arsenal\weapons\Rifles\SCAR\SCAR_firemode","db-15",1,5};
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {
                    "SPAR02_Shot_SoundSet",
                    "SPAR02_tail_SoundSet",
                    "SPAR02_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {
                    "SPAR02_silencerShot_SoundSet",
                    "SPAR02_silencerTail_SoundSet",
                    "SPAR02_silencerInteriorTail_SoundSet"
                };
            };
          };
          class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {
                    "SPAR02_Shot_SoundSet",
                    "SPAR02_tail_SoundSet",
                    "SPAR02_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {
                    "SPAR02_silencerShot_SoundSet",
                    "SPAR02_silencerTail_SoundSet",
                    "SPAR02_silencerInteriorTail_SoundSet"
                };
            };
          };
    };
    class arifle_SCAR_L_GL_base_F: arifle_SCAR_L_base_F {
        class EGLM: UGL_F {
            reloadMagazineSound[] = {"\z\ghost\addons\media\arsenal\weapons\Rifles\SCAR\SCAR_UGL_reload","db-2",1,10};
        };
    };
    class Rifle_Short_Base_F;
    class sgun_KSG_F: Rifle_Short_Base_F {
        bullet1[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_01","db-4",1,15};
        bullet2[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_02","db-4",1,15};
        bullet3[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_03","db-4",1,15};
        bullet4[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_04","db-4",1,15};
        bullet5[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_01","db-6",1,15};
        bullet6[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_02","db-6",1,15};
        bullet7[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_03","db-6",1,15};
        bullet8[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_04","db-6",1,15};
        bullet9[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_01","db-6",1,15};
        bullet10[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_02","db-6",1,15};
        bullet11[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_03","db-6",1,15};
        bullet12[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_04","db-6",1,15};
        soundBullet[] = {
            "bullet1,1/12",
            "bullet2,1/12",
            "bullet3,1/12",
            "bullet4,1/12",
            "bullet5,1/12",
            "bullet6,1/12",
            "bullet7,1/12",
            "bullet8,1/12",
            "bullet9,1/12",
            "bullet10,1/12",
            "bullet11,1/12",
            "bullet12,1/12"
        };
        drySound[] = {"\z\ghost\addons\media\arsenal\weapons\Shotguns\KSG\KSG_dry","db-3",1,10};
        reloadMagazineSound[] = {"\z\ghost\addons\media\arsenal\weapons\Shotguns\KSG\KSG_reload","db0",1,10};
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {
                    "KSG_Shot_SoundSet",
                    "KSG_Tail_SoundSet",
                    "KSG_interiorTail_SoundSet"
                };
            };
        };
        class Secondary: Rifle_Short_Base_F {
            bullet1[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_01","db-4",1,15};
            bullet2[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_02","db-4",1,15};
            bullet3[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_03","db-4",1,15};
            bullet4[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_04","db-4",1,15};
            bullet5[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_01","db-6",1,15};
            bullet6[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_02","db-6",1,15};
            bullet7[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_03","db-6",1,15};
            bullet8[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_04","db-6",1,15};
            bullet9[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_01","db-6",1,15};
            bullet10[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_02","db-6",1,15};
            bullet11[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_03","db-6",1,15};
            bullet12[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_04","db-6",1,15};
            soundBullet[] = {
                "bullet1,1/12",
                "bullet2,1/12",
                "bullet3,1/12",
                "bullet4,1/12",
                "bullet5,1/12",
                "bullet6,1/12",
                "bullet7,1/12",
                "bullet8,1/12",
                "bullet9,1/12",
                "bullet10,1/12",
                "bullet11,1/12",
                "bullet12,1/12"
            };
            drySound[] = {"\z\ghost\addons\media\arsenal\weapons\Shotguns\KSG\KSG_dry","db-3",1,10};
            reloadMagazineSound[] = {"\z\ghost\addons\media\arsenal\weapons\Shotguns\KSG\KSG_reload","db0",1,10};
            class Single: Mode_SemiAuto {
                class BaseSoundModeType;
                class StandardSound: BaseSoundModeType {
                    soundSetShot[] =
                    {
                        "KSG_Shot_SoundSet",
                        "KSG_Tail_SoundSet",
                        "KSG_interiorTail_SoundSet"
                    };
                };
            };
        };
    };
    class sgun_M4_F: Rifle_Short_Base_F {
        bullet1[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_01","db-4",1,15};
        bullet2[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_02","db-4",1,15};
        bullet3[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_03","db-4",1,15};
        bullet4[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\metal_shotgun_04","db-4",1,15};
        bullet5[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_01","db-6",1,15};
        bullet6[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_02","db-6",1,15};
        bullet7[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_03","db-6",1,15};
        bullet8[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\dirt_shotgun_04","db-6",1,15};
        bullet9[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_01","db-6",1,15};
        bullet10[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_02","db-6",1,15};
        bullet11[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_03","db-6",1,15};
        bullet12[] = {"\A3\Sounds_F\weapons\Shells\Shotgun\grass_shotgun_04","db-6",1,15};
        soundBullet[] = {
            "bullet1,1/12",
            "bullet2,1/12",
            "bullet3,1/12",
            "bullet4,1/12",
            "bullet5,1/12",
            "bullet6,1/12",
            "bullet7,1/12",
            "bullet8,1/12",
            "bullet9,1/12",
            "bullet10,1/12",
            "bullet11,1/12",
            "bullet12,1/12"
        };
        drySound[] = {"\z\ghost\addons\media\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_dry","db-3",1,10};
        reloadMagazineSound[] = {"\z\ghost\addons\media\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_reload","db0",1,10};
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {
                    "M4_SSAS_Shot_SoundSet",
                    "M4_SSAS_Tail_SoundSet",
                    "M4_SSAS_interiorTail_SoundSet"
                };
            };
        };
    };
    class SMG_04_base_F: Rifle_Short_Base_F {
        bullet1[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_01","db-6",1,15};
        bullet2[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_02","db-6",1,15};
        bullet3[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_03","db-6",1,15};
        bullet4[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_04","db-6",1,15};
        bullet5[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_01","db-8",1,15};
        bullet6[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_02","db-8",1,15};
        bullet7[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_03","db-8",1,15};
        bullet8[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_04","db-8",1,15};
        bullet9[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_01","db-13",1,15};
        bullet10[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_02","db-13",1,15};
        bullet11[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_03","db-13",1,15};
        bullet12[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_04","db-13",1,15};
        soundBullet[] = {
            "bullet1,1/12",
            "bullet2,1/12",
            "bullet3,1/12",
            "bullet4,1/12",
            "bullet5,1/12",
            "bullet6,1/12",
            "bullet7,1/12",
            "bullet8,1/12",
            "bullet9,1/12",
            "bullet10,1/12",
            "bullet11,1/12",
            "bullet12,1/12"
        };
        drySound[] = {"\z\ghost\addons\media\arsenal\weapons\SMGs\SMG04\SMG04_dry","db-15",1,10};
        reloadMagazineSound[] = {"\z\ghost\addons\media\arsenal\weapons\SMGs\SMG04\SMG04_reload","db0",1,30};
        changeFiremodeSound[] = {"\z\ghost\addons\media\arsenal\weapons\SMGs\SMG04\SMG04_firemode","db-10",1,5};
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {
                    "SMG04_Shot_SoundSet",
                    "SMG04_Tail_SoundSet",
                    "SMG04_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {
                    "SMG04_silencerShot_SoundSet",
                    "SMG04_silencerTail_SoundSet",
                    "SMG04_silencerInteriorTail_SoundSet"
                };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {
                    "SMG04_Shot_SoundSet",
                    "SMG04_Tail_SoundSet",
                    "SMG04_InteriorTail_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {
                    "SMG04_silencerShot_SoundSet",
                    "SMG04_silencerTail_SoundSet",
                    "SMG04_silencerInteriorTail_SoundSet"
                };
            };
        };
    };
};
