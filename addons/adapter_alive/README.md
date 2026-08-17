# ALiVE Adapter

`ghost_adapter_alive`

The only addon allowed to know ALiVE exists (rule 4 of docs/new.md, enforced
by tools/check_invariants.py). Pure translation: ALiVE's hashes and
registries in, plain ghost arrays out. Without the ALiVE mod the whole PBO is
skipped and every consumer's guard gets nothing.

Right now it is **slice zero only** (new.md section 9) - the four probes that
must pass in a live mission before any feature is built on top:

    #ghost alive.reads      commanders, controltype, TAORs, AA pool
    #ghost alive.squad      spawn -> profile -> waypoint, watch it walk in
    #ghost alive.fire       one ARTY_REQUEST
    #ghost alive.capture    hold a test objective, see the capture event

Each probe prints what it READ as well as what it did, so a wrong assumption
about ALiVE's internals is falsified in one run instead of silently producing
an empty system three phases later.

<!-- generated below this line by tools/gen_addon_readmes.py - do not edit -->

## Requires

- `ghost_main`
- `ghost_common`
- `cba_xeh` _(external)_
- `ALiVE_main` _(external)_

Carries `skipWhenMissingDependencies` - the PBO is skipped rather than breaking the load order when something above is absent.

## Ships

23 functions.

## Functions

<details><summary>23</summary>

- `ghost_adapter_alive_fnc_aaTargets`
- `ghost_adapter_alive_fnc_artyTargets`
- `ghost_adapter_alive_fnc_bumpHostility`
- `ghost_adapter_alive_fnc_clusterCandidates`
- `ghost_adapter_alive_fnc_commanders`
- `ghost_adapter_alive_fnc_getData`
- `ghost_adapter_alive_fnc_installations`
- `ghost_adapter_alive_fnc_nearProfiles`
- `ghost_adapter_alive_fnc_objectivesFor`
- `ghost_adapter_alive_fnc_postReport`
- `ghost_adapter_alive_fnc_probe`
- `ghost_adapter_alive_fnc_profileAlive`
- `ghost_adapter_alive_fnc_profileGroup`
- `ghost_adapter_alive_fnc_profileIdOf`
- `ghost_adapter_alive_fnc_profileObjects`
- `ghost_adapter_alive_fnc_profileWaypoint`
- `ghost_adapter_alive_fnc_ready`
- `ghost_adapter_alive_fnc_requestFire`
- `ghost_adapter_alive_fnc_setData`
- `ghost_adapter_alive_fnc_supportAssets`
- `ghost_adapter_alive_fnc_supportSitrep`
- `ghost_adapter_alive_fnc_supportTask`
- `ghost_adapter_alive_fnc_taorFor`

</details>
