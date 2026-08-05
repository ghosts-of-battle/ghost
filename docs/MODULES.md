# Eden modules

Place from the 3DEN entity list under the listed category.

## Aircraft (`aircraft`)

### Aircraft / Glide-Bomb Strikes

- **Class** `ghost_moduleAircraftStrike`
- **Category** ghost_drone_modules
- Spawns strike aircraft off-map that fly in for one attack pass on a random building in a TAOR, then egress. Optionally rains a side-owned glide bomb onto a random building on a frequency timer. Reuses the shared airframe ceiling / reaper.
- **Attributes** `altitude_max`, `altitude_min`, `ceiling`, `debug`, `fixedwing_cap`, `fixedwing_classes`, `fixedwing_frequency`, `glidebomb_altitude`, `glidebomb_class`, `glidebomb_frequency`, `rotor_cap`, `rotor_classes`, `rotor_frequency`, `side`, `spawn_bearing`, `spawn_distance`, `taor_marker`

## Ambient Artillery (`ambient_arty`)

### Ambient Artillery

- **Class** `ghost_moduleAmbientArty`
- **Category** ghost_ambient_modules
- Periodically shells a random intact building near the players. Place one per battery; each runs its own timer and TAOR.
- **Attributes** `debug`, `interval`, `max_dist`, `min_dist`, `rounds`, `shell`, `spread`, `taor_marker`

## Ambient Drones (`ambient_drones`)

### Ambient Drones (near players)

- **Class** `ghost_moduleAmbientDrones`
- **Category** ghost_drone_modules
- Spawns drones within a radius of random enemy players on a random-window timer, choosing the drone type by weighted priority. Shares the Drones airframe ceiling + reaper. Requires the Drones addon.
- **Attributes** `altitude_max`, `altitude_min`, `antiair`, `antiarmor`, `antipersonnel`, `blacklist_marker`, `debug`, `drone_lifetime`, `faction`, `global_airframe_ceiling`, `ground`, `interval_max`, `interval_min`, `loiterfixed`, `loiterrotor`, `recon`, `spawn_min_dist`, `spawn_radius`, `taor_marker`

## Ambient Kamikaze Drones (`ambient_kamikaze`)

### Ambient Kamikaze Drones

- **Class** `ghost_moduleAmbientKamikaze`
- **Category** ghost_ambient_modules
- Periodically sends one-way kamikaze drones into a building near the players. Each strike is either a single drone or a swarm, rolled against the Swarm Chance - two classes, so a swarm can be something smaller and cheaper than a single. Swarm drones come in staggered and from different bearings, so they arrive as a stream a defence has to work through rather than all at once. Place one module per launch site; each runs its own timer and TAOR.
- **Attributes** `altitude`, `debug`, `drone_class`, `interval`, `max_dist`, `min_dist`, `spawn_dist`, `swarm_chance`, `swarm_class`, `swarm_count`, `taor_marker`

## AntiShip (`antiship`)

### Anti-Ship Battery (Burevestnik)

- **Class** `ghost_moduleAntiShip`
- **Category** ghost_ambient_modules
- A coastal anti-ship battery. Every interval it looks for a hull inside its search range and puts a Burevestnik into it - climb, sea-skimming cruise, terminal dive. The missile flies faster than any interceptor, so it has to be met head-on rather than chased, and it can be shot down: it carries a decoy the defending side's AA and CIWS will engage. Synchronise 3K72 launchers to the module to give it a firing position that can be destroyed; without one it fires from the module.
- **Attributes** `cruise_alt`, `debug`, `interceptable`, `interval`, `missile_speed`, `search_range`, `target_classes`, `terminal_range`

## Base Defense (`base_defense`)

### Base Defense (drones + recon arty)

- **Class** `ghost_moduleBaseDefense`
- **Category** ghost_drone_modules
- Defends a base: trickle-spawns patrol drones around it, halts reinforcement when a player breaches the stop distance, and (if a recon drone spots an enemy in range) rains virtual mortars on that target until it dies or leaves range. Can also sit the base inside a jamming zone, so radios degrade as you close in and the emitter becomes something to hunt. Requires the Drones addon; the jamming zone additionally needs Electronic War Zones.
- **Attributes** `activate_range`, `altitude_max`, `altitude_min`, `antiair`, `antiarmor`, `antipersonnel`, `arty_ammo`, `arty_cooldown`, `arty_delay`, `arty_enable`, `arty_radius`, `arty_rounds`, `base_marker`, `debug`, `defense_range`, `drone_lifetime`, `ew_class`, `ew_enable`, `ew_radius`, `faction`, `global_airframe_ceiling`, `ground`, `loiterfixed`, `loiterrotor`, `marker_text`, `recon`, `spawn_interval`, `spawn_marker`, `stop_distance`

## CIWS (`ciws`)

### CIWS / C-RAM

- **Class** `ghost_moduleCIWS`
- **Category** ghost_ambient_modules
- Point defence against artillery, rockets and missiles. Synchronise the AA guns that should defend the site. Incoming rounds are engaged by the guns themselves - the AI aims and leads, so an intercept has to be earned and a gun that is dead, out of ammo or has no line of sight simply misses. Rounds heading AWAY are ignored, so your own artillery is safe to fire over the site.
- **Attributes** `ad_range`, `debug`, `defend_side`, `intercept_types`, `interceptor_ammo`, `interceptor_limit`, `interceptor_speed`, `min_range`, `mode`, `pn_gain`, `protect_marker`

## Counter-Battery (`counter_battery`)

### Counter-Battery Radar

- **Class** `ghost_moduleCounterBattery`
- **Category** ghost_ambient_modules
- Enemy counter-battery radar. Artillery on the hunted side that keeps firing from one place gets found and shelled - the reply lands where the gun WAS, so a crew that shoots and scoots survives and one that sits still does not. No gun is placed on the map; the reply is virtual. Place two modules for both sides.
- **Attributes** `accuracy`, `cooldown`, `debug`, `dedupe_radius`, `delay`, `detect_chance`, `displace`, `displace_radius`, `extra_classes`, `hunted_side`, `rounds`, `safe_radius`, `shell`, `shots_to_detect`, `spread`, `warn`, `window`

## Drones (`drones`)

### Drones Controller

- **Class** `ghost_moduleDrones`
- **Category** ghost_drone_modules
- Spawns and manages standalone patrol UAVs across a TAOR, with a hard airframe ceiling, trickle-spawn, stuck-watchdog and lifetime churn. Place one per battlespace; set the TAOR marker name(s) in the attributes.
- **Attributes** `altitude_max`, `altitude_min`, `antiair`, `antiarmor`, `antipersonnel`, `debug`, `drone_lifetime`, `faction`, `global_airframe_ceiling`, `ground`, `loiterfixed`, `loiterrotor`, `objective_marker`, `recon`, `spawn_interval`, `taor_marker`

## Electronic War Zones (`electronic_war_zones`)

### Electronic War Zones

- **Class** `ghost_moduleElectronicWarZones`
- **Category** ghost_drone_modules
- OPFOR electronic-warfare zones: emitters jam nearby radios (TFAR and ACRE2, graduated by range) and, together with recon drones, hunt long-range transmissions - spawning a drone response. Both TFAR and ACRE2 long-range traffic is jammed + tracked; short-range squad nets are safe. Requires the Drones addon.
- **Attributes** `acre_power_threshold`, `ai_chatter`, `ai_chatter_interval`, `cooldown`, `debug`, `detector_range`, `faction`, `huntedSide`, `jam_burnthrough`, `jam_burnthrough_ref`, `jam_cone_enable`, `jam_curve`, `jam_duty_cycle`, `jam_los`, `jam_uavs`, `jammer_class`, `jammer_count`, `jammer_radius_max`, `jammer_radius_min`, `rdf_scan_range`, `response_altitude`, `response_distance`, `response_lifetime`, `response_personnel_classes`, `response_personnel_count`, `response_vehicle_classes`, `response_vehicle_count`, `taor_marker`

## Hacking (`hacking`)

### Intel Target Spot

- **Class** `ghost_moduleHackTargetSpot`
- **Category** ghost_modules
- One candidate spot for an intel target. SYNCHRONISE IT to a Hack Intel Targets module to enter it in that module's draw - a spot with no parent module is not drawn for, it simply populates. Set the parent's Pick Per Class to pick a random few each run. Spots are grouped by their Spawn Class, so ten spots of one class and ten of another with a limit of five gives five of each. Either give the spot a Spawn Class or synchronise the objects it should use - with no Spawn Class it is grouped by the first object synced to it. Init runs on whatever it produces.
- **Attributes** `crew`, `crew_side`, `datalink`, `init_code`, `spawn_class`

### Hack Intel Targets

- **Class** `ghost_moduleHackTargets`
- **Category** ghost_modules
- Synchronise objects, units, or Intel Target Spots to this module to make them the intel pool for tower hacking. A successful hack marks the nearest one on everyone's map. Set Pick Per Class to use only a random few of each class, so nobody knows where the intel is until the mission runs. Marked targets are destroy objectives: the marker clears when the target is destroyed, and a message goes out when the last one is down.
- **Attributes** `class_limits`, `clear_unpicked`, `maintain`, `maintain_crew`, `maintain_interval`, `maintain_repair`, `marker_colour`, `marker_text`, `marker_type`, `max_range`, `one_shot`, `pick_count`

### Hacking Settings

- **Class** `ghost_moduleHacking`
- **Category** ghost_modules
- Tuning for tower and remote hacking. Entirely optional - without one, the defaults apply.
- **Attributes** `abandon_timeout`, `circle_offset`, `circle_radii`, `combat_interrupts`, `emitter_hack_response_chance`, `hack_cooldown`, `hack_range`, `hack_time`, `intel_alpha`, `intel_fade`, `intel_lifetime`, `local_picture_radius`

### Remote Unit Hack

- **Class** `ghost_moduleRemoteHack`
- **Category** ghost_modules
- Enables hacking an enemy soldier's comms at range. Success buys one intel product centred on the target; failure can alert the area and jam your own grid. Intel marker styling comes from the Hacking Settings module.
- **Attributes** `abandon_timeout`, `alert_radius`, `combat_interrupts`, `fail_chance`, `hack_time`, `jam_chance`, `jam_duration`, `jam_radius_max`, `jam_radius_min`, `max_range`

## Intel Hunt (`intel_hunt`)

### Intel Hunt

- **Class** `ghost_moduleIntelHunt`
- **Category** ghost_modules
- A hunt for synchronised targets. Enemy bodies sometimes carry intel; gather enough and an ISR operator can process it into a map hint that tightens each time. Killing the current target resets the tier and moves the hunt on to the next.
- **Attributes** `debug`, `drop_chance`, `hint_radii`, `intel_fade`, `intel_required`, `marker_alpha`, `marker_duration`

## Modules (`modules`)

### AI Spawner

- **Class** `ghost_moduleAiSpawner`
- **Category** -
- Group Side

### AI Hunter

- **Class** `ghost_moduleAiHunter`
- **Category** -
- Group Side

### Safe Start Disabler

- **Class** `ghost_moduleSafeStart`
- **Category** -
- Disable in single player

### Heal Area

- **Class** `ghost_moduleHealArea`
- **Category** -
- Heal Players In Area

## Objective Watch (`objective_watch`)

### Objective Watch

- **Class** `ghost_moduleObjectiveWatch`
- **Category** ghost_modules
- Watches objectives for a capture - your side present, no enemies, held for a while - then counts down and drops artillery on the position. Objectives come from map markers (no ALiVE needed), from ALiVE's objective list, or from this module's own position. Independent of the ambient artillery addon.
- **Attributes** `alive_bridge`, `alive_range`, `barrage_chance`, `barrage_cooldown`, `barrage_delay`, `barrage_dispersion`, `barrage_enable`, `barrage_jitter`, `barrage_rounds`, `barrage_shell`, `barrage_side`, `barrage_window`, `capture_radius`, `capture_side`, `debug`, `hold_time`, `marker`, `min_players`, `objective_markers`, `use_alive_objectives`

## Repair (`repair`)

### Timed Repair

- **Class** `ghost_moduleTimedRepair`
- **Category** ghost_modules
- Keeps everything synchronised to it serviceable: rearmed, refuelled and repaired on a timer, and optionally rebuilt if destroyed. A snapshot of each object is taken at mission start while it is still intact, and that is what a respawn is rebuilt from - so a respawned object comes back where it was placed, not where the blast left it.
- **Attributes** `debug`, `interval`, `rearm`, `refuel`, `repair_amount`, `replace_crew`, `respawn`, `respawn_delay`
