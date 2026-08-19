# AGENTS.md

Arma 3 mod "Ghost" (Ghosts of Battle), built with HEMTT. 91 addons + 3 optionals.
Windows + PowerShell; Python 3 is required for the `tools/` scripts.

## Commands

- `hemtt build` — debug build into `.hemttout/build`
- `hemtt release` — stages `.hemttout/release`, archives `releases/`. Hooks run automatically: `pre_release/01_addcopy.rhai` merges `3rdparty/addons` + `3rdparty/keys` into the release, and `post_release/01_bump_build.rhai` bumps `BUILD` in `addons/main/script_version.hpp`.
- `hemtt check` — HEMTT lints (SQF, config, stringtables). Also the first thing `check_all.py` runs.
- `hemtt launch [profile]` — launches Arma. Profiles (`default`/`ace`/`cup`/`ww2`) and their workshop mods live in `.hemtt/launch.toml`.
- `python tools/check_all.py` — **the verification gate**: `hemtt check` + 9 custom checks, non-zero on any failure. Run before committing/building. Individual checks live in `tools/check_*.py` (`sqf_validator.py`, `config_style_checker.py`, `stringtable_validator.py`, `check_art.py`, `check_readmes.py`, `check_invariants.py`, `check_plumbing.py`, `check_ctab_configs.py`).
- `python tools/gen_docs.py` — regenerates `docs/` (README.md, ADDONS.md, SETTINGS.md, MODULES.md). These are generated; never hand-edit. `check_readmes.py` fails if any addon README's generated half is stale — re-run the generator after changing an addon.
- `python tools/new_component.py <name>` — scaffolds a new addon from `extras/blank` (run from repo root).

## Architecture rules (enforced — treat as load-bearing)

- **Adapter seam**: only `addons/adapter_alive` may name ALiVE symbols (`ALiVE_*`, `ALIVE_*`, `OPCOM_instances`). Everything else routes through its event contract. `check_invariants.py` fails the build on any other reference.
- **Sides typed once (D59)**: `enemy_side` (Ghost - Enemy) and `player_side` (Ghost - Core) are the only allowed force-allegiance attributes; derive other sides from them. A new side attribute is a regression.
- **CBA settings are OPERATION values only** — ranges, counts, chances, timers. Never WHERE or WHO; location/identity derive from ALiVE data (TAORs, commanders, clusters) or map markers, never from a setting.
- **ALiVE wins**: ghost hunts what ALiVE places; ghost spawns only what ALiVE doesn't (coastal, caches, QRF, leaders), and every ghost spawn is profiled.
- **No dead knobs**: every module attribute, CBA setting, and XEH-referenced script must be read/used somewhere — `check_plumbing.py` fails otherwise. Every literal `vehicleClass` and module `category` must name a real class.

## Layout and gotchas

- Addon layout is ACE-style: `config.cpp`, `script_component.hpp` (COMPONENT define + DEBUG_MODE_FULL switches), `XEH_preInit/postInit/preStart.sqf`, `XEH_PREP.hpp`, `functions/fnc_*.sqf`, `initSettings.inc.sqf`, `README.md`, `$PBOPREFIX$`. New systems follow docs/new.md: module variables for everything configurable, thin custom code.
- `addons/adminpanel` is **GPL-3** and ships as its own PBO. Never move code between it and the APL-SA addons (see root README).
- `3rdparty/` is merged by a release hook — never copy it into `addons/`.
- `.hemttout/`, `releases/`, `*.pbo`, `*.biprivatekey` are gitignored build output. `tools/*.py` and `tools/art/` generators must never ship in a PBO (excluded in `.hemtt/project.toml`).
- `work/`, `old/`, `bad/`, `backups/` are scratch, not source of truth. `docs/new.md` is the live design + build log; `docs/TESTS.md` is the test plan; `work/CLAUDE.md` describes only a drone/EW subproject.
- Version lives in `addons/main/script_version.hpp`; `BUILD` auto-bumps on every release, so do not hand-bump it.
