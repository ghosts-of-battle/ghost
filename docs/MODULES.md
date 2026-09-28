# Eden modules

Place from the 3DEN entity list under the listed category.

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

## APS (`aps`)

### Ghost - APS

- **Class** `ghost_moduleAPS`
- **Category** ghost_modules
- Placing this module turns on the APS, the active protection. Without it, the system is off.<br>Hard Kill - Launcher-and-charge systems that destroy incoming rockets and missiles short of the hull RF Burst - The microwave emitter: guided munitions lose guidance, drones drop, every radio nearby is jammed for a moment RF Burst On Helicopters - Peer+ helicopters carry the emitter as their DIRCM Tier Overrides - faction:tier pairs that bend the fit table for a mission Fit Overrides - class:fit pairs that name a vehicle's fit outright Debug - Log fits and intercepts, draw burst radii
- **Attributes** `debug`, `fitOverrides`, `hardKill`, `rfAir`, `rfBurst`, `tierOverrides`

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

## Hacking (`hacking`)

### Ghost - Intel Package

- **Class** `ghost_moduleIntelPackage`
- **Category** ghost_modules
- Puts an intel package on a device. Hacking that device hands over a share of it.<br>Package - a class under Ghost_IntelPackages in the mission config Terminal Class - what to build if this is synchronised to nothing<br>How big a share one hack yields is a CBA setting - Ghosts of Battle, Hacking. The package's own contents are mission config, not module attributes: see the wiki.
- **Attributes** `package`, `terminal`

## Jamming (`jamming`)

### Ghost - Jamming

- **Class** `ghost_moduleJamming`
- **Category** ghost_modules
- Placing this module turns on jamming. Without it, the system is off. It places no jammers - a Ghost - Jammer Site module does that, one per emitter.<br>Site Radius Min / Max (m) - every site rolls its own reach between the two GPS Denial - one uplink per commander steering a wandering 1-2 km GPS sphere Uplink Radius (m) - the uplink's own GPS field Radio Burn-Through - a strong set beats a jammer, and is answered with a QRF Burn-Through Reference (mW) - the set power the field is calibrated against
- **Attributes** `burnRef`, `gpsUplinkRadius`, `largeRadius`, `maxPerSide`, `objectiveShare`, `smallRadius`

### Ghost - Jammer Site

- **Class** `ghost_moduleJammerSite`
- **Category** ghost_modules
- One jammer site, where you place it. Needs the Ghost - Jamming module on the map to arm.<br>Spectrum - radio, data or gps. One per site Radius (m) - 0 rolls one from the Jamming module's bounds Side - who owns the emitter<br>Artillery Reply - the site shells whoever loiters in its field Reply Delay (s) - how long a hostile must stay inside before it fires Reply Rounds / Scatter (m) - the size of the mission and how wide it falls Reply Cooldown (s) - minimum gap between two missions from this site
- **Attributes** `artyCooldown`, `artyDelay`, `artyRounds`, `artyScatter`, `domain`, `jamSide`, `radius`

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

### Ghost - Drone Patrol

- **Class** `ghost_moduleDronePatrol`
- **Category** ghost_modules
- One patrol. Resize it - the area is the ground the drones fly over.<br>Side - whose drones. A side friendly to the players is skipped Drones - how many airframes this patrol keeps up Drone Class - empty flies the side's own<br>Artillery On Detect - a drone that sees somebody shells where it saw them Rounds / Scatter (m) / Cooldown (s) - the size of that mission and its gap<br>A module never resized is one 800 m orbit. Nobody within 3.2 km, nothing flies.
- **Attributes** `artyCooldown`, `artyRounds`, `artyScatter`, `droneClass`, `droneCount`, `patrolSide`

### Ghost - Drone Swarm

- **Class** `ghost_moduleDroneSwarm`
- **Category** ghost_modules
- A swarm, launched where you place it. Trigger it to launch on cue.<br>Airframe - which drone. Limited by the Swarm Airframes setting Drones - 2 to 12 Action - Impact dives on this module; Circle orbits it Spawn Min / Max (m) - how far out they appear and fly in from Side - the fallback crew's side<br>Resize the module to set the orbit radius. Impact ignores the area.
- **Attributes** `spawnMax`, `spawnMin`, `swarmAction`, `swarmClass`, `swarmCount`, `swarmSide`
