# Setting up hacking

Everything here is optional. With the addon loaded and nothing placed, players
who carry the kit can already hack comm towers for intel. The modules add
objectives, tuning and the remote-hack feature on top of that.

---

## 1. Issue the kit

Two separate items, both in the arsenal under Items.

| Item | Class | What it does |
|---|---|---|
| **Intrusion Tablet** | `ghost_hacking_tabletItem` | Required to hack anything. 20 mass. |
| **Signal Scanner** | `ghost_hacking_scannerItem` | Handheld RF display. Optional, and needs no ISR flag. |

The tablet is what you hack **with**; the scanner tells you whether hacking here
is a good idea.

## 2. Flag your operators

Carrying a tablet is not enough — the carrier must also be an ISR operator:

```sqf
this setVariable ["isISR", true];
```

Ghost only ever **reads** this. Set it from your mission framework, a unit init,
or a role-assignment script.

Kit and training are separate on purpose: picking a tablet off a body does not
make you an operator, and an operator with no tablet gets nothing.

> **If the menu entry is missing**, you are not carrying a tablet. If it is
> there but refuses to open, you are not flagged ISR — it tells you which.
> `#ghost hack.isr` reports what the mod can see.

To drop the ISR requirement entirely, turn off **Require ISR operator** in
CBA settings.

## 3. Place modules (all optional)

Under **Ghost - Modules** in Eden.

### Hack Intel Targets

The objective pool. Synchronise objects, units, or Intel Target Spots to it. A
successful hack puts a **permanent search circle** on one of them.

| Attribute | Default | Notes |
|---|---|---|
| Marker Text | `Signal Intercept` | Label on the circle |
| Marker Icon | *(blank)* | Optional icon at the **circle's** centre — which is deliberately not the objective. Usually leave blank. |
| Marker Colour | `ColorRed` | |
| Max Range (m) | `0` | Only mark a target within this of the hacker. 0 = any distance |
| **Pick Per Class** | `0` | How many of **each** class of candidate are real. 0 = all |
| **Class Limits** | *(blank)* | Per-class exceptions: `Land_Cargo20_military_green_F: 3, B_Truck_01_box_F: 1` |
| Clear Unpicked | Off | Off leaves losers standing as decoys — usually the better search |
| **Repair & Rearm** | Off | Live targets rearm and heal over time. **A destroyed target is never repaired** |
| Maintain Interval (sec) | `60` | Between a target's maintenance passes |
| Repair Per Pass | `0.25` | Damage healed each pass. 0 = rearm only |
| Replace Crew | On | A target whose crew has been shot out gets a new one |
| One Shot | On | A target is only ever revealed once |

**Repair & Rearm** separates *wearing a target down* from *killing it*. Without
it, a strafing run that leaves a SAM site at 90% damage has neutralised it
permanently without anyone finishing the job. With it, non-fatal damage is
temporary and the only way to take the objective off the board is to destroy it.

Destroyed targets are never touched — the `alive` test is a hard gate, not a
tidy-up, because `setDamage` on a wreck can bring a vehicle back in Arma.

### Intel Target Spot

A candidate location. Place twenty, sync them all to a Hack Intel Targets
module, set Pick Per Class to five — and neither you nor the players know which
five are real until the mission runs.

| Attribute | Default | Notes |
|---|---|---|
| Spawn Class | *(blank)* | Object created here if this spot wins. Also the grouping key for the draw. Blank = use the objects synchronised to this spot instead |
| Crew It | On | Crews the spawned object. **`createVehicle` makes an EMPTY vehicle** — a radar or SAM site spawned without this just stands there doing nothing |
| Crew Side | Auto | Auto uses the class's own faction, right for anything named `O_` or `B_` |
| Datalink | On | Puts it on its side's sensor network, so a radar feeds the launchers |
| Init (SQF) | *(blank)* | Run on the server for each object this spot produces, once placed. Passed `[_object, _spot]` |

> **Spawning radars, SAMs or guns?** Leave Crew It on. An uncrewed launcher is a
> silent failure — it looks exactly like a working objective and never fires.
> Crates and props have no crew positions and are unaffected either way.

**Does it need syncing?** Two different things, and only one is required:

- **Spot → Hack Intel Targets module.** Required to enter the draw. That sync is
  how the parent finds its candidates. A spot with **no** parent is not drawn for
  at all — it just populates, every run, which is a fine way to say "a target is
  always here".
- **Objects → spot.** Only when Spawn Class is blank. With a Spawn Class set, the
  spot builds its own and needs nothing synced to it.

Ten spots spawning one class and ten spawning another are **two classes**, so
Pick Per Class 5 gives five of each. The mix stays designed; only the placement
is random.

**Init** runs after the object is placed and oriented, on the server:

```sqf
// _this select 0 is the object, _this select 1 is the spot
(_this select 0) setVariable ["myCache", true, true];
[_this select 0, ["Land_Sacks_goods_F", 3]] call myMission_fnc_dressCache;
```

It also runs for objects that were pre-placed and synchronised to the spot, not
only for spawned ones — a cache you built by hand gets the same setup line as one
the spot created.

### Hacking Settings

Pure tuning. Every value falls back to the same default without it.

Hack time, range, cooldown, abandon timeout, Local Picture radius, EW response
chance, intel marker lifetime/alpha/fade, combat-interrupts, and:

| Attribute | Default | Notes |
|---|---|---|
| Target Circle Radii (m) | `4000,3000,2000,1000` | Each hack on the same objective steps to the next. Past the end, the last repeats |
| Target Circle Offset (%) | `75` | How far the circle is thrown off the objective, as a share of its own radius. Under 100 always still covers it |

### Remote Unit Hack

Place one and enemy soldiers within 800 m become hackable devices. Without it
the feature does not exist — no module, no menu entry, nothing to configure away.

Carries its own range, time, fail chance and failure-package attributes
(area alert, self-jamming).

---

## 4. What players do

**Tablet** — ACE self-interaction → *Hacking Tablet*.

Left column lists every device in range; right column the intel to pull. **Pick
the intel before you start.** Progress runs along the bottom; closing the tablet
**pauses** the hack rather than cancelling it, but walking out of range drops the
signal.

Devices that can appear:

| Kind | Range | Notes |
|---|---|---|
| Comm tower / EW emitter | 20 m | Cooldown per tower; EW emitters may dispatch a drone response |
| Hostile UAV | 400 m | One action only: down it |
| Downed UAV | 25 m | A wreck still has a data card. Full intel list, no counter-detection |
| Enemy soldier | 800 m | Only with a Remote Unit Hack module placed |

Intel products:

- **Local Picture** — enemy contacts near the hacked point, one icon per group.
  Folds in ALiVE virtualized profiles if ALiVE is loaded.
- **SIGINT Hint** — one circle over the densest enemy cluster. Where the weight
  is, not what it is.
- **Locate Jammer / Detector** — needs the Electronic War Zones addon.
- **Mark Intel Target** — needs a Hack Intel Targets module.

**Scanner** — ACE self-interaction → *Signal Scanner*, or **Ctrl+U**.
UAV proximity, jamming level, mesh, your own net, and a stopwatch on
**Ctrl+Shift+U** (press to start, again to stop, again to clear). Both keys are
rebindable under **Ghosts of Battle** in CBA keybinds. Drag the display with
*Move Scanner HUD* in self-interaction.

## 5. How the objective marking works

This is the part worth understanding before you build a mission around it.

- **One objective at a time.** A second is not offered until the first is
  destroyed.
- **The circle narrows.** First hack 4000 m, then 3000, 2000, 1000, then holds.
- **It is off-centre**, by 75% of its own radius on a **fresh random bearing
  every hack** — so the objective is always inside, never in the middle, and two
  fixes from different directions overlap on far less ground than either alone.
- **It is permanent**, and clears only when the objective is destroyed. Everyone
  on the hacking side is then told, and told again when the last one is down.

So hacking is how a team *closes on* a target, not how it collects a map full of
them.

## 6. CBA settings

**Ghosts of Battle → Hacking**

| Setting | Default |
|---|---|
| Enable Hacking | On |
| Required Items (any one) | `ghost_hacking_tabletItem` |
| Hack Condition | `true` — extra SQF gate, `_this` is the unit |
| Hackable Tower Classes | `Land_TTowerBig_2_F,Land_TTowerBig_1_F,Land_Communication_F,Land_Antenna_01_F,Land_Antenna_02_F` |
| Downable Drone Classes | *(blank = any enemy UAV)* |
| Require ISR operator | On |
| Scanner Items (any one) | `ghost_hacking_scannerItem` |

**Ghosts of Battle → Common** — *ISR unit variable*, default `isISR`. Change it
if your framework already marks operators under another name.

## 7. Testing

Admin chat commands, all prefixed `#ghost`:

| Command | Does |
|---|---|
| `hack.isr` | Reports your ISR flag |
| `hack.tablet` | Opens the tablet |
| `hack.devices` | Lists what the tablet can see right now |
| `hack.targets` | The resolved target pool, which is active, hacks taken |
| `hack.product picture\|sigint\|jam\|detect\|target` | Renders one product immediately |
| `hack.scan` | One scanner sweep as text |
| `hack.spent [clear]` | The spent EW zone set |
| `hack.fail` | Forces the remote-hack failure package |

`hack.targets` matters most for spots: the draw is meant to be opaque, so that
is the only way to see which candidates won without playing it.

## 8. Dependencies

Hard: CBA, ACE (`ace_interact_menu`, `ace_common`), `ghost_notify`,
`ghost_common`.

Soft, all checked at runtime — absent is fine:

- **ALiVE** — enriches Local Picture with despawned garrisons
- **Electronic War Zones** — adds the Locate Jammer/Detector products and makes
  EW emitters hackable
- **ACRE2 / TFAR** — the scanner's own-net readout
