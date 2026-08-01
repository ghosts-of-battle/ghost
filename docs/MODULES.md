# Eden modules

Place from the 3DEN entity list under the listed category.

## ALiVE Aircraft (`alive_aircraft`)

### Aircraft / Glide-Bomb Strikes

- **Class** `ghost_moduleAircraftStrike`
- **Category** ghost_drone_modules
- Spawns strike aircraft off-map that fly in for one attack pass on a random building in a TAOR, then egress. Optionally rains a side-owned glide bomb onto a random building on a frequency timer. Reuses the shared airframe ceiling / reaper.
- **Attributes** `altitude_max`, `altitude_min`, `ceiling`, `debug`, `fixedwing_cap`, `fixedwing_classes`, `fixedwing_frequency`, `glidebomb_altitude`, `glidebomb_class`, `glidebomb_frequency`, `rotor_cap`, `rotor_classes`, `rotor_frequency`, `side`, `spawn_bearing`, `spawn_distance`, `taor_marker`

## ALiVE Drones (`alive_drones`)

### ALiVE Drones Controller

- **Class** `ghost_moduleAliveDrones`
- **Category** ghost_drone_modules
- Spawns and manages standalone patrol UAVs across a TAOR, with a hard airframe ceiling, trickle-spawn, stuck-watchdog and lifetime churn. Place one per battlespace; set the TAOR marker name(s) in the attributes.
- **Attributes** `altitude_max`, `altitude_min`, `antiair`, `antiarmor`, `antipersonnel`, `debug`, `drone_lifetime`, `faction`, `global_airframe_ceiling`, `ground`, `loiterfixed`, `loiterrotor`, `objective_marker`, `recon`, `spawn_interval`, `taor_marker`

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
- Spawns drones within a radius of random enemy players on a random-window timer, choosing the drone type by weighted priority. Shares the ALiVE Drones airframe ceiling + reaper. Requires the ALiVE Drones addon.
- **Attributes** `altitude_max`, `altitude_min`, `antiair`, `antiarmor`, `antipersonnel`, `blacklist_marker`, `debug`, `drone_lifetime`, `faction`, `global_airframe_ceiling`, `ground`, `interval_max`, `interval_min`, `loiterfixed`, `loiterrotor`, `recon`, `spawn_min_dist`, `spawn_radius`, `taor_marker`

## Ambient Kamikaze Drones (`ambient_kamikaze`)

### Ambient Kamikaze Drones

- **Class** `ghost_moduleAmbientKamikaze`
- **Category** ghost_ambient_modules
- Periodically sends a one-way kamikaze drone into a building near the players. Place one per launch site; each runs its own timer and TAOR.
- **Attributes** `altitude`, `debug`, `drone_class`, `interval`, `max_dist`, `min_dist`, `spawn_dist`, `taor_marker`

## Base Defense (`base_defense`)

### Base Defense (drones + recon arty)

- **Class** `ghost_moduleBaseDefense`
- **Category** ghost_drone_modules
- Defends a base: trickle-spawns patrol drones around it, halts reinforcement when a player breaches the stop distance, and (if a recon drone spots an enemy in range) rains virtual mortars on that target until it dies or leaves range. Requires the ALiVE Drones addon.
- **Attributes** `altitude_max`, `altitude_min`, `arty_ammo`, `arty_cooldown`, `arty_delay`, `arty_enable`, `arty_radius`, `arty_rounds`, `debug`, `defense_range`, `drone_lifetime`, `faction`, `global_airframe_ceiling`, `spawn_interval`, `spawn_marker`, `stop_distance`

## Electronic War Zones (`electronic_war_zones`)

### Electronic War Zones

- **Class** `ghost_moduleElectronicWarZones`
- **Category** ghost_drone_modules
- OPFOR electronic-warfare zones: emitters jam nearby radios (TFAR and ACRE2, graduated by range) and, together with recon drones, hunt long-range transmissions - spawning a drone response. Both TFAR and ACRE2 long-range traffic is jammed + tracked; short-range squad nets are safe. Requires the ALiVE Drones addon.
- **Attributes** `acre_power_threshold`, `cooldown`, `debug`, `detector_range`, `faction`, `huntedSide`, `jammer_class`, `jammer_count`, `jammer_radius_max`, `jammer_radius_min`, `response_altitude`, `response_distance`, `response_lifetime`, `response_personnel_classes`, `response_personnel_count`, `response_vehicle_classes`, `response_vehicle_count`, `taor_marker`

## Hacking (`hacking`)

### Hack Intel Targets

- **Class** `ghost_moduleHackTargets`
- **Category** ghost_modules
- Synchronise objects or units to this module to make them the intel pool for tower hacking. A successful hack marks the nearest one on everyone's map. Marked targets are destroy objectives: the marker clears when the target is destroyed, and a message goes out when the last one is down.
- **Attributes** `marker_colour`, `marker_text`, `marker_type`, `max_range`, `one_shot`

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
