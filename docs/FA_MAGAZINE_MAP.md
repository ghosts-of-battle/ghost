# Vanilla to futureAmmo magazine map

Every magazine swap the Ghost factions make. Generated from the `MAP` / `TMAP`
tables in `tools/gen_us.py`, `tools/gen_opfr.py` and `tools/gen_fdf35.py`, which
are what the faction configs were built from -- if a swap is not in here, the
vanilla magazine was kept on purpose.

**Used by** is which generator declares the swap: **US** = the twelve
`faction_b_us_*` factions, **OPFR** = `faction_o_opfr`, **FDF** = `faction_b_fdf35`.
Where several declare the same vanilla magazine they all agree on the result --
there are no conflicting mappings.

## Tracer colour

The names below are FA *base* names. The generators append `_T_<colour>` when
futureAmmo ships that tint, and fall back to the untinted class when it does
not, so `FA_30Rnd_65_EPR` becomes `FA_30Rnd_65_EPR_T_Red` or
`FA_30Rnd_65_EPR_T_Green` in the actual configs. Colour is per faction:

| Faction | Tracer |
|---|---|
| `faction_b_us_*` arid / desert / ocp / snow | Red |
| `faction_b_us_*` tropical / woodland | Green |
| `faction_b_fdf35`, `faction_o_turkmenistan` | Red |
| `faction_o_iran` | Green |
| `faction_i_afghanistan` | Yellow |

## Inventory magazines

Carried magazines -- `magazines[]` / `respawnMagazines[]` on infantry, and cargo.

| Vanilla magazine | futureAmmo magazine | Used by |
|---|---|---|
| `30Rnd_545x39_AK12_Mag_F` | `FA_Aegis_30Rnd_545x39_7N44` | OPFR |
| `30Rnd_545x39_AK12_Mag_Tracer_F` | `FA_Aegis_30Rnd_545x39_7N44` | OPFR |
| `45Rnd_545x39_AK12_Mag_F` | `FA_Aegis_45Rnd_545x39_7N44` | OPFR |
| `60Rnd_545x39_AK12_Mag_F` | `FA_Aegis_60Rnd_545x39_7N44` | OPFR |
| `75Rnd_545x39_AK12_Mag_F` | `FA_Aegis_60Rnd_545x39_7N44` | OPFR |
| `20Rnd_556x45_UW_mag` | `FA_30Rnd_556_Mk327_HV` | US |
| `30Rnd_556x45_Stanag` | `FA_30Rnd_556_Mk327_HV` | US, FDF |
| `30Rnd_556x45_Stanag_Tracer_Red` | `FA_30Rnd_556_Mk327_HV` | US |
| `30Rnd_556x45_Stanag_red` | `FA_30Rnd_556_Mk327_HV` | US |
| `KAR_FDF35_556_PMAG` | `FA_30Rnd_556_Mk327_HV` | FDF |
| `100Rnd_65x39_caseless_black_mag` | `FA_100Rnd_65_Mk328_Black` | US |
| `100Rnd_65x39_caseless_khaki_mag` | `FA_100Rnd_65_Mk328_Khaki` | US |
| `100Rnd_65x39_caseless_mag` | `FA_100Rnd_65_Mk328` | US |
| `100Rnd_65x39_caseless_mag_Tracer` | `FA_100Rnd_65_Mk328` | US |
| `200Rnd_65x39_cased_Box` | `FA_200Rnd_65_Mk328` | US, FDF |
| `200Rnd_65x39_cased_Box_Red` | `FA_200Rnd_65_Mk328` | FDF |
| `200Rnd_65x39_cased_Box_Tracer` | `FA_200Rnd_65_Mk328` | US |
| `30Rnd_65x39_caseless_black_mag` | `FA_30Rnd_65_EPR_Black` | US, FDF |
| `30Rnd_65x39_caseless_black_mag_Tracer` | `FA_30Rnd_65_EPR_Black` | US |
| `30Rnd_65x39_caseless_khaki_mag` | `FA_30Rnd_65_EPR_Khaki` | US |
| `30Rnd_65x39_caseless_khaki_mag_Tracer` | `FA_30Rnd_65_EPR_Khaki` | US |
| `30Rnd_65x39_caseless_mag` | `FA_30Rnd_65_EPR` | US, FDF |
| `30Rnd_65x39_caseless_mag_Tracer` | `FA_30Rnd_65_EPR` | US |
| `30Rnd_762x39_AK12_Lush_Mag_F` | `FA_30Rnd_762x39_7N43` | OPFR |
| `30rnd_762x39_AK12_Lush_Mag_F` | `FA_30Rnd_762x39_7N43` | OPFR |
| `75Rnd_762x39_AK12_Lush_Mag_F` | `FA_75Rnd_762x39_7N43` | OPFR |
| `20Rnd_762x51_Mag` | `FA_20Rnd_762_M80A2_HV` | US, FDF |
| `Aegis_20Rnd_762x51_SMAG` | `FA_20Rnd_762_M80A2_HV` | FDF |
| `10Rnd_762x54_Mag` | `FA_Aegis_10Rnd_762x54_SVD_HV` | OPFR |
| `150Rnd_762x54_Box` | `FA_150Rnd_762x54_Box` | US, OPFR, FDF |
| `10rnd_127x55_mag_rf` | `FA_10Rnd_127x55_7N52` | OPFR |
| `20rnd_127x55_mag_rf` | `FA_20Rnd_127x55_7N52` | OPFR |
| `10Rnd_338_Mag` | `FA_10Rnd_338_Mk371_300gr` | US |
| `130Rnd_338_Mag` | `FA_130Rnd_338_Mk372` | US |
| `7Rnd_408_Mag` | `FA_10Rnd_408_Mk240` | US, FDF |
| `1Rnd_HE_Grenade_shell` | `FA_1Rnd_40mm_Mk380_NRP` | US, OPFR, FDF |
| `3Rnd_HE_Grenade_shell` | `FA_1Rnd_40mm_Mk380_NRP` | US, OPFR, FDF |
| `Titan_AA` | `FA_Titan_AA_MIM165_Sentry` | US |
| `Titan_AT` | `FA_Titan_AT_BGM185_Broadsword` | US |
| `KAR_FDF35_RK_MAG` | `FA_30Rnd_762x39_7N43` | FDF |

## Turret magazines

Vehicle turret loadouts -- `Turrets >> MainTurret >> magazines[]`. Only the
weapons futureAmmo actually wires appear here; every other turret keeps its
vanilla belt.

| Vanilla magazine | futureAmmo magazine | Used by |
|---|---|---|
| `2000Rnd_65x39_Belt_Tracer_Red` | `FA_200Rnd_65_Mk328` | US |
| `2000Rnd_65x39_belt_Tracer_Red` | `FA_200Rnd_65_Mk328` | US |
| `200Rnd_762x51_Belt_Red` | `FA_200Rnd_762_M80A2_HV` | US, OPFR, FDF |
| `200Rnd_762x51_Belt_Tracer_Red` | `FA_200Rnd_762_M80A2_HV` | US |
| `100Rnd_127x99_mag_Tracer_Red` | `FA_200Rnd_127_Mk258` | US, OPFR, FDF |
| `200Rnd_127x99_mag_Tracer_Red` | `FA_200Rnd_127_Mk258` | US, OPFR, FDF |
| `500Rnd_127x99_mag_Tracer_Red` | `FA_200Rnd_127_Mk258` | US |
| `130Rnd_338_Mag` | `FA_130Rnd_338_Mk372` | US |
| `200Rnd_338_Mag` | `FA_200Rnd_338_Mk372` | US |
| `680Rnd_35mm_AA_shells_Tracer_Red` | `FA_680Rnd_35mm_AHEAD` | US, OPFR |
| `12Rnd_120mm_APFSDS_shells_Tracer_Red` | `FA_30Rnd_120mm_APFSDS` | US, OPFR, FDF |
| `12Rnd_120mm_HEAT_MP_T_Red` | `FA_30Rnd_120mm_HEATMP` | US |
| `12Rnd_120mm_HE_shells_Tracer_Red` | `FA_30Rnd_120mm_AMP` | US |
| `24Rnd_120mm_APFSDS_shells_Tracer_Red` | `FA_30Rnd_120mm_APFSDS` | US |
| `8Rnd_120mm_HEAT_MP_T_Red` | `FA_30Rnd_120mm_HEATMP` | US, OPFR, FDF |
| `8Rnd_120mm_HE_shells_Tracer_Red` | `FA_30Rnd_120mm_AMP` | US, OPFR, FDF |
| `2Rnd_155mm_Mo_Cluster` | `FA_2Rnd_155mm_sfm_B` | US, FDF |
| `2Rnd_155mm_Mo_LG` | `FA_4Rnd_155mm_lgm_B` | US, FDF |
| `32Rnd_155mm_Mo_shells` | `FA_32Rnd_155mm_heer_B` | US, FDF |
| `4Rnd_155mm_Mo_guided` | `FA_4Rnd_155mm_apmi_B` | US, FDF |
| `6Rnd_155mm_Mo_AT_mine` | `FA_6Rnd_155mm_atmine_B` | US, FDF |
| `6Rnd_155mm_Mo_mine` | `FA_6Rnd_155mm_apmine_B` | US, FDF |
| `6Rnd_155mm_Mo_smoke` | `FA_6Rnd_155mm_smk_B` | US, FDF |
| `12Rnd_230mm_rockets` | `FA_12Rnd_230mm_gmlrsu_B` | US, FDF |
| `8Rnd_82mm_Mo_shells` | `FA_8Rnd_82mm_Mo_shells` | FDF |

## Deliberately not swapped

Kept vanilla because futureAmmo has no counterpart, or the swap is not wanted:
pistol magazines, hand grenades, smoke and chemlights, mines and satchels,
NLAW / MRAWS / RPG launchers, countermeasure flares and chaff, and every turret
weapon absent from the table above (autocannons, GMGs, AA missile pods, the
Titan pods on vehicles).

## Not covered by the tables

Six FA magazines appear in faction configs without a table entry -- they were
placed by hand rather than mapped from a vanilla class, so there is no
vanilla equivalent to list:

| futureAmmo magazine | Addon |
|---|---|
| `FA_30Rnd_556x45_AP_Stanag_RF` | `faction_b_fdf` |
| `FA_ACE_20Rnd_762x51_M993_AP` | `faction_b_fdf` |
| `FA_e22raf_10Rnd_762x54_VS121_HV` | `faction_o_raf` |
| `FA_e22raf_16Rnd_762x54_SVD12_HV` | `faction_o_raf` |
| `FA_e22raf_30Rnd_545x39_AK12_7N44` | `faction_o_raf` |
| `FA_e22raf_75Rnd_545x39_RPK12_7N44` | `faction_o_raf` |
