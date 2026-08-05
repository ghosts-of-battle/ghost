# CIWS / C-RAM

Two interception modes, because they are different weapons rather than two
settings of one.

- **Guns** — a decoy is attached to the round and the synced AA engage it. Arma's
  AI aims and leads, so the kill depends on the gunner and the gun.
- **Interceptor** — the site launches a missile and flies it onto the round with
  proportional navigation. Consistent, and it needs no competent gunner anywhere
  on the map.

Both feed off one threat queue: every confirmed-inbound round is scored by
ballistic time-to-impact and the site engages the most urgent first. Engaging in
arrival order — what a per-round script does — means a barrage is answered at
random, and the shells that get through are the ones nobody chose to let through.

## Attribution

The interception technique is **Drongo's**, from
[Drongo's Artillery](https://steamcommunity.com/workshop/) (`scripts/radar/antimunition.sqf`),
used **with the author's permission**.

No code was copied. Drongo's implementation is `execVM`/`sleep`/global-variable
script; this is a native CBA reimplementation in ghost's idiom. What was taken is
the *idea*, and three hard-won details that are not obvious and would have cost an
evening each to rediscover:

1. **Arma's AI cannot target a projectile.** No sensor, config flag, `doTarget` or
   `reveal` will make a gun engage a shell — a projectile is not a valid target.
   The way round it is to attach a **crewed decoy vehicle** to the round in flight
   and let the guns engage *that*. The AI then does its own tracking, leading and
   ballistics, so an intercept is earned rather than rolled for.
2. **The decoy must ride above the round**, not on it. Attached at the round's own
   position, the intercepting burst detonates the round — which looks like a kill
   from the ground and is not one, because a shell that goes off two metres from
   its flight path still arrives. Drongo's source carries a commented-out
   `[0,0,0.5]` annotated *"causing arty rockets to explode early"*; ghost uses
   `[0,0,2]`.
3. **Incoming must be told from outgoing** by sampling the range twice. Without
   it, a battery sitting inside its own CIWS umbrella shoots down its own shells
   on the way out — absurd, and near-impossible to diagnose from the ground.

Two further details that follow from the first: the decoy is massless and has
collision with the round disabled, or attaching a vehicle to a shell perturbs the
shell; and the guns must be re-issued `doTarget` on a loop, because Arma's AI
drops an assigned target moving at shell velocity.

## Dankan37 — guided interceptor

The guidance in `fnc_guide.sqf` is adapted from
[Dankan37's Arma 3 Iron Dome](https://github.com/Dankan37/Arma-3-Iron-Dome),
**released into the public domain** — "any party may reproduce, distribute,
modify, and/or integrate this software into their projects without restriction".

What was taken:

- **Proportional navigation**, which steers to null the *rotation* of the line of
  sight rather than pointing at the target. Pointing at it is pure pursuit: it
  works against something stationary and always arrives late against something
  moving, because the missile spends the flight chasing where the target used to
  be. Nulling the rotation puts it on a collision course instead.
- **An unguided boost phase.** A missile that starts steering at zero airspeed
  just tips over.
- **Proximity fuze rather than contact.** A direct hit at several hundred metres
  per second closing will not happen reliably and does not need to.
- **Self-destruct on a miss** — having been close and now going away, the shot is
  spent. Without it, missed interceptors fly to the map edge dragging a guidance
  loop behind them.
- **Threat-priority target selection** by ballistic time-to-impact, which is what
  makes a defence hold up under a barrage rather than answering it at random.

## Known limit

`ProjectileCreated` fires on the machine that created the round, and the decoy has
to be attached where the round exists. Ghost registers the handler **server-side
only**, so rounds fired from a player's own weapon are not intercepted. That is
deliberate: point defence is for incoming AI and virtual artillery, and nobody
builds a C-RAM against the rifle in their own hands.
