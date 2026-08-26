"""Build the six US faction addons as NEW classes beside the originals.

NEW CLASSES, NOT OVERRIDES - the faction_mfrc pattern. BLU_F and the rest are
left exactly as their mods ship them; this declares `ghost_US` and friends
alongside, each fielding its own `ghost_US_*` units built by inheritance from
the original. Nothing anybody else depends on changes, and a load order without
the source mod gets inert classes rather than a config that refuses to build.

    addon                new faction      from
    faction_us           ghost_US         BLU_F
    faction_us_tna       ghost_US_tna     BLU_T_F
    faction_us_wdl       ghost_US_wdl     BLU_W_F
    faction_us_des       ghost_US_des     BLU_NATO_lxWS
    faction_marine_des   ghost_Marine_des EF_B_MJTF_Des
    faction_marine_wdl   ghost_Marine_wdl EF_B_MJTF_Wdl

THE ROSTER IS SCOPE 2 PLUS WHATEVER THE GROUPS FIELD. B_soldier_AR_F is scope 1
- unplaceable in the editor - but BLU_F's squads are built out of it, so a
scope-2-only roster leaves half of every squad pointing at classes this faction
does not own. Any class a group names gets built too, at its original scope.

Source data is the in-game dump in the RPT; see tools/gen_orbat_from_rpt.py,
whose reader this shares.

    python tools/gen_us_factions.py --rpt <file>
"""
import os, io, re, sys, argparse, collections

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import gen_orbat_from_rpt as R

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ADDONS = os.path.join(ROOT, "addons")

# addon dir, COMPONENT_BEAUTIFIED, new faction class, 3DEN name, source faction
TARGETS = [
    ("faction_us",         "US",              "ghost_US",         "Ghost US",              "blu_f"),
    ("faction_us_tna",     "US (Pacific)",    "ghost_US_tna",     "Ghost US (Pacific)",    "blu_t_f"),
    ("faction_us_wdl",     "US (Woodland)",   "ghost_US_wdl",     "Ghost US (Woodland)",   "blu_w_f"),
    ("faction_us_des",     "US (Desert)",     "ghost_US_des",     "Ghost US (Desert)",     "blu_nato_lxws"),
    ("faction_marine_des", "Marine (Desert)", "ghost_Marine_des", "Ghost Marine (Desert)", "ef_b_mjtf_des"),
    ("faction_marine_wdl", "Marine (Wdl)",    "ghost_Marine_wdl", "Ghost Marine (Woodland)", "ef_b_mjtf_wdl"),
    ("faction_himf",       "HIMF",            "ghost_HIMF",       "Ghost HIMF",            "atlas_blu_h_f"),
    ("faction_csat",       "CSAT",            "ghost_CSAT",       "Ghost CSAT",            "opf_f"),
    ("faction_insurgents", "Insurgents",      "ghost_Insurgents", "Ghost Insurgents",      "opf_ind_i_f"),
    ("faction_syndikat",   "Syndikat",        "ghost_Syndikat",   "Ghost Syndikat",        "ind_c_f"),
]


# ---------------------------------------------------------------------------
# PER-FACTION RIFLE SUBSTITUTION
# ---------------------------------------------------------------------------
# HIMF's line units carry Atlas M16A4 variants while its recon already carries
# the XMS. Putting the whole faction on the XMS is a small-arms decision, so it
# is expressed as a rule rather than a list of the six M16A4 spellings that
# happen to be in the roster today - a seventh would otherwise be missed in
# silence.
#
# GRENADIER LAUNCHERS ARE MATCHED SEPARATELY. Swapping a _GL_ rifle for a plain
# one takes the underbarrel launcher off the man and leaves him carrying 40mm
# he cannot fire.
#
# NOT SWAPPED, DELIBERATELY:
#   - the recon/commando units, which already carry the XMS. They are the
#     special forces exception.
#   - LMG, MMG and SMG. They are not rifles.
#   - the Marksman's Atlas_srifle_DMR_06 and the Recon Marksman's SR25. Those
#     are 7.62 designated marksman rifles; the XMS is 5.56, so swapping the
#     weapon without swapping the ammunition hands them a rifle they cannot
#     feed, and swapping the ammunition makes them riflemen.
RIFLE_SWAP = {
    "ghost_HIMF": [
        # (match on the current weapon, replacement)
        (lambda w: "M16A4" in w and "_GL_" in w, "arifle_XMS_GL_lxWS"),
        (lambda w: "M16A4" in w,                 "arifle_XMS_lxWS"),
    ],
}


# ---------------------------------------------------------------------------
# UNITS A FACTION FIELDS THAT ITS SOURCE DOES NOT
# ---------------------------------------------------------------------------
# Retextures of somebody else's aircraft. hiddenSelections is inherited from
# the parent; only the texture list is overridden, which is what the engine
# reads - `textures[]` is the ORBAT Creator's spelling, not the config's.
EXTRA_UNITS = {
    # TIER 1 IS LOITERING MUNITIONS, FIBER FPV AND NIGHT - the capability table
    # in docs/faction_builder_handoff.md. It is NOT tier 2's multi-ship
    # recon-strike, so there is no recon quad fleet, no UGV, no cargo lift and
    # no second FPV family: a proxy force gets what one patron sends, and
    # HIMF's two-supplier hedge is a near-peer's luxury.
    #
    # NO _TI VARIANTS. Every one of these has a thermal-seeker twin in the mod;
    # thermal is the tier 3 marker and was denied to HIMF at tier 2 for the
    # same reason.
    #
    # Their own Opf_I_I_UAV_02_IED_lxWS stays as it is - a crude IED quad is
    # exactly tier 0, and keeping it is what makes the new kit read as an
    # upgrade rather than a replacement.
    # TIER 0 IS A SINGLE FPV, DAYLIGHT, CRUDE - the bottom row of the capability
    # table in docs/faction_builder_handoff.md.
    #
    # ONE AIRFRAME, AND ONLY ANTI-PERSONNEL. The insurgents at tier 1 field an
    # AP and an AT bird from one supplier; a criminal network fields whatever
    # it could buy, and having an answer to armour is what it does not have.
    #
    # CROCUS, WHERE THE INSURGENTS TAKE KVN. The two do the same job, and two
    # groups buying from the same supplier is a coincidence worth avoiding -
    # it also means a mission can tell whose drone it is by the airframe.
    #
    # Their IED quad and the two UGV Saifs come with the roster already and are
    # left alone: an IED strapped to a hobby drone is exactly tier 0, and it is
    # what the faction is known for.
    "ghost_Syndikat": [
        {"kind": "veh", "base": "I_Crocus_AP", "name": "Crocus AP",
         "why": "the one FPV - bought, not issued"},
        {"kind": "man", "suffix": "Crocus_AP_Operator", "name": "Crocus AP Operator [SYN]",
         "backpack": "I_Crocus_AP_Bag"},
    ],

    "ghost_Insurgents": [
        {"kind": "veh", "base": "I_SwitchBlade_300", "name": "SwitchBlade 300",
         "why": "the loitering munition - reach without an air force"},
        {"kind": "veh", "base": "I_SwitchBlade_300_LaunchTube_Desert",
         "name": "SwitchBlade 300 Launch Tube",
         "why": "emplaced, because they have no vehicle to fire it from"},
        {"kind": "veh", "base": "I_KVN_AP", "name": "KVN AP",
         "why": "fiber FPV, anti-personnel"},
        {"kind": "veh", "base": "I_KVN_AT", "name": "KVN AT",
         "why": "fiber FPV, anti-armour - the only thing they have that kills armour"},
        {"kind": "man", "suffix": "KVN_AP_Operator", "name": "KVN AP Operator [INS]",
         "backpack": "I_KVN_AP_Bag"},
        {"kind": "man", "suffix": "KVN_AT_Operator", "name": "KVN AT Operator [INS]",
         "backpack": "I_KVN_AT_Bag"},
    ],

    "ghost_HIMF": [
        # --- the two airframes HIMF did not have, in HIMF's own colours ---
        {"kind": "veh", "base": 'Aegis_B_A_Heli_Attack_03_F', "name": 'AH-99 Blackfoot (Green)', "tex": [
            '\\A3_Aegis\\Air_F_Aegis\\Heli_Attack_03\\Data\\Heli_Attack_03_body_green_CO.paa',
            '\\A3_Aegis\\Air_F_Aegis\\Heli_Attack_03\\Data\\Heli_Attack_03_details_green_CO.paa',
            '\\A3_Aegis\\Air_F_Aegis\\Heli_Attack_03\\Data\\Heli_Attack_03_adds_green_CO.paa',
        ]},
        {"kind": "veh", "base": 'Aegis_B_E_Plane_Fighter_04_F', "name": 'To-201 Shikra (Grey)', "tex": [
            'a3\\air_f_jets\\plane_fighter_04\\data\\Fighter_04_fuselage_01_co.paa',
            'a3\\air_f_jets\\plane_fighter_04\\data\\Fighter_04_fuselage_02_co.paa',
            'a3\\air_f_jets\\plane_fighter_04\\data\\fighter_04_misc_01_co.paa',
            'a3\\air_f_jets\\plane_fighter_04\\data\\Numbers\\Fighter_04_number_04_ca.paa',
            'a3\\air_f_jets\\plane_fighter_04\\data\\Numbers\\Fighter_04_number_04_ca.paa',
            'a3\\air_f_jets\\plane_fighter_04\\data\\Numbers\\Fighter_04_number_08_ca.paa',
        ]},

        # --- the drones ---
        {"kind": "veh", "base": 'B_UAV_01_F', "name": 'AR-2 Darter', "why": 'the recon quad every t2 squad carries'},
        {"kind": "veh", "base": 'GX_B_RQ11B_UAV', "name": 'RQ-11B Raven', "why": 'hand-launched recon, one per section'},
        {"kind": "veh", "base": 'GX_B_BLACKHORNET_UAV', "name": 'Black Hornet 4', "why": 'micro recon for whoever is deciding'},
        {"kind": "veh", "base": 'B_Crocus_AP', "name": 'Crocus AP', "why": 'anti-personnel FPV - the t2 strike answer'},
        {"kind": "veh", "base": 'B_Crocus_AT', "name": 'Crocus AT', "why": 'anti-armour FPV'},
        {"kind": "veh", "base": 'B_KVN_AP', "name": 'KVN AP', "why": 'second FPV line, so losing one supplier is not losing FPV'},
        {"kind": "veh", "base": 'B_KVN_AT', "name": 'KVN AT', "why": 'second FPV line, anti-armour'},
        {"kind": "veh", "base": 'B_SwitchBlade_300', "name": 'SwitchBlade 300', "why": 'loitering AP - reach past the FPV bubble'},
        {"kind": "veh", "base": 'B_UGV_01_F', "name": 'UGV Stomper', "why": 'ground mule'},
        {"kind": "veh", "base": 'B_UGV_01_rcws_F', "name": 'UGV Stomper RCWS', "why": 'armed ground mule'},
        {"kind": "veh", "base": 'B_UGV_02_Demining_F', "name": 'ED-1D Pelter', "why": 'the mine job, done by a machine'},
        {"kind": "veh", "base": 'B_UAV_06_F', "name": 'AL-6 Pelican', "why": 'cargo lift'},

        # --- the men who carry them ---
        {"kind": "man", "suffix": 'UAVOperator', "name": 'UAV Operator [HIMF]', "backpack": 'B_UAV_01_backpack_F'},
        {"kind": "man", "suffix": 'Crocus_AP_Operator', "name": 'Crocus AP Operator [HIMF]', "backpack": 'B_Crocus_AP_Bag'},
        {"kind": "man", "suffix": 'Crocus_AT_Operator', "name": 'Crocus AT Operator [HIMF]', "backpack": 'B_Crocus_AT_Bag'},
        {"kind": "man", "suffix": 'KVN_AP_Operator', "name": 'KVN AP Operator [HIMF]', "backpack": 'B_KVN_AP_Bag'},
        {"kind": "man", "suffix": 'KVN_AT_Operator', "name": 'KVN AT Operator [HIMF]', "backpack": 'B_KVN_AT_Bag'},

        # --- the SMAW ---
        {"kind": "man", "suffix": "Mk153_Gunner",
         "name": "Missile Specialist (Mk153) [HIMF]",
         "backpack": "B_AssaultPack_rgr",
         "add_weapons": ["JCA_launch_Mk153_olive_F"],
         "add_mags": ["FA_JCA_MK153_Mk6Mod2_HEAA", "FA_JCA_MK153_Mk3Mod2_HEDP"]},
    ],
}

# The man every operator and the SMAW gunner is built from: this faction's own
# rifleman, so each inherits the XMS and the tier-3 ammunition rather than the
# source faction's M16A4.
EXTRA_MAN_BASE = {
    "ghost_HIMF": "Atlas_B_H_Soldier_F",
    "ghost_Insurgents": "Opf_I_I_Soldier_1_F",
    "ghost_Syndikat": "I_C_Soldier_Bandit_7_F",
}

HDR = ("// Generated by tools/gen_us_factions.py - re-run rather than hand-edit.\n"
       "//\n")


# ---------------------------------------------------------------------------
# FA TIER 3 AMMUNITION
# ---------------------------------------------------------------------------
# The US factions are tier 3 (docs/FACTIONS.md), and tier 3 is the FA round as
# built - so every vanilla magazine with an FA equivalent is swapped for that
# round's _t3 variant. A magazine with no FA equivalent is left alone: FA does
# not cover grenades, smoke, chemlights or pistol ammunition, and 73 of the 93
# magazines these factions carry are exactly that.
#
# THE SWAP IS SAFE BECAUSE FA MAGAZINES INHERIT FROM THE VANILLA ONE.
# FA_b_30Rnd_65_EPR descends from 30Rnd_65x39_caseless_mag, so every weapon
# that accepted the vanilla magazine accepts the FA one and its _t3 variant.
#
# WHICH FA ROUND, WHEN SEVERAL DESCEND FROM THE SAME VANILLA MAGAZINE:
#
#   1. Never one from an fa_antidrone* addon. Those are proximity-airburst
#      counter-UAS rounds - Mk367 PAB and friends - and issuing them as ball
#      ammunition would arm the whole army against drones and nothing else.
#   2. Prefer FA_b_ over FA_i_. b is blue, i is the AAF; a US soldier does not
#      carry the AAF's ammunition.
#   3. Anything still tied is named in PICK below, with the reason.
FA_SKIP_ADDONS = ("fa_antidrone",)

PICK = {
    # M80A2 HV is a hybrid case that "feeds existing 7.62 wells"; XM751 CTEP is
    # cased-telescoped and "needs rated well", so it is not a drop-in.
    "20Rnd_762x51_Mag": "FA_b_20Rnd_762_M80A2_HV",
    # The other 40mm rounds are a different NATURE - smoke, EMP, decoy, UGS,
    # jammer. Only the TBK is HE, so only it replaces an HE shell.
    "1Rnd_HE_Grenade_shell": "FA_b_1Rnd_40mm_Mk389_TBK",
    "3Rnd_HE_Grenade_shell": "FA_b_3Rnd_40mm_Mk389_TBK",
    # HEAT for HEAT; the others are guided or anti-air.
    "MRAWS_HEAT_F": "FA_MRAWS_HEAT758_TT",
    # HE for HE; AD and DP are other natures.
    "1Rnd_RC40_HE_shell_RF": "FA_1Rnd_RC40_HEP",
    # ARBITRARY, AND FLAGGED AS SUCH. Both Titan variants are the right nature
    # and nothing in the configs says which the US issues. Change the line and
    # re-run.
    # CSAT'S RIFLE MAGAZINE IS 6.2, NOT 6.5. The green caseless magazine has
    # seven FA descendants - three Type 4x in 6.5 and four DBP in 6.2 - so it
    # was ambiguous and got no substitution at all, leaving the whole faction
    # on vanilla ammunition. DBP-25 is the "caseless standard": DBP-26 is
    # tungsten AP, DBP-88B is the heavy DMR/GPMG load, and DBJ-25 PAB is a
    # proximity airburst driven by the anti-drone fuze registry.
    "30Rnd_65x39_caseless_green": "FA_o_30Rnd_62_DBP25",
    # The leaders' tracer magazine has NO FA descendant of its own, so it fell
    # through the map entirely and left squad and team leaders on vanilla
    # ammunition while their riflemen were on DBP-25. Green to match the round
    # CSAT already fires.
    "30Rnd_65x39_caseless_green_mag_Tracer": "FA_o_30Rnd_62_DBP25_T_Green",
    "Titan_AT": "FA_Titan_AT_BGM185_Broadsword",
    "Titan_AA": "FA_Titan_AA_MIM165_Sentry",
}


def fa_map(addons_dir):
    """vanilla magazine -> the FA magazine a tier-3 US unit should carry."""
    import glob as _glob
    cand = {}
    for mp in _glob.glob(os.path.join(addons_dir, "fa_*", "CfgMagazines.hpp")):
        src = os.path.basename(os.path.dirname(mp))
        if src.startswith(FA_SKIP_ADDONS):
            continue
        txt = io.open(mp, encoding="utf-8", errors="replace").read()
        for m in re.finditer(r"^\s*class (FA_[A-Za-z0-9_]+)\s*:\s*([A-Za-z0-9_]+)",
                             txt, re.M):
            child, parent = m.group(1), m.group(2)
            if parent.startswith("FA_") or "_T_" in child:
                continue          # tracer variants are the same round
            cand.setdefault(parent, []).append(child)

    out = {}
    for van, lst in cand.items():
        if van in PICK:
            out[van] = PICK[van]
            continue
        blue = [c for c in lst if not c.startswith("FA_i_")]
        if len(blue) == 1:
            out[van] = blue[0]
        elif len(lst) == 1:
            out[van] = lst[0]

    # A PICK ENTRY IS AUTHORITATIVE EVEN IF NOTHING INHERITS FROM THE VANILLA
    # MAGAZINE. The loop above only walks magazines that have FA descendants;
    # CSAT's tracer magazine has none, so its mapping would never have been
    # reached and its squad leaders would have quietly kept vanilla rounds.
    for van, fa in PICK.items():
        out.setdefault(van, fa)
    return out, cand



# ---------------------------------------------------------------------------
# FACTION TIER
# ---------------------------------------------------------------------------
# Which FA tier a faction's ammunition is drawn from. 3 is the FA round as
# built and is the default; 4 is peer+, the edge nobody else has.
# Tier 1 and 0 are base game ammunition. gen_fa_tiers generates nothing below
# t2 - "the FA round IS tier 3" and there is no FA round at all down here - so a
# tier 1 faction gets NO substitution and keeps what its source issues. Asking
# for _t1 would name magazines that were never built.
TIER = {"ghost_CSAT": 4, "ghost_Insurgents": 1, "ghost_Syndikat": 0}
DEFAULT_TIER = 3


# ---------------------------------------------------------------------------
# KIT SUBSTITUTION
# ---------------------------------------------------------------------------
# ghost_CSAT is OPF_F's order of battle wearing OPF_T_F's kit - an Iranian
# roster in Chinese green-hex. Mapped item by item rather than by matching each
# man to a Chinese counterpart, because only 61 of OPF_F's 122 men have one:
# the Atlas_O_Soldier_R_* sub-roster and the parade ranks have none at all, and
# a role match would have left half the faction still in hex.
#
# ANYTHING WITH NO GREEN EQUIVALENT IS LEFT AS ISSUED and named in the run
# report - a wetsuit is a wetsuit, and inventing a colour for the RF heavy
# helmets would mean writing a classname that does not exist.
KIT_SWAP = {
    "ghost_CSAT": {
        # --- uniforms ---
        "U_O_CombatUniform_ocamo":       "U_O_T_Soldier_F",
        "U_O_CombatUniform_oucamo":      "U_O_T_Soldier_F",
        "U_O_OfficerUniform_ocamo":      "U_O_T_Officer_F",
        "U_O_PilotCoveralls":            "U_O_T_Pilot_F",
        "U_O_GhillieSuit":               "U_O_T_FullGhillie_tna_F",
        "U_O_FullGhillie_lsh":           "U_O_T_FullGhillie_tna_F",
        "U_O_FullGhillie_sard":          "U_O_T_FullGhillie_tna_F",
        "U_O_FullGhillie_ard":           "U_O_T_FullGhillie_tna_F",
        "U_O_LCF_noInsignia_hex_lxWS":   "Atlas_U_O_CombatFatigues_mhex_F",
        "U_O_LCF_noInsignia_hex_lxws":   "Atlas_U_O_CombatFatigues_mhex_F",
        # --- vests ---
        "V_TacVest_khk":                 "V_TacVest_oli",
        "V_TacVest_gry":                 "V_TacVest_oli",
        "V_HarnessO_brn":                "V_HarnessO_ghex_F",
        "V_HarnessO_gry":                "V_HarnessO_ghex_F",
        "V_HarnessOGL_brn":              "V_HarnessOGL_ghex_F",
        "V_HarnessOGL_gry":              "V_HarnessOGL_ghex_F",
        "V_HarnessOSpec_brn":            "V_HarnessOSpec_ghex_F",
        "V_Chestrig_khk":                "V_TacChestrig_oli_F",
        "V_ChestrigF_khk":               "V_TacChestrig_oli_F",
        "V_BandollierB_khk":             "V_BandollierB_ghex_F",
        "V_BandolierB_khk":              "V_BandollierB_ghex_F",
        "V_Rangemaster_belt_khk":        "V_Rangemaster_belt_ghex_F",
        # --- helmets ---
        "H_HelmetO_ocamo":               "H_HelmetO_ghex_F",
        "H_HelmetO_oucamo":              "H_HelmetO_ghex_F",
        "H_O_Helmet_canvas_ocamo":       "H_HelmetO_ghex_F",
        "H_HelmetO_ocamo_sb_hex_RF":     "H_HelmetO_ghex_F",
        "H_HelmetSpecO_ocamo":           "H_HelmetSpecO_ghex_F",
        "H_HelmetLeaderO_ocamo":         "H_HelmetLeaderO_ghex_F",
        "H_HelmetLeaderO_oucamo":        "H_HelmetLeaderO_ghex_F",
        "H_HelmetCrew_O":                "H_HelmetCrew_O_ghex_F",
        "H_MilCap_ocamo":                "H_MilCap_ghex_F",
    },
}

# Issued unchanged by both factions, or OPF_T_F has no green version at all.
KIT_KEEP = {
    "U_O_Wetsuit", "V_RebreatherIR", "U_O_Protagonist_VR",
    "U_O_ParadeUniform_01_CSAT_F", "U_O_ParadeUniform_01_CSAT_decorated_F",
    "H_ParadeDressCap_01_CSAT_F", "H_Beret_CSAT_01_F", "H_HelmetSpecO_blk",
    "H_PilotHelmetHeli_O", "H_CrewHelmetHeli_O", "H_PilotHelmetFighter_O",
    "H_HelmetHeavy_VisorUp_Hex_RF", "H_HelmetHeavy_Hex_RF",
    "H_HelmetHeavy_Simple_Hex_RF", "V_TacVest_Blk",
}

def is_ram(cls, disp):
    """The Ram 1500s are out of every US faction.

    A civilian pickup with a gun bolted on is an insurgent's answer to not
    having an MRAP. A US or Marine formation has MRAPs, so the technical reads
    as the wrong army the moment it drives past.

    Matched on the display name first, because that is what says Ram; the AT
    variants are matched on the classname instead, because theirs is a raw
    classname with no display name at all. NOT BUILT rather than scoped to 0 -
    a class that does not exist cannot be fielded by anything.
    """
    if disp and disp.startswith("Ram 1500"):
        return True
    return "Pickup" in cls and ("_AT_RF" in cls or "_AT_rf" in cls)


def crlf(path, lines):
    io.open(path, "w", encoding="utf-8", newline="\r\n").write("\n".join(lines) + "\n")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--rpt")
    args = ap.parse_args()

    rpt = args.rpt or R.newest_rpt()
    if not rpt or not os.path.exists(rpt):
        print("no RPT given and none found - pass --rpt <path>")
        return 2

    facside, facprops, units, props, groups, gprops, gmen = R.read(rpt)
    if not units:
        print("%s holds no UNIT records - wrong RPT?" % rpt)
        return 2
    print("read   %s" % rpt)

    ulow = dict((k.lower(), k) for k in units)

    famap, cand = fa_map(ADDONS)
    # A CHOSEN ROUND IS ONLY USABLE IF fa_tiers ACTUALLY BUILT A _t3 FOR IT.
    # Only rounds declaring a lethality figure are tiered, so the two sets are
    # not the same - and a magazine that does not exist is a soldier with none.
    t3 = set()
    tp = os.path.join(ADDONS, "fa_tiers", "CfgMagazines.hpp")
    if os.path.exists(tp):
        t3 = set(re.findall(r"^\s*class ([A-Za-z0-9_]+)_t[234]:",
                            io.open(tp, encoding="utf-8", errors="replace").read(), re.M))
    dropped_no_t3 = sorted(v for v, f in famap.items() if f not in t3)
    famap = dict((v, f) for v, f in famap.items() if f in t3)
    swapped = [0]
    swapped_w = [0]
    kitn = [0]
    kit_unmapped = {}

    total_u = total_g = 0
    dropped = [0]
    for addon, beaut, newfac, disp, src in TARGETS:
        # ---- what this faction fields ---------------------------------
        def keep(c):
            pr = props.get(c, {})
            vc = pr.get("vehicleClass", (None, ""))[1] or ""
            if vc in R.SKIP_VCLASS:
                return False
            return not is_ram(c, pr.get("displayName", (None, ""))[1] or "")

        roster = [c for c, u in units.items()
                  if u["faction"] == src and u["scope"] == 2 and keep(c)]

        mine = [g for g in groups if groups[g].get("faction", "").lower() == src]

        # Anything a group names, at whatever scope - see the header. Resolved
        # case-insensitively: CfgGroups says B_soldier_SL_F where CfgVehicles
        # declares B_Soldier_SL_F, and config does not care which.
        for g in mine:
            for veh, _rank, _pos in R.gmen_values(gmen, g):
                real = ulow.get(veh.lower())
                if real and real not in roster and keep(real):
                    roster.append(real)
        roster = sorted(set(roster))

        if not roster:
            print("  !! %s: source faction %s fields nothing - skipped" % (addon, src))
            continue

        new = dict((c, "%s_%s" % (newfac, c)) for c in roster)
        extra_names = []
        tier = TIER.get(newfac, DEFAULT_TIER)
        tier_sfx = "_t%d" % tier
        kit = KIT_SWAP.get(newfac, {})
        side = units[roster[0]]["side"]

        path = os.path.join(ADDONS, addon)
        if not os.path.isdir(path):
            os.makedirs(path)

        crlf(os.path.join(path, "$PBOPREFIX$"), ["z\\ghost\\addons\\" + addon])
        crlf(os.path.join(path, "script_component.hpp"), [
            "#define COMPONENT " + addon,
            "#define COMPONENT_BEAUTIFIED " + beaut,
            '#include "\\z\\ghost\\addons\\main\\script_mod.hpp"',
            "",
            "// #define DEBUG_MODE_FULL",
            "// #define DISABLE_COMPILE_CACHE",
            "",
            '#include "\\z\\ghost\\addons\\main\\script_macros.hpp"',
        ])

        # ---- CfgFactionClasses ----------------------------------------
        fp = {}
        for k in facprops:
            if k.lower() == src:
                fp = facprops[k]
                break
        L = [HDR.rstrip("\n"),
             "// A NEW FACTION, NOT A CHANGE TO %s. The source faction is left" % src.upper(),
             "// exactly as its mod ships it; this sits beside it, so a mission",
             "// using the original is untouched and the two are one glance apart",
             "// in 3DEN and Zeus.",
             "",
             "class CfgFactionClasses {",
             "    class NO_CATEGORY;",
             "",
             "    class %s: NO_CATEGORY {" % newfac,
             '        displayName = "%s";' % disp,
             "        author = QAUTHOR;",
             "        side = %d;" % side,
             "        priority = %s;" % (fp.get("priority") or "1")]
        for n in ("icon", "flag"):
            if fp.get(n):
                L.append('        %s = "%s";' % (n, fp[n]))
        L += ["    };", "};"]
        crlf(os.path.join(path, "CfgFactionClasses.hpp"), L)

        # ---- CfgVehicles ----------------------------------------------
        L = [HDR.rstrip("\n"),
             "// FORWARD DECLARATIONS, NOT DEPENDENCIES. Every parent below",
             "// belongs to somebody else's mod. Declaring it means a load order",
             "// without that mod gets an inert class rather than a config that",
             "// refuses to build - see requiredAddons in config.cpp.",
             "",
             "class CfgVehicles {"]
        for c in roster:
            L.append("    class %s;" % c)
        L.append("")

        for c in roster:
            u = units[c]
            pr = props.get(c, {})
            gv = lambda n: pr.get(n, (None, None))[1]
            man = R.is_man(gv("vehicleClass") or "", pr)

            L += ["    class %s: %s {" % (new[c], c),
                  "        scope = %d;" % u["scope"],
                  "        scopeCurator = %s;" % (gv("scopeCurator") or "2"),
                  "        author = QAUTHOR;",
                  '        displayName = "%s";' % (gv("displayName") or c),
                  "        side = %d;" % u["side"],
                  '        faction = "%s";' % newfac]
            # vehicleClass and editorSubcategory are NOT re-emitted. The class
            # inherits both from its parent, so writing them again is pure
            # duplication - and it made check_plumbing flag 291 base-game
            # categories it has no reason to know about.
            if not man and gv("crew"):
                # The crew class is the FACTION'S OWN if it fields one, so a
                # ghost_US vehicle does not spawn with somebody else's men.
                L.append('        crew = "%s";' % new.get(gv("crew"), gv("crew")))

            # KIT SUBSTITUTION - see KIT_SWAP. uniformClass and linkedItems
            # are inherited and normally left unstated; a faction wearing
            # somebody else's kit is exactly the case where they must be
            # written out.
            if kit:
                uni = gv("uniformClass")
                if uni:
                    if uni in kit:
                        L.append('        uniformClass = "%s";' % kit[uni])
                        kitn[0] += 1
                    elif uni not in KIT_KEEP:
                        kit_unmapped[uni] = kit_unmapped.get(uni, 0) + 1
                rawl = gv("linkedItems")
                if rawl:
                    outl, hitl = [], False
                    for it in re.findall(r'"([^"]+)"', rawl):
                        # FACEWEAR CANNOT BE A LINKED ITEM. The dump read the
                        # unit's live loadout, and that array includes goggles -
                        # but goggles are CfgGlasses, and a config linkedItems[]
                        # entry is resolved in CfgWeapons. The engine then
                        # fabricates an empty weapon per spawn and floods the
                        # RPT: "creating weapon G_Balaclava_blk with
                        # scope=private" plus forty No-entry lines each time.
                        if it[:2] == "G_":
                            hitl = True
                            continue
                        if it in kit:
                            outl.append(kit[it])
                            kitn[0] += 1
                            hitl = True
                        else:
                            if it[:2] in ("V_", "H_") and it not in KIT_KEEP:
                                kit_unmapped[it] = kit_unmapped.get(it, 0) + 1
                            outl.append(it)
                    if hitl:
                        arrl = "{" + ",".join('"%s"' % x for x in outl) + "}"
                        L.append("        linkedItems[] = %s;" % arrl)
                        L.append("        respawnLinkedItems[] = %s;" % arrl)

            # RIFLE SUBSTITUTION - see RIFLE_SWAP.
            rules = RIFLE_SWAP.get(newfac)
            raww = gv("weapons")
            if rules and raww:
                outw, hitw = [], False
                for wp in re.findall(r'"([^"]+)"', raww):
                    rep = None
                    for test, new_w in rules:
                        if test(wp):
                            rep = new_w
                            break
                    if rep:
                        outw.append(rep)
                        swapped_w[0] += 1
                        hitw = True
                    else:
                        outw.append(wp)
                if hitw:
                    arrw = "{" + ",".join('"%s"' % x for x in outw) + "}"
                    L.append("        weapons[] = %s;" % arrw)
                    L.append("        respawnWeapons[] = %s;" % arrw)

            # FA TIER AMMUNITION - this faction's tier, see TIER. Everything else this class needs - weapons,
            # uniform, vest, linked items - is inherited and deliberately not
            # restated. The magazine list is the exception, because swapping a
            # round is the whole point of a tier.
            raw = gv("magazines")
            if raw and tier >= 2:
                out, hit = [], False
                for mag in re.findall(r'"([^"]+)"', raw):
                    if mag in famap:
                        out.append(famap[mag] + tier_sfx)
                        swapped[0] += 1
                        hit = True
                    else:
                        out.append(mag)
                if hit:
                    arr = "{" + ",".join('"%s"' % x for x in out) + "}"
                    L.append("        magazines[] = %s;" % arr)
                    L.append("        respawnMagazines[] = %s;" % arr)

            L.append("    };")
            total_u += 1

        extra = EXTRA_UNITS.get(newfac, [])
        if extra:
            L.append("    // ---- fielded by this faction, not by its source ----")
            L.append("    // NEW CLASSES, NOT A SCRIPT. A man either is a drone")
            L.append("    // operator or is not; picking men out of a spawning group")
            L.append("    // and handing them a bag is a group composition decision,")
            L.append("    // and group composition is CfgGroups' job.")
            L.append("")
            manbase = EXTRA_MAN_BASE.get(newfac)
            for e in extra:
                if e["kind"] == "veh":
                    base = e["base"]
                    cls = "%s_%s" % (newfac, base)
                    if base not in new:
                        L.append("    class %s;" % base)
                    L.append("    class %s: %s {" % (cls, base))
                    L += ["        scope = 2;",
                          "        scopeCurator = 2;",
                          "        author = QAUTHOR;",
                          '        displayName = "%s";' % e["name"],
                          "        side = %d;" % side,
                          '        faction = "%s";' % newfac]
                    if e.get("tex"):
                        # hiddenSelectionsTextures, NOT a TextureSources entry -
                        # this is the skin it wears when it spawns, not an option
                        # in the editor's dropdown.
                        L.append("        hiddenSelectionsTextures[] = {")
                        for i, t in enumerate(e["tex"]):
                            L.append('            "%s"%s' % (t, "," if i < len(e["tex"]) - 1 else ""))
                        L.append("        };")
                    L.append("    };%s" % ("   // " + e["why"] if e.get("why") else ""))
                else:
                    # A rifleman who carries one system instead of a rucksack.
                    parent = new.get(manbase, manbase)
                    cls = "%s_%s" % (newfac, e["suffix"])
                    L += ["    class %s: %s {" % (cls, parent),
                          "        scope = 2;",
                          "        scopeCurator = 2;",
                          "        author = QAUTHOR;",
                          '        displayName = "%s";' % e["name"],
                          '        faction = "%s";' % newfac,
                          '        backpack = "%s";' % e["backpack"]]
                    if e.get("add_weapons"):
                        # += APPENDS. Writing weapons[] = {...} here would take
                        # away the rifle, the sidearm and the binoculars along
                        # with everything else the parent gave him.
                        a = ",".join('"%s"' % w for w in e["add_weapons"])
                        L.append("        weapons[] += {%s};" % a)
                        L.append("        respawnWeapons[] += {%s};" % a)
                    if e.get("add_mags"):
                        a = ",".join('"%s"' % w for w in e["add_mags"])
                        L.append("        magazines[] += {%s};" % a)
                        L.append("        respawnMagazines[] += {%s};" % a)
                    L.append("    };")
                extra_names.append(cls)
                total_u += 1
            L.append("")

        L.append("};")
        crlf(os.path.join(path, "CfgVehicles.hpp"), L)

        # ---- CfgGroups -------------------------------------------------
        sidecls = {0: "East", 1: "West", 2: "Indep", 3: "Civ"}.get(side, "West")
        L = [HDR.rstrip("\n"),
             "// EVERY MAN IS THIS FACTION'S OWN. A group that named the source",
             "// faction's classes would field somebody else's units under our",
             "// name; each vehicle below is the ghost_ class declared in",
             "// CfgVehicles.hpp.",
             "",
             "class CfgGroups {",
             "    class %s {" % sidecls,
             "",
             "        class %s {" % newfac,
             '            name = "%s";' % disp,
             ""]
        tree = collections.defaultdict(list)
        for g in mine:
            tree[groups[g]["cat"]].append(g)
        for cat in sorted(tree):
            L += ["            class %s {" % cat,
                  '                name = "%s";' % cat,
                  ""]
            for g in sorted(tree[cat], key=lambda x: groups[x]["cls"]):
                gp = gprops.get(g, {})
                gname = groups[g].get("name") or gp.get("name", "")
                gcls = "%s_%s" % (newfac, groups[g]["cls"])
                L.append("                class %s {" % gcls)
                if gname:
                    L.append('                    name = "%s";' % gname)
                L += ["                    side = %d;" % side,
                      '                    faction = "%s";' % newfac]
                if gp.get("icon"):
                    L.append('                    icon = "%s";' % gp["icon"])
                if gp.get("rarityGroup"):
                    L.append("                    rarityGroup = %s;" % gp["rarityGroup"])
                men = []
                for veh, rank, pos in R.gmen_values(gmen, g):
                    real = ulow.get(veh.lower())
                    if real and real in new:
                        men.append((real, rank, pos))
                    else:
                        dropped[0] += 1
                for i, (veh, rank, pos) in enumerate(men):
                    L += ["", "                    class Unit%d {" % i,
                          "                        side = %d;" % side,
                          '                        vehicle = "%s";' % new.get(veh, veh)]
                    if rank:
                        L.append('                        rank = "%s";' % rank)
                    L.append("                        position[] = %s;"
                             % (R.cfg_arr(pos) or "{0,0,0}"))
                    L.append("                    };")
                L += ["                };", ""]
                total_g += 1
            L += ["            };", ""]
        L += ["        };", "    };", "};"]
        crlf(os.path.join(path, "CfgGroups.hpp"), L)

        # ---- config.cpp -------------------------------------------------
        L = ['#include "script_component.hpp"',
             "",
             "class CfgPatches {",
             "    class ADDON {",
             "        name = COMPONENT_NAME;",
             "        units[] = {"]
        allunits = [new[c] for c in roster] + extra_names
        L += ["            \"%s\"%s" % (u_, "," if i < len(allunits) - 1 else "")
              for i, u_ in enumerate(allunits)]
        L += ["        };",
              "        weapons[] = {};",
              "        requiredVersion = REQUIRED_VERSION;",
              "        // ghost_fa_tiers IS NOT REQUIRED, DELIBERATELY. The tier",
              "        // magazines are named as STRINGS in magazines[]; nothing here",
              "        // inherits from them, so there is no load order to enforce.",
              "        // Requiring it was fatal: fa_tiers requires fa_rhs, fa_sps,",
              "        // fa_e22raf and fa_jca, which require RHS, SPS, E22 and JCA -",
              "        // and with skipWhenMissingDependencies any one of those absent",
              "        // dropped this whole faction out of 3DEN and Zeus in silence.",
              "        //",
              "        // NOTHING FROM THE SOURCE FACTION'S MOD IS REQUIRED EITHER.",
              "        // Every parent class is forward-declared in CfgVehicles.hpp, so a",
              "        // load order without that mod gets inert classes instead of a",
              "        // broken config. skipWhenMissingDependencies does the rest.",
              '        requiredAddons[] = {"ghost_main"};',
              "        skipWhenMissingDependencies = 1;",
              "        author = QAUTHOR;",
              "        VERSION_CONFIG;",
              "    };",
              "};",
              "",
              '#include "CfgFactionClasses.hpp"',
              '#include "CfgVehicles.hpp"',
              '#include "CfgGroups.hpp"']
        crlf(os.path.join(path, "config.cpp"), L)

        print("  %-20s %-18s %4d unit(s)  %3d group(s)"
              % (addon, newfac, len(roster), len(mine)))

    print("wrote  %d addon(s), %d unit class(es), %d group(s)"
          % (len(TARGETS), total_u, total_g))
    if kitn[0]:
        print("       %d kit item(s) substituted" % kitn[0])
    if kit_unmapped:
        # NOT SILENT. An item with no equivalent stays as it was, and which
        # ones those are is the difference between a deliberate gap and a miss.
        print("       %d item(s) had no mapping - left as issued:" % len(kit_unmapped))
        for k in sorted(kit_unmapped, key=lambda x: -kit_unmapped[x])[:8]:
            print("         %-42s x%d" % (k, kit_unmapped[k]))
    if swapped_w[0]:
        print("       %d rifle(s) substituted" % swapped_w[0])
    print("       %d magazine slot(s) swapped to FA tier 3, via %d mapping(s)"
          % (swapped[0], len(famap)))
    if dropped_no_t3:
        # NOT SILENT. These have an FA round but fa_tiers built no _t3 for it,
        # so the unit keeps its vanilla magazine.
        print("       %d magazine(s) have an FA round with no _t3 - left vanilla:"
              % len(dropped_no_t3))
        for v in dropped_no_t3[:6]:
            print("         %s" % v)
    if dropped[0]:
        # SAID OUT LOUD - a squad quietly one man short is worse than a note.
        print("       %d group slot(s) dropped, the vehicle is not in the faction"
              % dropped[0])
    return 0


if __name__ == "__main__":
    sys.exit(main())
