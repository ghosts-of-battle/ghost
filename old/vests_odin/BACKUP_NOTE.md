# vests_odin backup (2026-07-19)

Backup of the **self-contained** Odin Rig addon (ACP `V_CarrierRigBW`, author Jamie/Aegis Team),
taken before any Atlas re-integration. This copy is in `old/` so HEMTT does NOT build it.

## Why this exists
The active `addons/vests_odin` vendors the Odin models as **ODOL (binarized, non-editable)**
p3d from `acp_main.pbo`, and overrides the baked ACP materials via `hiddenSelectionsMaterials`
so it needs **no Atlas/ACP dependency at runtime**. The editable MLOD source of
`V_CarrierRigBW_*.p3d` is NOT in the Aegis public repo (only textures + a commented-out config).

## If Atlas (A3_Atlas_Characters_F_Atlas) is re-added later
Two paths, kept open by this backup:
- **Keep self-contained** (current active addon) — nothing to do; it works with or without Atlas.
- **Switch to inheriting the real Atlas models** — have the ghost base classes inherit the
  Atlas `V_CarrierRigBW_*_F` classes (drop the vendored p3d + material overrides), add
  `A3_Atlas_Characters_F_Atlas` to requiredAddons. Restore/diff against this copy if needed.

Restore with: `cp -r old/vests_odin addons/vests_odin` (then `hemtt check`).
