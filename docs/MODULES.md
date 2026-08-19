# Eden modules

Place from the 3DEN entity list under the listed category.

## Air Defence (`airdefence`)

### Ghost - Air Defence (temporary)

- **Class** `ghost_moduleAirDefence`
- **Category** ghost_modules
- Places air defence for every ALiVE commander on the map. TEMPORARY - it stands in until ALiVE 3's own air defence is stable.<br>Conventional commanders (invasion, occupation) get radar-cued missile batteries. Asymmetric commanders get MANPAD teams instead - a guerrilla does not field a battery.<br>Where they go is read from ALiVE: each commander's own TAOR and objectives, never anything set here. Everything placed is profiled, so it costs nothing while nobody is near it.<br>Batteries Per Side - conventional commanders only, asymmetric get none Launchers Per Battery - set back from the radar that cues them Battery Spacing (m) - least distance between two batteries Radar / Launcher / MANPAD classes are set PER SIDE - the three commanders are three different armies. Leave any of them blank to pick from that commander's own faction. Clear Ground (m) - open ground a battery needs; a radar in a wood sees nothing MANPAD Teams Per Side - asymmetric commanders only
- **Attributes** `launcherEast`, `launcherGuer`, `launcherWest`, `launchers`, `manpadEast`, `manpadGuer`, `manpadManEast`, `manpadManGuer`, `manpadManWest`, `manpadWest`, `openGround`, `radarEast`, `radarGuer`, `radarWest`, `rearmEvery`, `security`, `sitesPerSide`, `spacing`, `taorEast`, `taorGuer`, `taorWest`, `teamsPerSide`

## Ambience (`ambience`)

### Ghost - Ambient Shelling

- **Class** `ghost_moduleAmbientShelling`
- **Category** ghost_modules
- Ambient war: every few minutes a short artillery stonk lands on a building near a player inside the named markers. It never targets the players themselves - the distance band keeps it off their heads - and every impact area is announced on the alert bus first.
- **Attributes** `bandMax`, `bandMin`, `intervalMax`, `intervalMin`, `markers`, `roundsMax`, `roundsMin`, `shellClasses`

### Ghost - Ambient Kamikaze Drones

- **Class** `ghost_moduleAmbientKamikaze`
- **Category** ghost_modules
- Ambient war: every few minutes a one-way drone flies in and dives on a building near a player inside the named markers. It is a real aircraft on the map - audible, visible and killable, and shooting it down is the counterplay. It never dives at the players themselves.
- **Attributes** `bandMax`, `bandMin`, `diveSpeed`, `droneClasses`, `intervalMax`, `intervalMin`, `markers`

## AntiShip (`antiship`)

### Anti-Ship Battery (Burevestnik)

- **Class** `ghost_moduleAntiShip`
- **Category** ghost_modules
- Coastal anti-ship batteries, one module for every side. Switch a side on and the addon sites a battery on coastal ground inside that side's TAOR markers, with that side's launchers, and places crewed launchers there - kill them all and the battery is silenced. Every interval a battery looks for a hull inside its search range and puts a Burevestnik into it - climb, sea-skimming cruise, terminal dive; it can be met head-on and it carries a decoy the defending side's AA will engage. With every switch off, the module is one battery for its own side, standing where you put it.
- **Attributes** `cruise_alt`, `debug`, `decoy_classes`, `enableEast`, `enableGuer`, `enableWest`, `interceptable`, `interval`, `launcherEast`, `launcherGuer`, `launcherWest`, `launcher_classes`, `launcher_count`, `missile_classes`, `missile_speed`, `rearm_interval`, `search_range`, `taorEast`, `taorGuer`, `taorWest`, `target_classes`, `terminal_range`

## Boarding (`boarding`)

### Ghost - Boarding Point

- **Class** `ghost_moduleBoarding`
- **Category** ghost_modules
- A muster point that loads players into transport. Synchronise the OBJECT players press - a sign, a crate, a flagpole - and it carries an ACE action; pressing it moves every player within the module's range into cargo. Synchronise VEHICLES too to say which transport is theirs; with none synced it uses whatever has free cargo near the module. Players already in a vehicle are left alone, and anyone who does not fit is told so rather than being silently left behind.
- **Attributes** `includePresser`, `range`, `sideOnly`, `title`

## CAS (`cas`)

### Ghost - CAS Drone

- **Class** `ghost_moduleCAS`
- **Category** ghost_modules
- One taskable CAS drone on the support page. Place one module per airframe - many are allowed, and each is its own asset with its own losses.<br>The player sets the TARGET GRID, the INGRESS bearing and the EGRESS bearing on the support page. The drone appears at the ingress distance on that bearing, runs the target, and leaves on the egress bearing.<br>ORDNANCE on the support page lists what THIS airframe is carrying, by name - the run uses the heaviest thing aboard unless one is picked.<br>LOITER holds the drone over the point instead of striking it, and hands the gunner's seat to the ISR operator who asked for it - he needs a UAV terminal and the isISR variable. RTB ends it.<br>Airframe Class - Classname of the fixed-wing drone; blank for the side's vanilla UCAV Callsign - What the support page and the radio call it Airframes Available - How many times it may be shot down before the asset is expended; 0 for unlimited Ingress Distance (m) - How far out it appears, and how far it runs before despawning Attack Altitude (m) - Height above the terrain (ATL) the run is flown at Run Speed (km/h) - Capped at the airframe's own maximum Response Delay (sec) - Time from accepted request to the aircraft appearing Cooldown (sec) - Time after a run before this asset can be tasked again Terminal Search (m) - How far from the grid a laser spot or smoke is accepted as the real target; 0 for none
- **Attributes** `airframes`, `altitude`, `callsign`, `cooldown`, `droneClass`, `searchRadius`, `spawnDelay`, `spawnDistance`, `speed`

## Jamming (`jamming`)

### Ghost - Jamming

- **Class** `ghost_moduleJamming`
- **Category** ghost_modules
- Placing this module turns on jamming. Without it, the system is off.<br>Hub Radius (m) - Reach of a communications hub, placed at the biggest objectives Terminal Radius (m) - Reach of a terminal, placed at the rest Objectives With Jammers (%) - Share of a commander's objectives that get an emitter Max Jammers Per Side - Hard ceiling per commander whatever the share works out to
- **Attributes** `largeRadius`, `maxPerSide`, `objectiveShare`, `smallRadius`

## Leaders (`leaders`)

### Ghost - Leader Chain

- **Class** `ghost_moduleLeaders`
- **Category** ghost_modules
- Placing this module turns on leader chain. Without it, the system is off.<br>Pool Cut Per Leader (%) - How much of the asymmetric commander's force pool dies with each leader Rotate Every (sec) - How often a leader moves to another safe house Trap Chance (%) - Chance a watched safe house is trapped with mortars Internet Pops - How many rugged-server props are placed for players to find and pull leads from
- **Attributes** `poolCut`, `pops`, `rotateEvery`, `taor`, `trapChance`

## Modules (`modules`)

### Safe Start Disabler

- **Class** `ghost_modulesafestart`
- **Category** -
- Disable in single player

### Heal Area

- **Class** `ghost_moduleHealArea`
- **Category** -
- Heal Players In Area

### AI Spawner

- **Class** `ghost_moduleAiSpawner`
- **Category** -
- Group Side

### AI Hunter

- **Class** `ghost_moduleAiHunter`
- **Category** -
- Group Side

## QRF (`qrf`)

### Ghost - QRF

- **Class** `ghost_moduleQRF`
- **Category** ghost_modules
- Placing this module turns on qrf. Without it, the system is off.<br>Hold Time (sec) - How long players must hold an objective, uncontested, before it counts as taken Players Needed - How many players inside before a hold counts at all Squads Min - Fewest squads the third wave sends Squads Max - Most squads Asymmetric Mortar Chance (%) - An asymmetric commander answers with a few mortar rounds or with nothing - never a full barrage Cooldown (sec) - Retaking the same objective inside this window brings no second QRF
- **Attributes** `asymMortarChance`, `cooldown`, `holdTime`, `minPlayers`, `squadsMax`, `squadsMin`

## Reaction (`reaction`)

### Ghost - Enemy Reaction

- **Class** `ghost_moduleReaction`
- **Category** ghost_modules
- Placing this module turns on enemy reaction. Without it, the system is off.<br>Hack Fail Chance (%) - Chance an intrusion fails outright Detection Chance (%) - Chance a failure, a drone sighting or a transmission is noticed Barrage Rounds Min - Fewest shells a major response puts down Barrage Rounds Max - Most shells Radio Watts Watched - Transmit power at or above which a radio can be direction-found
- **Attributes** `detectChance`, `failChance`, `roundsMax`, `roundsMin`, `watts`

## Repair (`repair`)

### Timed Repair

- **Class** `ghost_moduleTimedRepair`
- **Category** ghost_modules
- Keeps everything synchronised to it serviceable: rearmed, refuelled and repaired on a timer, and optionally rebuilt if destroyed. A snapshot of each object is taken at mission start while it is still intact, and that is what a respawn is rebuilt from - so a respawned object comes back where it was placed, not where the blast left it.
- **Attributes** `debug`, `interval`, `rearm`, `refuel`, `repair_amount`, `replace_crew`, `respawn`, `respawn_delay`

## UAS (`uas`)

### Ghost - Enemy Drones

- **Class** `ghost_moduleUAS`
- **Category** ghost_modules
- Placing this module turns on enemy drones. Without it, the system is off.<br>Airframes Per Side - How many drones a commander flies at once while its supply is intact After A Cache Is Lost - The ceiling while a supply cache is down Outage Min (sec) - Shortest time a destroyed cache holds the ceiling down Outage Max (sec) - Longest time Caches Per Side - Supply caches placed in each commander's area for players to find
- **Attributes** `baseMax`, `cachesPerSide`, `patrolOver`, `reducedMax`, `uavEast`, `uavGuer`, `uavWest`, `windowMax`, `windowMin`
