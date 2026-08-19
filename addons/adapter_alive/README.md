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

## Whose ground is whose

`taorFor` answers "where is this side's ground", and eight systems steer off
it — the pre-spawn gate, air defence, QRF origins, insurgent safe houses, drone
patrols and caches. **A placement belongs to the side its own `faction` names,**
not to whatever it is synchronised to.

That distinction is the whole function. It used to read each commander's
`synchronizedObjects` and treat every placement found there as that commander's
own — which is wrong on any mission that syncs every placement to every OPCOM,
a normal way to build the map and what this collection's Tanoa mission does.
All three sides came back owning `red`, `blue` **and** `green`, every side
therefore "owned" the whole island, and the gate that was supposed to keep
hardware at home passed everything: fifty-five drone patrols in one run, not one
gate refusal, green drones orbiting inside the red TAOR and red ones inside the
green.

A placement with no faction of its own — ALiVE's IED module — falls back to the
commander it is synced to, and only when that is exactly one. Two commanders and
nobody can say whose ground it describes, so it is dropped and said once in the
RPT rather than handed to both.

`#ghostreads` prints each side's TAOR and blacklist, which is how you check a
mission's wiring in ten seconds.

<!-- generated below this line by tools/gen_addon_readmes.py - do not edit -->

## Requires

- `ghost_main`
- `ghost_common`
- `cba_xeh` _(external)_
- `ALiVE_main` _(external)_

Carries `skipWhenMissingDependencies` - the PBO is skipped rather than breaking the load order when something above is absent.

## Ships

24 functions.

## Functions

<details><summary>24</summary>

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
- `ghost_adapter_alive_fnc_profileIgnore`
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
