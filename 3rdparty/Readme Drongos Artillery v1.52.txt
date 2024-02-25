Drongo's Artillery
for Arma 3
version 1.52

by Drongo and friends
26 Dec 2023

Discord for my mods: https://discord.gg/XSRHPEd

REQUIREMENTS
Arma 3
CBA for Arma 3: https://forums.bohemia.net/forums/topic/168277-cba-community-base-addons-arma-3/

OVERVIEW
Drongo's Artillery (DRA) adds semi-realistic artillery, virtual artillery, cruise missiles, suicide drones/loitering munitions, grenade-dropping drones, orbital beam and railgun strikes, C-RAM, Counter Battery radar, Electronic Warfare and satellites to Arma 3. It is based on CoC Unified Artillery for OFP. It puts AI-controlled batteries, virtual batteries and orbital strikes under player control. A degree of skill is both required and rewarded by the system. Users can control sheaf type, sheaf size, round type, angle, fuze, etc.

DRA requires some degree of map-reading and the ability to call adjustments. By default, spotters (or their drones) must be within 1000m of the target and have LOS. The rounds are not spawned in, the artillery assets are given target coordinates, calculate the aimpoint based on various factors and fire real shells. The doArtilleryFire command is not used, so it is possible to select both high and low angle fire for most assets. Multiple ammunition types can be used in a single barrage (eg. HE with smoke). BIS and properly configured mod assets are supported (RHS, CUP, Pook's Artillery, Unsung, TIOW and Global Mobilization have been tested).

Simply place assets on the map and they will be available to the appropriate side. To access the artillery system, hit your "HOME" key (this can be adjusted under CBA options). A radio is required to access the system. The default radio, ACRE radios, Task Force Arrowhead radios and Unsung radios are all supported by default (others can be added). Vehicles are also assumed to have radios.

Each side is partially voiced. Players can select from edited lines from Generation Kill, edited CSAT and AAF voices, and custom voice sets in US English and Yugoslav.

Features:
- On map artillery with user-controlled angle, sheaf, fuze, rounds, tubes to fire, etc
- 10, 8 and 6 digit grid references for any map
- Optional requirement for spotter to be within range of the target and have LOS
- Virtual artillery
- Cruise missiles
- Loitering munitions (Mini-Harpy and modified AR-2)
- Grenade-dropping drones
- Orbital beam and railgun strikes
- Surveillance satellites
- C-RAM
- Counter-battery radar (can target incoming for AD)
- EW against drones (and optionally aircraft and incoming artillery)
- Blacklist modules
- Easily limit access via module
- Various voice sets (US English, CSAT, AAF, Yugoslav, Australian English, French)
- Compatible with artillery mods
- Easy customization with modules
- ACE menu integration


SUPPORTED UNITS
The default BIS artillery assets, CUP, RHS, Pook's artillery, Unsung, TIOW and Global Mobilization have been tested and work with this system. Other mods that are properly configured should work with this system.


BASIC USE
To access the artillery system, hit your DRA key ("HOME" by default, change under CONFIGURE > CONTROLS > CONFIGURE ADDONS in mission). The player must have either a vanilla (or inherited class), ACRE or TFAR radio. Additionally, any non-civilian vehicle is assumed to have a radio.

Opening the system will present the "Assets" menu. Next to each asset is a 3 letter code:

RDY - Asset can be controlled and issued orders.
CTL - Asset is under control by either the player or someone else. If the player has control, he can issue orders.
BSY - Asset is firing/processing a mission. This asset can not be controlled or issued orders.
MOVE - Asset is moving.

Once an available asset is selected, click on the "Control Asset" button. The player may now enter the X and Y coordinates for the target point and his own (spotter) position. An 8-digit or 10-digit grid reference is used (10 meter and 1 meter accuracy respectively). 8-digit values must be between 0000 and 9999, 10-digit must be between 00000 and 99999. X is the left/right axis on the map, and Y is the up/down axis. Here are some examples of valid 8 and 10 digit values:

Map				8 digit				10 digit
X		Y		X   	Y			X		Y
023		109		0230	1090		02300	10900
				Input: 02301090		Input: 0230010900

To target half-way between 023 and 024, use these values:

Map				8 digit				10 digit
X		Y		X   	Y			X		Y
023		109		0235	1090		02350	10900
				Input: 02351090		Input: 0235010900
				
Once these are entered, click on "Input". Spotter position must be entered before the target position.

The "Control" dialog will appear. Here the player can select the warhead type, angle, etc. Once they are entered, clicking "Transmit" will send the mission to the asset (this will be processed on the server).

You can only control a single asset at a time. If you wish to take control of another asset, issue Fire For Effect orders or release the asset using the "Release" button on the assets screen.

Note that it can take a long time between calling for fire and rounds actually arriving. This time can be set in the Options module.

POLAR MISSIONS
Polar missions are calculated based on the spotter's position. The input format is ddd/rrrr where ddd is the direction (0-359) and rrrr is the distance from the spotter's position. For example, 45,500 would target 500 meters to the player's north east.

MISSION TYPES
Fire For Effect (FFE): Fire all tubes in the battery at the target. Each tube will fire the number or rounds set by the player.
Spot: Fire a single marker round from one tube to allow adjustment of fire. When the rounds are on target, call FFE.
Plot: Plot a fire mission but do not fire any shells. This mission can later be fired at a time selected by the player. As it has already been plotted, the response time will be faster.

SHEAFS
POINT: The firing assets try to fire on the target point with no dispersion.
CIRC: A circular sheaf of the size designated in X of Sheaf Size (Y has no effect).
BOX: Square or rectangular, as determined by the X (width) and Y (depth) values of Sheaf Size.

ANGLE
Low angle is generally when the firing tube has its barrel depressed below 45 degrees. Low angle missions take less time to travel to the target. However, they are also more likely to impact with intervening hills.

High angle is generally when the firing tube has its barrel elevated above 45 degrees. High angle missions will take significantly more time to reach the target. However, such missions will not be blocked by mountains, etc.

Note that mortars are only capable of high angle missions.

FUSE
Most assets can only use IMPACT fuses. If configured with submunitions, they will be able to use AIRBURST, though the minimum distance is limited by the config value. Vanilla assets can use IMPACT, DELAYED, AIRBURST and AIR/DEL.

IMPACT:	Shells explode on impact.
DELAYED: Shells penetrate most structures before exploding inside.
AIRBURST: Shells explode in air (good for troops in cover).
AIR/DEL: Half of the tubes will fire DELAYED (IMPACT if not capable of delayed), half will fire AIRBURST.

Airburst effectiveness depends on the HIT config value of the shell.

TUBES
By default, for FFE, all tubes in a battery will fire. By entering numbers seperated by commas, only selected tubes will fire. For example, in a 4 tube, to make only the first and third tubes fire, use this value:

1,3

ROUNDS
This determines how many rounds each gun will fire. If a Spot mission is fired, only a single round will fire, regardless of this value.

INTERVAL
The time between volleys of fire.

ROLLING BARRAGE
Each volley will reposition the selected sheaf by the direction and distance specified. The direction is the raw value in degrees (ie. 0 for north, 90 for east, etc). The distance is in meters. For example, to shift the sheaf east by 100 meters after each volley, use this value:

90,100


PRE-PLOTTED/REPEAT MISSIONS
In the Assets dialog, there is a window of previous FFE and Plot missions. Selecting one of these and clicking the Control button allows the player to re-issue the order. The response time will be much faster compared to transmitting a new mission. However, it is not possible to issue new x and y coordinates (though sending adjustments is possible).


ADJUSTING FIRE
It is likely that the first round will be off target. The greater the range from the battery to the target, the higher the potential deviation. The spotter can issue adjustments and call for further spotting rounds before using Fire For Effect.

NOTE: The adjustments left/right and up/down are relative to the spotter (not the battery).

Left/Right: A negative value shifts to the left, a positive one to the right.
Add/Drop: A positive value adds distance (ie. increases the range from the player). A negative value drops distance (ie. decreases the range to the player).

After entering the adjustments, it is essential to click the "Adjust" button before hitting "Transmit".


MAP GRIDS
For manual input, players can use 6, 8 or 10 digit grids. Click on the grid text to toggle this. Additionally, clicking Tablet>F5 will display numbers and a grid on the map to assist targeting. The colour of this information can be toggled with Tablet>F6.


BINOCULAR TARGETING
There is an option to allow target input with binoculars. Center the target in the binoculars, then press space. This will register the spotter and target position. Then click the Target button in the Assets dialog to start plotting the firemission.


RESTRICTING USERS
Users can be restricted by using the Restrict Users module. Sync units to allow that unit type, and set the minimum rank in the module. Alternatively, use the Whitelist Users module. This will block all clients except those synced to the module.

A user can be guaranteed access (as long as they have a radio) with the following code:

_user setVariable["draWhitelisted",TRUE,TRUE];

Or with the following code on their client:

draWhitelisted=TRUE;

Everyone can be whitelisted with:

draWhitelisted=TRUE;
publicVariable"draWhitelisted";

To restrict users from drones, cruise missiles or radar/C-RAM/satellites, set the appropriate field to TRUE in the Options module. Then whitelist the desired user with the following code:

_user setVariable["draAccessDrones",TRUE,TRUE];
_user setVariable["draAccessCruise",TRUE,TRUE];
_user setVariable["draAccessSensors",TRUE,TRUE];


EXCLUDING FROM THE SYSTEM
To exclude a unit or group from being recognized by this system, sync it to an Exclude module.


NON-RECOGNISED ASSETS
If a 3rd-party asset is not being recognised, sync a single type of that vehicle to the Options module.


AUDIO
By default, BLUFOR plays US English audio files, INDEP plays Greek English and REDFOR plays Persian. "US" will use audio taken from the TV show Generation Kill, "IRAN" uses edited files from Arma 3 for the Iranian side and "AAF" uses edited files from Arma 3 for the Greek side. "NULL" will have no voices, but text messages and radio beeps will still play. The voices used by each faction can be set in the Options module.

In addition, there are voice-sets by community members for:

US English (by Viper1Zero)
Yugoslav (by VedKay)
Australian English (by VedKay)
French (by Nidroneb)

These voice sets were mixed by Fuzzle.


BEAM STRIKES/RAILGUN STRIKES
Place a Beam Strike module and edit the module fields. The beam strike will appear in the assets list. Asset availability can be changed with:

MODULE_NAME setVariable["draAvailable",TRUE,TRUE];


VIRTUAL ASSETS
Place a Virtual Asset module and edit the module fields. The virtual asset will appear in the assets list. By default, virtual strikes spawn "Sh_155mm_AMOS" rounds, this can be changed in the Ammo array field. If more than one type of ammo is entered, each shot will randomly select one of the entered types.

If the Range field is greater than 0, then the strikes will not be available at ranges further than this value (measured from the module position).

Asset availability can be changed with:

MODULE_NAME setVariable["draAvailable",TRUE,TRUE];


LOITERING MUNITIONS (Tablet>F2)
These "suicide drones" can be used as drones. To manually attack with them, use the drone's gunner position to lase and lock the desired target. Then press spacebar. The drone will automatically guide to the target. To abort an attack, press spacebar again. Note that attacks can not be aborted in the terminal phase.

Alternatively, the drone can be set to Automatic. It will attack the first target it locates that matches the selected criteria. The types of suicide drone are:
AR-2X:	Based on the AR-2 Darter. Available for NATO, CSAT and AAF. Can be deployed from backpacks.
MiniHarpy: Can be launched from M5 Sandstorm variants.


CRUISE MISSILES (Tablet>F3)
The Mk41 VLS, Mk41B VLS and Pook's BGM-109 and 3K60 Bal can be fired as cruise missiles. They first require waypoints to be entered. Select the launcher, click the map to place waypoints (the final waypoint will be the impact point), then click "Launch" in the dialog.


C-RAM/EW (Tablet>F4)
Under NATO>Turrets there is a Pretorian 1D C-RAM turret will engage incoming shells, rockets or missiles within 2000m (or the value set in the Options module). EW vehicles can be created by syncing a crewed vehicle to a [DRA] EW vehicle module. Double clicking on assets will toggle them on/off.

RADAR (Tablet>F4)
Under NATO/CSAT>Turrets there is a counter-battery radar. It will detect shells, rockets or missiles within range that are above 10m. If the player has turned on alerts (Tablet>F4), these shells will be marked on the map. The range can be set in the options module. The radar will also estimate the position of the system that fired the round and mark it on the map with an orange marker (the markers will disappear after 2 minutes).

Additionally, the radar will designate incoming shells for friendly air-defence assets. By default, incoming shells within 5000m can be engaged. Any assets that are synchonized with the radar will use improved targeting scripts, though un-synchronized assets in range will still likely engage.

Effectiveness in destroying incoming shells:
MIM-145 Defender:		Very poor
Mk21 Centurion:			Very good
Mk49 Spartan:			Terrible
IFV-6a Cheetah:			Very good
Praetorian-1C:			Very good
ZSU-39 Tigris:			Very good
S750 Rhea:				Terrible

The default detection range and air-defence range of a given radar can be changed with this code:

_radar setVariable["draRadarRange",(range in meters),TRUE];
_radar setVariable["draADrange",(range in meters),TRUE];


SATELLITES (Tablet>F4)
In-game, satellites function as static invisible observation drones. Place a module at the desired location and specify the desired height. Players can connect via a UAV tablet. To reposition a satellite, double click on it and select a new map location. Satellites have limited fuel for changing position.


ELECTRONIC WARFARE
Any crewed vehicle can be designated an EW vehicle by syncing it to a DRA_EWvehicle module and setting the paramaters. The EW vehicle will attack any drone (and optionally aircraft) that is known to the vehicle and in LOS. A successful attack against a drone will cause it to crash. A successful attack against an aircraft will damage its avionics for a period of time deactivate sensors and cause targets to be lost.

To increase the effectiveness of an EW vehicle, sync it to a radar unit and enable datalink.

EW vehicles can also simulate the Russian ability to trigger the fuses on incoming artillery rounds.

As there are not many EW vehicles in Arma, you can create one yourself using the attachTo command. In the editor, find a suitable antenna and place it on your vehicle. Call your vehicle ew1 and the antenna a1. Put the folloing code in the vehicle init:

a1 attachTo[ew1];


GRENADE-DROPPING DRONES
Assemble an AR-2G. Stand next to the assembled drone and drop a grenade item from your inventory. Use the Attach/Detach Grenade action on the drone. Then fly the drone to the target. In the gunner camera view, use the arrow keys to finesse aiming. Press space to drop the grenade.

At minimum and medium zoom, the drone's velocity will be adjusted in the desired direction. At maximum zoom, setPosATL is used to allow better accuracy.


BLACKLIST AREA
This module will prevent calling in strikes within the specified radius.


MODULES
There are various useful modules under Module>Drongo's Artillery.

DRA_Options
DRA_RestrictUsers
DRA_Blacklist
DRA_Exclude
DRA_VirtualAsset
DRA_BeamStrike
DRA_RailgunStrike
DRA_EWvehicle
DRA_Satellite


DIAGNOSTICS
Clicking the Diagnostics button on the lower right hand side of the dialog will display a hint with a variety of information regarding the status of the system. This is mainly for debug purposes.


MISC
There is a module under Module>Drongo's Artillery to allow tweaking the system.
Mortars will respond faster than heavier assets.
Do not mix different types of artillery asset in one group.
Do not put batteries under human control.
RHS M119 and D30 guns behave slightly differently due config issues. Their shells are guided by script in the terminal phase.


MIXED MISSIONS
As of version 1.45, each tube in a battery can be given unique rounds and fuses in the same mission. Select the warhead and fuse, then click "Set Tube". If this is not done for each tube, those that have not been set will inherit the settings of the selected tube when XMIT is clicked.

Note that when repeating a mission from the previous missions list, each tube will need to be set again.


CLASS NAMES
AAF vehicles:
I_MBT_01_arty_F
DRA_truck_H_I

DPICM MLRS:
DRA_MLRS_B
DRA_MLRS_O

AAF groups:
HAF_SPGSection_Scorcher
HAF_SPGPlatoon_Scorcher

DRA_Radar_01_F
DRA_CRAM_01

DRA_UAV_01_B
DRA_UAV_01_O
DRA_UAV_01_I
DRA_SuicideDrone_01_backpack_B
DRA_SuicideDrone_01_backpack_O
DRA_SuicideDrone_01_backpack_I

DRA_MiniHarpy_LM_B
DRA_MiniHarpy_LM_O
DRA_MiniHarpy_LM_I


INCOMPATIBLE UNITS
The following units are currently incompatible for reasons beyond my control:

"pook_A222_BLUFOR", // won't aim up, works for OPFOR
"pook_A222_INDFOR", // won't aim up, works for OPFOR
"pook_BGM109_VLS", // Tomahawk, uses cruise missile code, not arty
"pook_3K60_BLUFOR", // BAL, won't aim up, works for other sides
"pook_MZKT_AMMO_BLUFOR", // ammo bearer
"pook_MZKT_AMMO_INDFOR", // ammo bearer
"pook_CAESAR_INDFOR", // BLUFOR works, but INDEP doesn't
"pook_1B75_INDFOR", // arty radar
"pook_1B75_OPFOR",
"pook_1L220UK_INDFOR", // arty radar
"pook_9K52_BLUFOR", // FROG7, BLUFOR/OPFOR isn't working for some reason, INDEP works though
"pook_9K52_OPFOR", 
"pook_4K51_BLUFOR", // Rubezh, probably needs special code
"pook_4K51_INDFOR", 
"pook_4K51_OPFOR"

I will attempt to remedy this in a future patch.


KNOWN BUGS
Mini Harpy drones can destabilize and crash if time acceleration is used.
The transition to attack can be janky for suicide drones, this will be fixed in a future patch.
Setting large values for C-RAM and radar can affect performance.
Cluster cruise missiles are unreliable in MP.


FUTURE PLANS
Long-range loitering munition based on the Ababil-3.
Airburst ability to modded artillery.
Completely fix Mini Harpy stability issues.
Uploading new waypoint sets to cruise missiles in flight.


CREDITS
CoC:				Unified Artillery for OFP, the system this is based upon
YonV:				Heaps of testing and very helpful input
Drongo:				Development and scripting
Chops:				Airburst/delay fuse code, MiniHarpy model and config, testing, design help
James:				Testing, design help
Zodd:				Testing
D.Smithy:			Real-world artillery knowledge, testing
Rydygier:			Box sheaf script
Kawa:				Localization code, French localization
TheTimidShade:		Beam strike scripts (see more if his work here: https://steamcommunity.com/id/TheTimidShade/myworkshopfiles/?appid=107410)
Viper1Zero:			US voice set https://www.youtube.com/c/Viper1Zero/videos
Red Dog:			Testing
gsg94490:			Testing
Fuzzle:				Audio mixing for the voice sets
VedKay:				Yugoslav and Australian voice sets, testing, graphics, missions and a lot of other stuff
Nidroneb:			French voice set
Mildly_Interested:	A lot of testing and feedback
Rimmy:				Australian voiceset
Digby:				Imperial Guard voiceset
Mundy:				Testing

A huge thanks to my Patrons and supporters:
Ahmad Fadhil Mohamed
Alexander Isaksson Norum
Alex Lacy
Andreas Nilson
Ave Sum
Azza
B. Hinton
Beags and Jam
Ben_at_Arms
Berl Ancell
Bretto1945
Bret Bothelio
Bruno Roberto Corrêa
Bullrich von Salz
Cedric Oliver
Chris Hall
Daniel Selby
David Catley
David Husa
David Kudýn
DavidSköld
Declan Emery
Desmond Abrams
Doctor
Elliot Taylor
EO
Fearmonger
Fetus114
Ferdinand
Frédérick Milhomme
Frosties
Gary Jackson
Gordon
gsg94490
Haakon Longbeard
Hogosha
Ian Schonely
Its_the_Jonah
James Hill
James tribbles
Jason Dotson
Jason Kieft
Jayrad
Jessica Ferguson
JimmyJamJams
Jonathan Harris
Karol Zaczek
Kelvin P
Kenneth Kilvington
Kevin Kelly
Logan Scott
LONEWOLF352
Longbeard
Marshall Bouldin
Matt Henderson
Magoo
MoonGuy
Nam
Nicholas Auger
Nicholas Odgers
Nick Gregory
Ole Petter Johnsen
Owen Siegfried
Paramarine Task Force
Paul T
Pernox
PHILLIP HARRIS
Proxno
Pusu npt
Ryan
Rolly uk
Roman Martinez
Sean Martin
sebastiaan reedijk
SETH BARCELLO
Sly
Slav_Man_Shae
Sonny Hermansen
Stuart Burling
swagggenius
Terrance
The One on the Rock
Timothy Hill
Tim O’Ceallaigh
Totem
tunou xiong
VedKay
ViperBAT46 DTF46
Wulf
WW3andMe
YonV
Zakuaz
Thanks also to the guys who post encouragement, bug reports and suggestions.

THEFT OF MY WORK
My artillery mod was stolen, edited and re-released in violation of the license by BlackAlpha of tier1ops.eu. Here is a video showing my original work and his stolen edit:

https://www.youtube.com/watch?v=Oe7G6WwxQVU

Please share this video and let the community know that BlackAlpha and tier1ops.eu are thieves.

CONTACT
Check my YouTube channel for trailers, WIP etc:
https://www.youtube.com/channel/UCrZtKPYPS9iYzu1EAzTLYgg

I am not on the BIS forums. I can be emailed at drongomods@gmail.com.

LICENSE
You must receive my permission to use any of the scripts, configs, concepts or designs of this addon in the development of other projects.
You may not distribute altered versions of this addon.
You may not use this addon or any derivatives thereof in any way for monetary gain.
You may not use this addon or any derivatives thereof as part of any submission to any contest of any kind.
You may not port this addon to any other game (it may ONLY be used with Arma 3).
You may not use this addon with VBS, VBS2, VBS3 or any similar product.
You may not re-upload to Steam.
This addon may not be used for any commercial purpose.
This addon may not be used for training purposes.
This addon may not be used as a tool by military, law enforcement or security groups/individuals.

If you need an exception, contact me.

CHANGELOG
v1.52
Fixed:		AD radar dummies were not being deleted
Fixed:		MiniHarpy launcher losing EH after ending a mission

v1.51
Added:		New airburst system
Added:		Artillery radar can now target incoming for AD
Changed:	Aiming sensitivity of grenade-drones
Fixed:		Several minor issues

v1.5
Added:		Grenade-dropping drones
Fixed:		Assets over water were not firing

v1.49
Fixed:		Issue with Options module and older missions

v1.48
Added:		Counter-battery radar now estimates position of firing system
Improved:	Counter-battery radar is better optimized
Changes:	Requirements for spotter range/LOS disabled by default

v1.47
Added:		Requirement for spotter to be within range of the target (range can be configured in the options module)
Added:		Requirement for spotter to have LOS to the target (can be turned off in the options module)

v1.46
Added:		Code to reset RHS guns when they get stuck
Fixed:		Several minor script issues

v1.45 hotfix
Fixed:		Issues related to set tube

v1.45
Improved:	MiniHarpy launch reliability
Removed:	MIXED fuse
Added:		Each tube can now be given separate ammo/fuse settings

v1.44
Fixed:		Numerous issues with Pook's Artillery

v1.43
Fixed:		Excluding sensor access did not work

v1.42
Added:		EW vehicles can trigger the fuses on incoming artillery rounds (effectively functioning as a C-RAM)
Added:		EW vehicles can now be managed under the C-RAM menu
Changed:	Reduced speed for guided and laser-guided shells in their terminal phase

v1.41
Added:		Immediate suppression option
Added:		Immediate suppression (smoke) option

v1.4
Fixed:		Diagnostics option not showing if other Drongo mods loaded

v1.138
Fixed:		MiniHarpy launches beyond first didn't create the munition
Fixed:		INDEP satellites spawned on BLUFOR

v1.137
Fixed:		Drongo's Artillery will only show up in the ACE menu if the player has access
Improved:	Reliability of MiniHarpy launch

v1.136
Changed:	ACE menu integration only happens if the unit has artillery access at mission start
Fixed:		Errors with plotting virtual asset missions

v1.135
Added:		Zamak MiniHarpy launcher to AAF
Added:		M5 MiniHarpy launcher to CSAT
Improved:	MiniHarpy flight stability
Removed:	M5 MLRS from AAF

v1.134
Fixed:		Bug with backpack radios

v1.133
Added:		Unique key

v1.132
Added:		Support for GM artillery
Improved:	Gun angle detection code

v1.131
Added:		Module option to disable ACE menu integration

v1.13
Added:		ACE menu integration
Changed:	MiniHarpy launcher can launch in volleys

v1.12
Fixed:		EW vehicles stopped working once no crew were present

v1.11
Fixed:		EW vehicle module giving script error

v1.1
Added:		CSLA radio classes
Fixed:		RHS 9P129s were staying BSY after deploying

v1.09
Fixed:		REDFOR and INDFOR cruise missile drones were not spawning after launch

v1.08
Added:		Icons for MiniHarpy
Improved:	MiniHarpy model
Improved:	MiniHarpy flight stability
Improved:	MiniHarpy attack code
Fixed:		Cruise missiles and MiniHarpy drone objects sometimes collided with ammunition objects upon launch
Fixed:		Backpack radios not being detected
Fixed:		Could not cycle through tubes in the plot menu

v1.073
Fixed:		MiniHarpy failing to launch

v1.072
Added:		Check to further address the "stuck camera" bug

v1.071
Added:		Dialog exit key will now also reset player view
Changed:	Dramatically reduced radar cross section of MiniHarpy
Changed:	MiniHarpy killed EH now has a sleep to attempt to prevent the "stuck camera" bug

v1.07
Added:		Support for ACE DAGR/MicroDAGR and designator/rangefinders
Changed:	Huge buff to MiniHarpy damage
Fixed:		HC issue

v1.061
Fixed:		MiniHarpy issue

v1.06
Fixed:		Orbital and virtual assets were not showing up for Independent

v1.05
Added:		Option to input target coordinates with binoculars
Added:		Improved cruise missiles
Added:		Imperial Guard voice set
Changed:	Buffed loitering munition damage
Changed:	Excluded arty from dynamic simulation and DMP caching
Fixed:		A bug that sometimes prevented loitering munition warheads from exploding
Fixed:		Module settings were not affecting railgun/beam kill/damage radius
Fixed:		C-RAM alarm not playing in MP
Improved:	Gun on target code
Improved:	Accuracy of interval code

v1.04
Added:		Loitering munitions (manual and automatic engagement)
Added:		Orbital beam and railgun strikes
Added:		C-RAM
Added:		Cruise missiles
Added:		Surveillance satellites
Added:		Electronic warfare against drones (and optionally aircraft)
Added:		Counter-battery radar with alerts and shell tracking
Added:		Virtual assets (module based)
Added:		Dialogs for C-RAM, radar, satellite and loitering munition management
Added:		Delayed fuse, improved airburst
Added:		Rolling barrages
Added:		"Move" order
Added:		Restrict Users module
Added:		New voice sets (US English, Yugoslav, Australian English, French)
Added:		Blacklist module
Added:		AI control for suicide drones
Added:		A huge range of QOL improvements
Fixed:		Various issues
Improved:	Mod compatibility

v1.03
Fixed:		CBA keybind problems. Note: open the dialog once after changing the bind to save it.
Changed:	When using rounds with long thrust time (eg. some rockets) doArtilleryFire will be used.
Changed:	Artillery pieces will turn to face their rough target point before processing the mission (thanks Ryan)

v1.021
Added:	Interval between rounds

v1.02
Fixed:	Error when selecting next tube

v1.01
Hotfix for compatibility with DCE

v1.0
Public release
Complete rewrite and overhaul of the code
Changed: Combined Assets and Aimpoint dialog
Changed: Replaced scripted airburst with shells configured for airburst
Changed: Options are now set in a single module
Improved: Shell guidance
Removed: Artificial inaccuracy
Added: Module option to disable VCOM for arty groups
Improved: Generic profile (for non-vanilla assets)
Added: "Assisted" mode (setVelocity) to deal with recalcitrant artillery pieces that won't fire on target
Fixed: Illumination rounds
Fixed: Debug mode by default
Fixed: Force Release not working
Fixed: Mark shells on by default
Fixed: Assets never lost BSY status
Fixed: Grid reference error
Added: Choice between 8 digit or 10 digit grid reference
Added: Assisted Accuracy to rectify inaccurate BIS rocket artillery
Added: Module Option to apply Assisted Accuracy to all assets
Fixed: CUP M1129 allowed low angle
Fixed: CBA key required rebinding every mission

v???
Unknown

v0.38
Increased possible range for polar missions to 10,000

v0.37
Added polar missions
Adjusted aimpoint UI

v0.36
Reworked the profile for rocket artillery due to BIS changing the muzzle modes
Re-added Low Angle to rocket artillery
Dramatic increase in rocket artillery range
Support for the new AAF MLRS

v0.35
Fixed bug with adjusting fire (was multiplying dtaXspotter twice)
Automatic inputting of the spotter's position is now turned off (mapclick will automatically input it though)
Cosmetic dialog changes

v0.34
DPICM rounds for the vanilla howitzers and MLRS
Versions of the MLRS with DPICM loaded by default
Shell cam

v0.33 (secret handshake edition)
It is a mystery

v0.32
Unknown

v0.301
Fixed a problem with OPFOR assets not showing up in the system

v0.30
Allowed control over each individual tube in a battery
Redesigned dialog
Added code to prevent some of the "drifting rounds" bug (big thanks to MaHuJa and BlackAlpha of tier1ops.eu)
Made the system automatically detect most (all?) 3rd party artillery units
Removed most of the hard-coded unit detection code
Added distance and gun-target line to the dialog
Added ability to exclude groups using the array dtaExclude (add group, leader vehicle or leader vehicle classname)
Removed doArtilleryFire commands for preloading ammo as this command is still hopelessly broken
Added a new module called "Track Rounds" to help with testing
Changed locality check for firing from server to whereever the asset is local
Redisgned the repeat mission system so only a single dialog is used
Reduced report spam
Added elevation of target and selected asset to the main dialog
Added dta_fnc_PlaceMarker for testing purposes
Fixed a bug in Tube.sqf that prevented sheafs from working properly
Dramatically increased the speed of MLRS firing
Added an M4 Scorcher to the AAF
Added an M5 MLRS to the AAF
Added M4 Platoon, M4 Section and M5 Section to the AAF
Changed cfgPatches entry from dta to DrongosArtillery (may require deleting the addOns[] and addOnsAuto[] entry from mission.sqm files to update missions)
Added debug markers for adjusting fire when dtaDebug is true
Tweaked the adjust code a little (seems to be working reliably now)
Brought back the XMIT button

v0.291
Hotfix to fix bug with audio

v0.29
Fixed airburst not working
Fixed menu selections not saving
Made it possible to restrict users by class and/or unit
Added the ability to set which audio is used for each side
Reduced the default time to process the first round of a firemission from 60 + (random 30) to 30 + (random 30)
Improved initial loading time
Tweaked mixed impact/airburst to alternate by odd and even numbered tubes in a battery
Added support for Reyhard's M119 (don't know where it went the first time)

v0.28
Partial French localization (all done by Kawa)
Added support for Reyhard's M119 (thanks to K4ble for reminding me to add this)
Added an option to use mapclick to input coordinates (can be disabled with a module)
Removed the "Elevation" option from the dialog as it does not work
Added support for weapons that inherit from Reyhard's Static Weapons

v0.27
Added support for Reyhard's Static Weapons (thanks to Kawa for getting me off my backside to do this)
Implemented CBA_fnc_registerKeybind functionality so users can bind their own key (thanks to JCae2798 for letting me know this was possible)
Removed double-clicking a radio to open the dialog

v0.26
Fixed TFAR compatibility
Increased mortar and howitzer HE shell lethality to attempt to match real-world values (may do too much damage against non-personnel targets now)
Tweaked configs to change the dispersion of BIS shells to almost zero

v0.25
Made tube detection less reliant on the display name (which causes errors with non-English versions)
Fixed dialog errors (listScrollBar, colorFocused, colorBackGroundFocused not defined)

v0.24
Added a check to \Dialog\Transmit.sqf to prevent a battery from being given multiple fire missions at the same time (possible cause of the "drifting rounds" bug)

v0.23
Aimed at fixing rounds drifting far off target with the following means:
Added debug chat to check the angle and elevation of turrets on firing tubes
Added debug text to round markers reporting the angle of the tube that fired them
Added disableAI "TARGET" to \Control\Tube.sqf to stop "drifting" rounds
Added disableAI "AUTOTARGET" to \Control\Tube.sqf to stop "drifting" rounds
Added enableAI "TARGET" to \Control\Tube.sqf after the tube is finished firing
Added enableAI "AUTOTARGET" to \Control\Tube.sqf after the tube is finished firing
Increased delay between rounds for 82mm and 155mm

v0.22
Added dta_fnc_HasRadio to check if the player has a radio
Fixed a bug with \Misc\CommsPlay.sqf not detecting player radio

v0.21
Added support for dedicated servers (hopefully)
Added support for TFAR (hopefully)
Tried to add support for ACRE

v0.2
Changed to an 8 digit grid reference
Stopped the MTO message for all except the first round (side chat will still appear for FFE)
Added a return to assets button to the aimpoint and control dialogs
Last dialog is now remembered
Added and End Of Mission button which releases the asset and closes the dialog
FFE no longer automatically releases the asset (must manually select End Of Mission)
PLOT no longer automatically releases the asset (must manually select End Of Mission)
Adjusted MLRS fire speed
Adjusted time between mortar rounds to 10 seconds (was 5)
Changed the way "rounds complete" is called (was using an estimate of time, now called by the asset itself when the final round is fired)
Added a help button to the aimpoint dialog
Added a dedicated key to access the dialogs (Windows app key by default, change in the userconfig file)