    
class GHOST_booboo: ACE_ItemCore {
    displayName="Blue Force Gear Boo Boo Kit";
    scope = 2;
    descriptionShort="Contains: Wiggles bandaids, iodine, dental hygiene, elctrolytes, jelly beans and more";
    descriptionUse="Contains: Wiggles bandaids, iodine, dental hygiene, elctrolytes, jelly beans and more";
    picture="\z\ghost\addons\media\images\icon\booboo_ca.paa";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass=0.01;
    };
};
class GHOST_cascard: GHOST_booboo {
    scope = 2;
    displayName="TACMED Casualty Cards";
    picture="\z\ghost\addons\media\images\icon\cascard_ca.paa";
    descriptionShort="";
    descriptionUse="";
};
class GHOST_nargloves: GHOST_booboo {
    scope = 2;
    displayName="NAR Nitrile Gloves (Sand)";
    picture="\z\ghost\addons\media\images\icon\nargloves_ca.paa";
    descriptionShort="";
    descriptionUse="";
};
class GHOST_shears: GHOST_booboo {
    scope = 2;
    displayName="Trauma Shears";
    picture="\z\ghost\addons\media\images\icon\shears_ca.paa";
    descriptionShort="";
    descriptionUse="";
};
class GHOST_notes: GHOST_booboo {
    scope = 2;
    displayName="Notebook";
    picture="\z\ghost\addons\media\images\icon\notes_ca.paa";
    descriptionShort="For recording patient details for handover";
    descriptionUse="For recording patient details for handover";
};
class GHOST_triangleban: GHOST_booboo {
    scope = 2;
    displayName="NAR Triangle Bandage";
    picture="\z\ghost\addons\media\images\icon\triangleban_ca.paa";
    descriptionShort="";
    descriptionUse="";
};
class GHOST_NDC: GHOST_booboo {
    scope = 2;
    displayName="ARS Needle for decompression";
    descriptionShort="Made by North American Rescue. 14 gauge needle for performing emergency chest decompression and drainage";
    descriptionUse="Made by North American Rescue. 14 gauge needle for performing emergency chest decompression and drainage";
    picture="\z\ghost\addons\media\images\icon\NDC.paa";
};
class ACE_bodyBag: ACE_ItemCore {
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };