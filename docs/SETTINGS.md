# CBA settings

Everything under **Options > Addon Options**. `Default` is the value the addon
ships with, which a mission or the forced list below can override.

## Admin Panel (`adminpanel`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable admin console | CHECKBOX | Ghosts of Battle > Admin Console | `true` | Registers the admin console keybinds and the #ghost admin commands. Off leaves the addon loaded and inert - it does not grant or revoke anybody's admi |
| Ghost admins may open it | CHECKBOX | Ghosts of Battle > Admin Console | `true` | Lets anyone carrying ghost's own admin flag open the console, as well as the uids in the mission's list. Off means the mission's list is the only way  |

## Ai Disembark (`ai_disembark`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Force reload on disembarking AI | CHECKBOX | Ghosts of Battle > Ghosts of Battle - AI Disembark | `false` | Forces AI to play reload animation after disembarking from vehicle. Prevents instant shooting after disembark. |
| Stay in immobile vehicle chance | SLIDER | Ghosts of Battle > Ghosts of Battle - AI Disembark | `[0, 1, 0, 0, true]` | Chance that AI will be told to stay in immobilized vehicles, applied on vehicle init. |

## Back To Game (`back_to_game`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable Back To Game | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Back To Game | `true` | Activate teleport and loadout restore after reconnect. |
| Teleport to leader | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Back To Game | `true` | Allow player teleportation to his group leader. |
| Teleport to vehicle | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Back To Game | `true` | Allow player teleportation to his last vehicle or group leader vehicle. |
| Remove body | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Back To Game | `true` | Removes bodies of alive people who disconnected. |

## BFT (`bft`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable group markers | CHECKBOX | Ghosts of Battle > BFT | `true` | Blue Force Tracking: every group that has its tracker on is drawn on the map for everyone who shares one of its networks. |
| Auto enable for | LIST | Ghosts of Battle > BFT | `[[0, 1, 2], ["None", "Player", "All"], 2` | None: nothing is tracked until switched on by hand. Player or All: groups nobody has configured are tracked automatically. |
| Member markers | LIST | Ghosts of Battle > BFT | `[[0, 1, 2], ["Off", "Own squad", "All tr` | Individual marks for the men inside tracked groups, coloured by fire team. Own squad: your group's members. All tracked: every same-side tracked group |
| Update delay | SLIDER | Ghosts of Battle > BFT | `[1, 60, 5, 0]` | Delay between group marker updates. |
| Marker shape | LIST | Ghosts of Battle > BFT | `[["a", "b", "o", "n"], ["Automatic", "Bl` | Warning! Taking this off automatic will also affect enemy groups. |
| Position: tracking mode | LIST | Ghosts of Battle > BFT | `[["leader", "weightedAverage"], ["Leader` | The way a group's position is calculated. |
| Position: trailing mode | LIST | Ghosts of Battle > BFT | `[["none", "weightedAverage", "delayed"],` | Lets a group's position trail behind its actual position. |
| Position: trailing count | SLIDER | Ghosts of Battle > BFT | `[1, 25, 5, 0]` | Amount of recent positions considered. |
| Position: trailing weight | SLIDER | Ghosts of Battle > BFT | `[0, 1, 0.75, 2]` | Factor with which the weight decreases with per position. |
| Map settings menu | CHECKBOX | Ghosts of Battle > BFT | `true` | Allows group leaders to change their own marker with ACE self interaction while the map is open. |
| Group name options | EDITBOX | Ghosts of Battle > BFT | `["Zulu,Lima,Uniform,Echo,Whiskey,Tango"]` | Names available in the ACE BFT settings, separated by comma. |
| Preferred icons | EDITBOX | Ghosts of Battle > BFT | `["inf, motor_inf, mech_inf, air, armor, ` | Icons offered first, before the Other icons submenu. |
| Icons blacklist | EDITBOX | Ghosts of Battle > BFT | `["unknown, uav"]` | Icons a group leader may never pick. |
| Preferred colors | EDITBOX | Ghosts of Battle > BFT | `["ColorBLUFOR, ColorOPFOR, ColorIndepend` | Colors offered first, before the Other colors submenu. |
| Colors blacklist | EDITBOX | Ghosts of Battle > BFT | `["Default, ColorWEST, ColorEAST, ColorGU` | Colors a group leader may never pick. |
| Obfuscate other sides | CHECKBOX | Ghosts of Battle > BFT | `true` | Groups of another side show as an unknown icon with their side's name and colour, rather than their own. |
| Admin sees everything | CHECKBOX | Ghosts of Battle > BFT | `true` | A logged-in admin draws every group: networks, tracker state and side obfuscation are all ignored for them. Admins can still switch it off for themsel |

## Backpack On Chest (`boc`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Disable BackpackOnChest | CHECKBOX | Ghosts of Battle > Backpack On Chest | `false` | Prohibit BackpackOnChest features |
| Force Walking | CHECKBOX | Ghosts of Battle > Backpack On Chest | `true` | Player is forced to walk when backpack is on chest |

## Chat (`chat`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Allow global/side chat | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Chat | `true` | Should players be allowed to chat on global and their side chat. If disabled chat messages from these channels will only be visible to admins and zeus |

## Common (`common`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| ISR unit variable | EDITBOX | Ghosts of Battle > Common | `"isISR"` | Name of the unit variable marking someone as an ISR operator. Gates the hacking tablet and Intel Hunt processing. Set it on a unit with: this setVaria |
| Threat Board Debug | CHECKBOX | Ghosts of Battle > Common | `false` | Log every contact ghost's sensors file on a side's threat board - what that side knows, where, how wrong it might be, and which sensor said so. |

## Equipment (`equipment`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable Vector Target Marker | CHECKBOX | Ghosts of Battle > Equipment | `true` | Allows placing a map marker on the point aimed at through a [Ghost] Vector Designator. |
| Vector Marker Type | LIST | Ghosts of Battle > Equipment | `[ ["hd_dot", "hd_objective", "hd_destroy` | Marker placed on the target position. |
| Vector Marker Color | LIST | Ghosts of Battle > Equipment | `[ ["Default", "ColorBlack", "ColorGrey",` | Color of the marker placed on the target position. |
| Vector 3D Marker Duration (s) | SLIDER | Ghosts of Battle > Equipment | `[0, 600, 120, 0]` | Shows the marker name in-world (3D) at the target position for this many seconds. 0 = disabled. |
| Vector Marker Lifetime (s) | SLIDER | Ghosts of Battle > Equipment | `[0, 1800, 0, 0]` | Marker is deleted after this many seconds. 0 = permanent. |
| Enable Vector Personal Waypoint | CHECKBOX | Ghosts of Battle > Equipment | `true` | Allows dropping a waypoint only you can see on the point aimed at through a [Ghost] Vector Designator. One at a time; aiming at it again clears it. |
| Vector Waypoint Type | EDITBOX | Ghosts of Battle > Equipment | `"mil_dot"` | Marker type for the personal waypoint. Deliberately smaller than the shared target marker - mil_dot is a good default. |
| Vector Waypoint Colour | EDITBOX | Ghosts of Battle > Equipment | `"ColorYellow"` | Marker colour for the personal waypoint. Something the shared marker is not. |

## Evac (`evac`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable Medic Evac | CHECKBOX | Ghosts of Battle > Evac | `true` | Master toggle for the medic 'Evacuate (Reinforce)' action that replaces respawn. |
| Medics Only | CHECKBOX | Ghosts of Battle > Evac | `true` | If checked, only ACE medics can evacuate a downed player. Uncheck to let anyone do it. |
| Evac Time (s) | SLIDER | Ghosts of Battle > Evac | `[0, 60, EVAC_DEFAULT_TIME, 0]` | How long the medic's evacuate progress bar takes, in seconds. |

## Fatigue (`fatigue`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable custom high jog coefficient | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Fatigue | `false` | Enables custom high jog coefficient when moving with weapon ready. Requires ACE Advanced Fatigue working. |
| Custom high jog coefficient | SLIDER | Ghosts of Battle > Ghosts of Battle - Fatigue | `[0.8, 1, 0.9, 0, true]` | Additional stamina used coefficient when moving with weapon ready. 100% is default ACE, 80% it's like you had low weapon ready. |

## Friendly Fire (`friendly_fire`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Friendly fire logging | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Friendly Fire | `false` |  |

## Grass (`grass`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Force Grass | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Grass | `false` | Forces grass for all players |

## Hacking (`hacking`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable Hacking | CHECKBOX | Ghosts of Battle > Hacking | `true` | Master toggle for the tower/drone hacking self-interaction. |
| Hack Condition | EDITBOX | Ghosts of Battle > Hacking | `"true"` | SQF condition that must also return true before anyone can hack. `_this` is the unit. Left as ""true"" it never blocks anything. Example: side group _ |
| Hackable Tower Classes | EDITBOX | Ghosts of Battle > Hacking | `"Land_TTowerBig_2_F,Land_TTowerBig_1_F,L` | Comma-separated object classnames hackable as 'towers', in addition to Electronic War Zones emitters. |
| Downable Drone Classes | EDITBOX | Ghosts of Battle > Hacking | `""` | Comma-separated vehicle classnames that 'Down Drone' may target. Blank = any enemy UAV, which is the old behaviour. Listed classes still have to be en |
| Require ISR operator | CHECKBOX | Ghosts of Battle > Hacking | `true` | On: only a unit flagged as ISR can use the intrusion suite. This is the ONLY gate on hacking - no device is checked. The flag and its variable name ar |
| Scanner Variable | EDITBOX | Ghosts of Battle > Hacking | `"ghost_isScanner"` | Unit variable that controls who sweeps for emitters. Everyone does by default - no device and no flag needed. Set this variable FALSE on a unit to den |
| Scanner Alarm Volume | SLIDER | Ghosts of Battle > Hacking | `[0, 2, 1, 1]` | How loud YOUR scanner's alarm beeps. 0 silences the beep entirely - the screen still blinks and the notification still shows. |
| Remote Unit Hack | CHECKBOX | Ghosts of Battle > Hacking | `false` | Players can hack an enemy soldier's comms at range. Success buys one intel product centred on the target; failure can alert the area and jam your own  |
| Remote Hack Range (m) | SLIDER | Ghosts of Battle > Hacking | `[50, 3000, 800, 0]` | How far a target handset can be to start a remote hack, and how far before the signal drops. Everything else about the failure package keeps its shipp |
| Tower TAOR Marker(s) | EDITBOX | Ghosts of Battle > Hacking | `""` | Comma-separated area marker names. Towers are hackable only inside them. Blank = anywhere on the map. |
| Enemy Cell Phone Carriers (%) | SLIDER | Ghosts of Battle > Hacking | `[0, 100, 30, 0]` | Percentage of enemy soldiers carrying a hackable cell phone. The rest have nothing to hack. Requires Remote Unit Hack on. |
| Deposits per Hint | SLIDER | Ghosts of Battle > Hacking | `[1, 50, 10, 0]` | Intel items that must be DEPOSITED at a drop before ISR processes a batch and one hint circle fires. Items carried in a pocket count for nothing. |
| Documents on Bodies (%) | SLIDER | Ghosts of Battle > Hacking | `[0, 100, 30, 0]` | Chance a body with no phone still carries searchable documents. Insurgents always carry a phone, so this only governs everyone else. |
| Extra detection per net | SLIDER | Ghosts of Battle > Hacking | `[0, 40, 10, 0, false]` | How much each net broken recently adds to the chance of being detected on the NEXT one, in percentage points. 0 restores a flat chance. |
| Detection memory | SLIDER | Ghosts of Battle > Hacking | `[60, 3600, 600, 0, false]` | How long, in seconds, a broken net keeps counting against you. One step is shed for every window that passes quietly, so a patient section is forgiven |
| Hackable nets | LIST | Ghosts of Battle > Hacking | `[[0, 1, 2], ["Hostile only", "Hostile an` | Whose cell nets the remote hack will offer. Your own group is never on the list. A net that is not hostile is labelled FRIENDLY on the card, so nobody |

## HUD (`hud`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable HUD | CHECKBOX | Ghosts of Battle > HUD | `true` | Draws the two readout slots on the game screen. Off leaves the screen exactly as it was; the map suite is unaffected either way. |
| Hide with the map | CHECKBOX | Ghosts of Battle > HUD | `true` | Takes the HUD off screen while the map is open, where the tacpad shows the same readings in more detail. Off leaves it up, over the map. |
| HUD opacity | SLIDER | Ghosts of Battle > HUD | `[0, 1, 0.55, 2, true]` | How solid the slot backgrounds are over the world. The text stays fully opaque at any setting. |

## Insurgents (`insurgents`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| (built at runtime) | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Insurgents | `true` | If disabled gear from this configFile class will be not used. Mission defined gear will be not disabled. |

## Medical Treatment (`medical_treatment`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Fatal Injuries Cardiac Arrest Time Coefficient | SLIDER | Ghosts of Battle > Medical Treatment | `[0.01, 1, 0.2, 2]` | Coefficient for controlling the Cardiac Arrest Time on fatal injuries when 'Fatal Injuries' is NOT 'Always'. |

## Messaging (`messaging`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable messaging | CHECKBOX | Ghosts of Battle > Messaging | `true` | Off refuses every submission and leaves the store empty. Nothing else in the mod depends on it being on. |
| Shared mailboxes | EDITBOX | Ghosts of Battle > Messaging | `"C2, C2.reports, FIRES, FIRES.cas, FIRES` | Comma-separated names of mailboxes anybody can address. A thread sent to one is filed there rather than mailed to a person. Empty means personal and g |
| Command group | EDITBOX | Ghosts of Battle > Messaging | `""` | Group name, as shown on its roster row, that a report reaches when its ROUTING line is ticked. Empty disables the tick. |
| Idle close (min) | SLIDER | Ghosts of Battle > Messaging | `[0, 240, 60, 0, true]` | A thread nobody has touched for this long closes itself. 0 never closes one. |
| EW link state | CHECKBOX | Ghosts of Battle > Messaging | `true` | Jamming affects the data link: inside a jammer's falloff a send transmits late, inside its core it is refused outright. Receiving is never blocked. Th |
| TIC alerts the side | CHECKBOX | Ghosts of Battle > Messaging | `true` | A CONTACT REPORT (TIC) reaches every player on the sender's side and raises the shared alert bus, on top of whoever it was addressed to. |
| TIC drops a map marker | CHECKBOX | Ghosts of Battle > Messaging | `true` | Marks the contact grid for the sender's side. |
| TIC marker type | EDITBOX | Ghosts of Battle > Messaging | `"loc_Attack"` | CfgMarkers class for the marker a TIC drops. loc_Attack is the crossed-swords task icon - a contact is an event, not a unit symbol, and o_inf put a re |
| TIC marker colour | EDITBOX | Ghosts of Battle > Messaging | `"ColorRed"` | CfgMarkerColors class for the marker a TIC drops. |
| Post reports to ALiVE | CHECKBOX | Ghosts of Battle > Messaging | `true` | A template marked reportable - CONTACTREP and SITREP - is also filed with ALiVE's C2ISTAR as a spotrep or sitrep, with a companion map marker. Silentl |
| ALiVE report locality | LIST | Ghosts of Battle > Messaging | `[["GLOBAL", "SIDE", "GROUP"], ["Everyone` | Who an ALiVE-posted report and its marker are visible to. |
| SITREP marker type | EDITBOX | Ghosts of Battle > Messaging | `"b_inf"` | CfgMarkers class for the marker that accompanies an ALiVE-posted SITREP. |
| Seed test traffic | CHECKBOX | Ghosts of Battle > Messaging | `false` | Posts three sample threads - a FLASH CASEVAC, a SITREP and a CONTACTREP - shortly after you join, so the reader has something in it. For testing the U |

## Notify (`notify`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable stacked notifications | CHECKBOX | Ghosts of Battle > Notifications | `true` | Off falls back to the plain hint the caller would otherwise have used. |
| Corner | LIST | Ghosts of Battle > Notifications | `[[0, 1, 2, 3], ["Top left", "Top right",` | Which corner the stack grows from. |
| Max on screen | SLIDER | Ghosts of Battle > Notifications | `[1, SLOT_COUNT, 4, 0, true]` | Notifications shown at once; the rest queue until a slot frees. |
| Duration (sec) | SLIDER | Ghosts of Battle > Notifications | `[2, 30, 8, 0, true]` | How long a notification stays before it fades out. |
| Width | SLIDER | Ghosts of Battle > Notifications | `[0.1, 0.5, 0.22, 2, true]` | Width of the stack as a fraction of the safe zone. |
| Text size | SLIDER | Ghosts of Battle > Notifications | `[0.5, 3, 1, 2, true]` | Scales the notification text. The panel grows with it, so a larger size means taller notifications rather than cramped ones. |
| Font | LIST | Ghosts of Battle > Notifications | `[ ["RobotoCondensed", "RobotoCondensedBo` | Typeface for notifications. The monospace and console faces suit a technical readout; the Purista faces are what Arma's own UI uses. |

## Patrol Base (`patrol_base`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enabled | CHECKBOX | Ghosts of Battle > Patrol Base | `true` | Enable the patrol base system. |
| Max patrol bases | SLIDER | Ghosts of Battle > Patrol Base | `[1, 10, 3, 0, true]` | How many patrol bases may exist at once. |
| Kits required | SLIDER | Ghosts of Battle > Patrol Base | `[1, 10, 4, 0, true]` | How many Patrol Base Kits must be dropped within range to build one base. |
| Kit gather range (m) | SLIDER | Ghosts of Battle > Patrol Base | `[1, 30, 5, 1, true]` | Radius the dropped kits must lie within to count. |
| Base object | EDITBOX | Ghosts of Battle > Patrol Base | `"ghost_satcom_deployed"` | Class spawned at the base on deploy - it marks the location and carries the Unbuild action. Defaults to ghost's own SatCom mast; if that class is not  |
| On-deploy init (SQF) | EDITBOX | Ghosts of Battle > Patrol Base | `"params ['_base', '_pos', '_name']; [_ba` | SQF run on the server after a base is built. Passed: [_beacon, _pos, _name, _side, _builder]. Blank = nothing. |
| On-undeploy init (SQF) | EDITBOX | Ghosts of Battle > Patrol Base | `"params ['_object']; [_object] remoteExe` | SQF run on the server while the base beacon still exists (before it is deleted). Passed: [_beacon, _pos, _name, _side]. Blank = nothing. |

## Pointing (`pointing`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable pointing in vehicles | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Pointing | `true` | Allows to point current camera direction in vehicles to rest of the crew. |

## Remotesensors (`remotesensors`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable remote sensors on clients | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Remote Sensors | `true` | This command will halt raycasting calculations (on the local machine only) for all groups which don't contain any local entities. Units, that are not  |

## Respawn (`respawn`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable respawn | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Respawn | `false` | Enables respawn with given delay. |
| Respawn delay | SLIDER | Ghosts of Battle > Ghosts of Battle - Respawn | `[1, 900, getNumber (configFile >> "CfgRe` | How much time must pass before player will respawn (if respawn is enabled). |

## safestart (`safestart`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Lock weapon | CHECKBOX | Ghosts of Battle > Ghosts of Battle - safestart | `true` | Locks your weapon safety on game start |

## Spectator (`spectator`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable spectator | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Spectator | `false` | Enables spectator for dead players |
| Allow spectator for unconscious | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Spectator | `false` | Allows spectator also for unconscious players. Requires enabling spectator. |
| Enable spectator (CLIENT) | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Spectator | `true` | Enables spectator when unconscious if it's allowed by server setting. |
| Unconscious spectator delay | SLIDER | Ghosts of Battle > Ghosts of Battle - Spectator | `[1, 300, 30, 0]` | How much time must pass before unconscious players get spectator. |
| Sides available for spectating | LIST | Ghosts of Battle > Ghosts of Battle - Spectator | `[[0, 1, 3, 4, 2], ["Friendly", "Player s` | Spectator will be able to see and track units from given sides. |
| Sides available for spectating | LIST | Ghosts of Battle > Ghosts of Battle - Spectator | `[[0, 1, 3, 4, 2], ["Friendly", "Player s` | Spectator will be able to see and track units from given sides. |
| Allow civilian spectating | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Spectator | `false` | Allows tracking units from civilian side. |
| Allow civilian spectating | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Spectator | `false` | Allows tracking units from civilian side. |
| Allow AI spectating | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Spectator | `false` | Allows tracking AI units from whitelisted sides. |
| Allow AI spectating | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Spectator | `false` | Allows tracking AI units from whitelisted sides. |
| Allow free camera | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Spectator | `false` | Allows spectator to move his camera freely. |
| Allow free camera | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Spectator | `false` | Allows spectator to move his camera freely. |
| Allow TPP Camera | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Spectator | `false` | Allows spectator to use third person camera. |
| Allow TPP Camera | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Spectator | `false` | Allows spectator to use third person camera. |

## Tacpad (`tacpad`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable tacpad | CHECKBOX | Ghosts of Battle > Tacpad | `true` | Draws the tacpad panels on the map screen. Off leaves the vanilla map exactly as it was. |
| Colour scheme | LIST | Ghosts of Battle > Tacpad | `[ ["light", "olive", "sand", "dark", "ni` | Three day grounds and three night ones, in matching pairs: FIELD GREY with NIGHT / RED, OLIVE with NIGHT OLIVE, SAND with NIGHT SAND. A night scheme i |
| Panel opacity | SLIDER | Ghosts of Battle > Tacpad | `[0.3, 1, 0.92, 2, true]` | How solid a panel's ground is over the map. The text stays fully opaque at any setting - a translucent panel you cannot read is not a panel. |
| Keep clear of reserved areas | CHECKBOX | Ghosts of Battle > Tacpad | `true` | Slides a panel out of the game menu, the chat overlay and the map's scale and contour legend when you drop it on one. Off lets you put a panel anywher |
| Custom: ground | EDITBOX | Ghosts of Battle > Tacpad | `""` | Panel background as r,g,b from 0 to 1, e.g. 0.05,0.06,0.05. Used only by the Custom scheme. |
| Custom: text | EDITBOX | Ghosts of Battle > Tacpad | `""` | Text and divider colour as r,g,b from 0 to 1. Used only by the Custom scheme. |
| Custom: accent | EDITBOX | Ghosts of Battle > Tacpad | `""` | Selection, alerts and FLASH traffic as r,g,b from 0 to 1. Used only by the Custom scheme. |
| Quick replies | EDITBOX | Ghosts of Battle > Tacpad | `["roger, wilco, WAIT ONE, SMOKE OUT, LZ ` | The buttons under an open thread, separated by commas. A template id (roger, wilco, inprogress, cantco, close) sends that reply; anything else is sent |
| UI size | SLIDER | Ghosts of Battle > Tacpad | `[0.5, 2, 1, 2, true]` | Scales the whole tacpad - panels, rows and type together. The in-game settings screen steps it by 1, 5 or 10 percent; this is the same number. |
| Text size | SLIDER | Ghosts of Battle > Tacpad | `[0.6, 2.5, 1.2, 2, true]` | Scales all tacpad text. Rows and headers grow with it, so a larger setting means fewer rows visible rather than text spilling out of them. |

## Tacpad Apps (`tacpad_apps`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Show live tiles | CHECKBOX | Ghosts of Battle > Tacpad | `true` | The band across the top: drones, jamming, weather and radio. Clicking a tile opens that app. |
| Live tile rows | LIST | Ghosts of Battle > Tacpad | `[["1", "2"], ["One row", "Two rows"], 0]` | How many rows the tile band stands in. One is the design's band across the top; two stacks the same tiles in half the width. |
| Show squad list | CHECKBOX | Ghosts of Battle > Tacpad | `true` | The left rail: one row per man with a health swatch. |
| Show message reader | CHECKBOX | Ghosts of Battle > Tacpad | `true` | The docked message reader. Needs the messaging addon - without it the panel says so. |
| Show troops in contact button | CHECKBOX | Ghosts of Battle > Tacpad | `true` | The big one under the rail. One press marks the map, alerts the side and files a contact report on the command net. A mission that would rather a cont |
| Show map tools | CHECKBOX | Ghosts of Battle > Tacpad | `true` | The tool strip along the bottom. A front end for PLP Map Tools Remastered - without that mod the buttons are greyed. |
| Reader: high density | CHECKBOX | Ghosts of Battle > Tacpad | `false` | Off is standard density - subject on one line, state under it. On puts one thread per row so a screenful can be scanned at once, which is what a TOC w |
| Show settings gear | CHECKBOX | Ghosts of Battle > Tacpad | `true` | The gear under the message reader that opens the settings screen. Off leaves Addon Options as the only way to change the suite. |

## Tagging (`tagging`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Enable ACE Tagging markers | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Tagging | `false` | Automatically create markers on buildings sprayed with ACE Spray. |

## Towing (`towing`)

| Setting | Type | Category | Default | What it does |
|---|---|---|---|---|
| Add ropes to heavy duty vehicles | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Towing | `true` | Enables adding ropes to inventories of heavy duty vehicles such as MRAPs, IFVs, APCs and Tanks. |
| Add ropes to cars | CHECKBOX | Ghosts of Battle > Ghosts of Battle - Towing | `false` | Enables adding ropes to inventories of cars. |

## Forced by `cba_settings`

`addons/cba_settings/cba_settings.sqf` force-sets 658 values at mission start.
A forced setting cannot be changed in-game, and overrides the defaults above.

| Variable | Value |
|---|---|
| `ghostfa_mediumcaliber_cuasCeiling` | `1.4` |
| `ghostfa_mediumcaliber_enableAirburst` | `true` |
| `ghostfa_mediumcaliber_factionScaling` | `true` |
| `ghostfa_mediumcaliber_greenFraction` | `0.85` |
| `ghostfa_mediumcaliber_redFraction` | `0.75` |
| `UM_autoTriage_mode` | `2` |
| `UM_medNotif_clearActionEnabled` | `true` |
| `UM_unconIcon_enabled` | `true` |
| `UM_unconIcon_maxRange` | `100` |
| `UM_unconIcon_medicOnly` | `true` |
| `UM_unconIcon_minRange` | `4` |
| `UM_unconSpectator` | `false` |
| `UM_unconSpectator_arrestOnly` | `false` |
| `UM_unconSpectator_cameraModes` | `1` |
| `UM_unconVoice_arrestMute` | `true` |
| `UM_unconVoice_mode` | `0` |
| `UM_unconZeusExempt` | `true` |
| `ace_advanced_ballistics_ammoTemperatureEnabled` | `true` |
| `ace_advanced_ballistics_barrelLengthInfluenceEnabled` | `true` |
| `ace_advanced_ballistics_bulletTraceEnabled` | `true` |
| `ace_advanced_ballistics_enabled` | `true` |
| `ace_advanced_ballistics_muzzleVelocityVariationEnabled` | `true` |
| `ace_advanced_ballistics_simulationInterval` | `0.05` |
| `ace_advanced_fatigue_enabled` | `true` |
| `ace_advanced_fatigue_enableStaminaBar` | `false` |
| `ace_advanced_fatigue_loadFactor` | `0.5` |
| `ace_advanced_fatigue_performanceFactor` | `4` |
| `ace_advanced_fatigue_recoveryFactor` | `4` |
| `ace_advanced_fatigue_terrainGradientFactor` | `0.5` |
| `ace_missileguidance_chaffEffectivenessCoef` | `1` |
| `ace_missileguidance_flareAngleCoef` | `1` |
| `ace_missileguidance_flareEffectivenessCoef` | `1` |
| `ace_advanced_throwing_enabled` | `true` |
| `ace_advanced_throwing_enablePickUp` | `true` |
| `ace_advanced_throwing_enablePickUpAttached` | `true` |
| `ace_advanced_throwing_showMouseControls` | `true` |
| `ace_vehicle_damage_enableCarDamage` | `true` |
| `ace_vehicle_damage_enabled` | `true` |
| `ace_ai_assignNVG` | `true` |
| `ace_arsenal_allowDefaultLoadouts` | `true` |
| `ace_arsenal_allowSharedLoadouts` | `true` |
| `ace_arsenal_enableIdentityTabs` | `false` |
| `ace_arsenal_enableModIcons` | `1` |
| `ace_artillerytables_advancedCorrections` | `true` |
| `ace_artillerytables_disableArtilleryComputer` | `true` |
| `ace_mk6mortar_airResistanceEnabled` | `true` |
| `ace_mk6mortar_allowCompass` | `true` |
| `ace_mk6mortar_allowComputerRangefinder` | `true` |
| `ace_mk6mortar_useAmmoHandling` | `true` |
| `ace_captives_allowHandcuffOwnSide` | `true` |
| `ace_captives_allowSurrender` | `true` |
| `ace_captives_requireSurrender` | `2` |
| `ace_captives_requireSurrenderAi` | `false` |
| `ace_common_allowFadeMusic` | `true` |
| `ace_common_checkExtensions` | `false` |
| `ace_common_checkPBOsAction` | `2` |
| `ace_common_checkPBOsCheckAll` | `false` |
| `ace_common_checkPBOsWhitelist` | `"[]"` |
| `ace_common_deployedSwayFactor` | `1` |
| `ace_common_enableSway` | `true` |
| `ace_common_magneticDeclination` | `false` |
| `ace_common_restedSwayFactor` | `1` |
| `ace_common_swayFactor` | `1` |
| `ace_cookoff_ammoCookoffDuration` | `0.5` |
| `ace_cookoff_cookoffDuration` | `1` |
| `ace_cookoff_cookoffEnableProjectiles` | `true` |
| `ace_cookoff_cookoffEnableSound` | `true` |
| `ace_cookoff_destroyVehicleAfterCookoff` | `true` |
| `ace_cookoff_enableAmmobox` | `true` |
| `ace_cookoff_enableAmmoCookoff` | `true` |
| `ace_cookoff_enableFire` | `true` |
| `ace_cookoff_probabilityCoef` | `3` |
| `ace_cookoff_removeAmmoDuringCookoff` | `true` |
| `ace_csw_ammoHandling` | `2` |
| `ace_csw_defaultAssemblyMode` | `true` |
| `ace_csw_dragAfterDeploy` | `true` |
| `ace_csw_handleExtraMagazines` | `true` |
| `ace_csw_handleExtraMagazinesType` | `0` |
| `ace_csw_progressBarTimeCoefficent` | `1` |
| `ace_dragging_allowRunWithLightweight` | `true` |
| `ace_dragging_dragAndFire` | `true` |
| `ace_dragging_skipContainerWeight` | `false` |
| `ace_dragging_weightCoefficient` | `1` |
| `ace_explosives_customTimerDefault` | `30` |
| `ace_explosives_customTimerMax` | `900` |
| `ace_explosives_customTimerMin` | `5` |
| `ace_explosives_explodeOnDefuse` | `true` |
| `ace_explosives_punishNonSpecialists` | `true` |
| `ace_explosives_requireSpecialist` | `true` |
| `acex_field_rations_enabled` | `false` |
| `ace_fire_dropWeapon` | `2` |
| `ace_fire_enabled` | `true` |
| `ace_fire_enableFlare` | `true` |
| `ace_fortify_markObjectsOnMap` | `1` |
| `ace_fortify_timeCostCoefficient` | `1` |
| `ace_fortify_timeMin` | `1.5` |
| `acex_fortify_settingHint` | `1` |
| `ace_frag_enabled` | `true` |
| `ace_frag_reflectionsEnabled` | `true` |
| `ace_frag_spallEnabled` | `true` |
| `ace_frag_spallIntensity` | `1` |
| `ace_gforces_coef` | `1` |
| `ace_gforces_enabledFor` | `2` |
| `ace_goggles_effects` | `2` |
| `ace_goggles_showClearGlasses` | `true` |
| `ace_grenades_convertExplosives` | `true` |
| `ace_hearing_autoAddEarplugsToUnits` | `1` |
| `ace_hearing_enableCombatDeafness` | `true` |
| `ace_hearing_enabledForZeusUnits` | `true` |
| `ace_interaction_disableNegativeRating` | `true` |
| `ace_interaction_enableAnimActions` | `true` |
| `ace_interaction_enableGroupRenaming` | `true` |
| `ace_interaction_enableMagazinePassing` | `true` |
| `ace_interaction_enableTeamManagement` | `true` |
| `ace_interaction_enableWeaponAttachments` | `true` |
| `ace_interaction_interactWithEnemyCrew` | `0` |
| `ace_interaction_interactWithTerrainObjects` | `true` |
| `ace_interaction_remoteTeamManagement` | `true` |
| `ace_killtracker_showCrewKills` | `true` |
| `ace_killtracker_showMedicalWounds` | `2` |
| `ace_killtracker_trackAI` | `true` |
| `ace_cargo_carryAfterUnload` | `true` |
| `ace_cargo_enable` | `true` |
| `ace_cargo_enableDeploy` | `true` |
| `ace_cargo_enableRename` | `true` |
| `ace_cargo_loadTimeCoefficient` | `5` |
| `ace_cargo_paradropTimeCoefficent` | `2.5` |
| `ace_cargo_unloadOnKilled` | `0.5` |
| `ace_rearm_distance` | `20` |
| `ace_rearm_enabled` | `true` |
| `ace_rearm_level` | `0` |
| `ace_rearm_supply` | `0` |
| `ace_refuel_cargoRate` | `10` |
| `ace_refuel_enabled` | `true` |
| `ace_refuel_hoseLength` | `20` |
| `ace_refuel_progressDuration` | `2` |
| `ace_refuel_rate` | `0.9` |
| `ace_towing_addRopeToVehicleInventory` | `true` |
| `ace_magazinerepack_repackAnimation` | `true` |
| `ace_magazinerepack_repackLoadedMagazines` | `true` |
| `ace_magazinerepack_timePerAmmo` | `1.5` |
| `ace_magazinerepack_timePerBeltLink` | `8` |
| `ace_magazinerepack_timePerMagazine` | `2` |
| `ace_map_BFT_Enabled` | `false` |
| `ace_map_BFT_HideAiGroups` | `false` |
| `ace_map_BFT_Interval` | `1` |
| `ace_map_BFT_ShowPlayerNames` | `false` |
| `ace_map_DefaultChannel` | `1` |
| `ace_map_mapGlow` | `true` |
| `ace_map_mapIllumination` | `true` |
| `ace_map_mapLimitZoom` | `false` |
| `ace_map_mapShake` | `true` |
| `ace_map_mapShowCursorCoordinates` | `true` |
| `ace_markers_moveRestriction` | `0` |
| `ace_markers_timestampEnabled` | `true` |
| `ace_markers_timestampFormat` | `"HH:MM"` |
| `ace_markers_timestampHourFormat` | `24` |
| `ace_markers_timestampTimezone` | `0` |
| `ace_markers_TimestampUTCMinutesOffset` | `0` |
| `ace_markers_timestampUTCOffset` | `0` |
| `ace_map_gestures_allowCurator` | `true` |
| `ace_map_gestures_allowSpectator` | `true` |
| `ace_map_gestures_briefingMode` | `0` |
| `ace_map_gestures_enabled` | `true` |
| `ace_map_gestures_interval` | `0.03` |
| `ace_map_gestures_maxRange` | `7` |
| `ace_map_gestures_maxRangeCamera` | `14` |
| `ace_map_gestures_onlyShowFriendlys` | `false` |
| `ace_maptools_drawStraightLines` | `true` |
| `ace_maptools_plottingBoardAllowChannelDrawing` | `1` |
| `ace_medical_ai_enabledFor` | `2` |
| `ace_medical_ai_requireItems` | `2` |
| `ace_medical_AIDamageThreshold` | `0.5` |
| `ace_medical_alternateArmorPenetration` | `true` |
| `ace_medical_bleedingCoefficient` | `0.3` |
| `ace_medical_blood_bloodLifetime` | `900` |
| `ace_medical_blood_enabledFor` | `2` |
| `ace_medical_blood_maxBloodObjects` | `500` |
| `ace_medical_deathChance` | `0` |
| `ace_medical_dropWeaponUnconsciousChance` | `0.40031` |
| `ace_medical_enableVehicleCrashes` | `true` |
| `ace_medical_fatalDamageSource` | `0` |
| `ace_medical_fractureChance` | `0.45` |
| `ace_medical_fractures` | `1` |
| `ace_medical_ivFlowRate` | `1.5` |
| `ace_medical_limbDamageThreshold` | `5` |
| `ace_medical_limping` | `1` |
| `ace_medical_painCoefficient` | `1` |
| `ace_medical_painUnconsciousChance` | `0.1` |
| `ace_medical_painUnconsciousThreshold` | `0.5` |
| `ace_medical_playerDamageThreshold` | `1.75` |
| `ace_medical_spontaneousWakeUpChance` | `0.3` |
| `ace_medical_spontaneousWakeUpEpinephrineBoost` | `25` |
| `ace_medical_statemachine_AIUnconsciousness` | `true` |
| `ace_medical_statemachine_cardiacArrestBleedoutEnabled` | `false` |
| `ace_medical_statemachine_cardiacArrestTime` | `720` |
| `ace_medical_statemachine_fatalInjuriesAI` | `0` |
| `ace_medical_statemachine_fatalInjuriesPlayer` | `2` |
| `ace_medical_useLimbDamage` | `2` |
| `ace_medical_vitals_simulateSpO2` | `true` |
| `ace_medical_windowOnWakeUp` | `1` |
| `ace_medical_treatment_advancedBandages` | `2` |
| `ace_medical_treatment_advancedDiagnose` | `1` |
| `ace_medical_treatment_advancedMedication` | `true` |
| `ace_medical_treatment_allowBodyBagUnconscious` | `false` |
| `ace_medical_treatment_allowGraveDigging` | `1` |
| `ace_medical_treatment_allowLitterCreation` | `true` |
| `ace_medical_treatment_allowSelfIV` | `1` |
| `ace_medical_treatment_allowSelfPAK` | `1` |
| `ace_medical_treatment_allowSelfStitch` | `1` |
| `ace_medical_treatment_allowSharedEquipment` | `0` |
| `ace_medical_treatment_bandageEffectiveness` | `1.5` |
| `ace_medical_treatment_bandageRollover` | `true` |
| `ace_medical_treatment_clearTrauma` | `1` |
| `ace_medical_treatment_consumePAK` | `1` |
| `ace_medical_treatment_consumeSurgicalKit` | `2` |
| `ace_medical_treatment_convertItems` | `0` |
| `ace_medical_treatment_cprSuccessChanceMax` | `0.65` |
| `ace_medical_treatment_cprSuccessChanceMin` | `0.4` |
| `ace_medical_treatment_graveDiggingMarker` | `true` |
| `ace_medical_treatment_holsterRequired` | `0` |
| `ace_medical_treatment_litterCleanupDelay` | `600` |
| `ace_medical_treatment_locationAdenosine` | `0` |
| `ace_medical_treatment_locationEpinephrine` | `0` |
| `ace_medical_treatment_locationIV` | `0` |
| `ace_medical_treatment_locationMorphine` | `0` |
| `ace_medical_treatment_locationPAK` | `3` |
| `ace_medical_treatment_locationsBoostTraining` | `true` |
| `ace_medical_treatment_locationSplint` | `0` |
| `ace_medical_treatment_locationSurgicalKit` | `0` |
| `ace_medical_treatment_maxLitterObjects` | `500` |
| `ace_medical_treatment_medicAdenosine` | `0` |
| `ace_medical_treatment_medicEpinephrine` | `1` |
| `ace_medical_treatment_medicIV` | `1` |
| `ace_medical_treatment_medicMorphine` | `0` |
| `ace_medical_treatment_medicPAK` | `0` |
| `ace_medical_treatment_medicSplint` | `0` |
| `ace_medical_treatment_medicSurgicalKit` | `1` |
| `ace_medical_treatment_numericalPulse` | `0` |
| `ace_medical_treatment_timeCoefficientPAK` | `1` |
| `ace_medical_treatment_treatmentTimeAutoinjector` | `2.005` |
| `ace_medical_treatment_treatmentTimeBodyBag` | `9` |
| `ace_medical_treatment_treatmentTimeCoeffZeus` | `1` |
| `ace_medical_treatment_treatmentTimeCPR` | `9` |
| `ace_medical_treatment_treatmentTimeGrave` | `30` |
| `ace_medical_treatment_treatmentTimeIV` | `9` |
| `ace_medical_treatment_treatmentTimeSplint` | `7` |
| `ace_medical_treatment_treatmentTimeTourniquet` | `3.75` |
| `ace_medical_treatment_treatmentTimeTrainedAutoinjector` | `5` |
| `ace_medical_treatment_treatmentTimeTrainedIV` | `12` |
| `ace_medical_treatment_treatmentTimeTrainedSplint` | `7` |
| `ace_medical_treatment_treatmentTimeTrainedTourniquet` | `7` |
| `ace_medical_treatment_woundReopenChance` | `0.8` |
| `ace_medical_treatment_woundStitchTime` | `5` |
| `ace_nametags_ambientBrightnessAffectViewDist` | `1` |
| `ace_nametags_playerNamesMaxAlpha` | `0.8` |
| `ace_nametags_playerNamesViewDistance` | `5` |
| `ace_nametags_showCursorTagForVehicles` | `false` |
| `ace_nightvision_aimDownSightsBlur` | `0` |
| `ace_nightvision_disableNVGsWithSights` | `false` |
| `ace_nightvision_effectScaling` | `0.9` |
| `ace_nightvision_fogScaling` | `0.1` |
| `ace_nightvision_noiseScaling` | `0.1` |
| `ace_nightvision_shutterEffects` | `true` |
| `ace_overheating_cookoffCoef` | `1` |
| `ace_overheating_coolingCoef` | `1` |
| `ace_overheating_displayTextOnJam` | `true` |
| `ace_overheating_enabled` | `true` |
| `ace_overheating_heatCoef` | `0.4` |
| `ace_overheating_jamChanceCoef` | `1` |
| `ace_overheating_overheatingDispersion` | `true` |
| `ace_overheating_overheatingRateOfFire` | `true` |
| `ace_overheating_particleEffectsAndDispersionDistance` | `3000` |
| `ace_overheating_suppressorCoef` | `1` |
| `ace_overheating_unJamFailChance` | `0.1` |
| `ace_overheating_unJamOnreload` | `true` |
| `ace_overheating_unJamOnSwapBarrel` | `true` |
| `ace_finger_enabled` | `true` |
| `ace_finger_maxRange` | `4` |
| `ace_finger_proximityScaling` | `true` |
| `ace_finger_sizeCoef` | `1` |
| `ace_pylons_enabledForZeus` | `true` |
| `ace_pylons_enabledFromAmmoTrucks` | `true` |
| `ace_pylons_rearmNewPylons` | `true` |
| `ace_pylons_requireEngineer` | `false` |
| `ace_pylons_requireToolkit` | `false` |
| `ace_pylons_searchDistance` | `45` |
| `ace_pylons_timePerPylon` | `5` |
| `ace_quickmount_distance` | `3` |
| `ace_quickmount_enabled` | `true` |
| `ace_quickmount_enableMenu` | `3` |
| `ace_quickmount_speed` | `18` |
| `ace_repair_addSpareParts` | `true` |
| `ace_repair_autoShutOffEngineWhenStartingRepair` | `true` |
| `ace_repair_consumeItem_toolKit` | `0` |
| `ace_repair_displayTextOnRepair` | `true` |
| `ace_repair_enabled` | `true` |
| `ace_repair_engineerSetting_fullRepair` | `2` |
| `ace_repair_engineerSetting_repair` | `1` |
| `ace_repair_engineerSetting_wheel` | `0` |
| `ace_repair_fullRepairLocation` | `2` |
| `ace_repair_fullRepairRequiredItems` | `["ace_repair_anyToolKit"]` |
| `ace_repair_locationsBoostTraining` | `true` |
| `ace_repair_miscRepairRequiredItems` | `["ace_repair_anyToolKit"]` |
| `ace_repair_miscRepairTime` | `15` |
| `ace_repair_patchWheelEnabled` | `0` |
| `ace_repair_patchWheelLocation` | `["ground","vehicle"]` |
| `ace_repair_patchWheelMaximumRepair` | `0.3` |
| `ace_repair_patchWheelRequiredItems` | `["ace_repair_anyToolKit"]` |
| `ace_repair_patchWheelTime` | `5` |
| `ace_repair_repairDamageThreshold` | `0.6` |
| `ace_repair_repairDamageThreshold_engineer` | `0.4` |
| `ace_repair_timeCoefficientFullRepair` | `1.5` |
| `ace_repair_wheelChangeTime` | `10` |
| `ace_repair_wheelRepairRequiredItems` | `[]` |
| `ace_respawn_removeDeadBodiesDisconnected` | `false` |
| `ace_respawn_savePreDeathGear` | `true` |
| `ace_scopes_correctZeroing` | `true` |
| `ace_scopes_deduceBarometricPressureFromTerrainAltitude` | `true` |
| `ace_scopes_defaultZeroRange` | `100` |
| `ace_scopes_enabled` | `true` |
| `ace_scopes_forceUseOfAdjustmentTurrets` | `true` |
| `ace_scopes_overwriteZeroRange` | `true` |
| `ace_scopes_simplifiedZeroing` | `false` |
| `ace_scopes_zeroReferenceBarometricPressure` | `1013.25` |
| `ace_scopes_zeroReferenceHumidity` | `0` |
| `ace_scopes_zeroReferenceTemperature` | `15` |
| `acex_sitting_enable` | `true` |
| `ace_spectator_enableAI` | `false` |
| `ace_spectator_maxFollowDistance` | `5` |
| `ace_spectator_restrictModes` | `0` |
| `ace_spectator_restrictVisions` | `0` |
| `ace_switchunits_enableSafeZone` | `true` |
| `ace_switchunits_enableSwitchUnits` | `false` |
| `ace_switchunits_safeZoneRadius` | `100` |
| `ace_switchunits_switchToCivilian` | `false` |
| `ace_switchunits_switchToEast` | `false` |
| `ace_switchunits_switchToIndependent` | `false` |
| `ace_switchunits_switchToWest` | `false` |
| `ace_trenches_bigEnvelopeDigDuration` | `25` |
| `ace_trenches_bigEnvelopeRemoveDuration` | `15` |
| `ace_trenches_smallEnvelopeDigDuration` | `20` |
| `ace_trenches_smallEnvelopeRemoveDuration` | `12` |
| `ace_fastroping_autoAddFRIES` | `false` |
| `ace_fastroping_requireRopeItems` | `true` |
| `ace_flags_enableCarrying` | `true` |
| `ace_flags_enablePlacing` | `true` |
| `ace_gunbag_swapGunbagEnabled` | `true` |
| `ace_hitreactions_minDamageToTrigger` | `0.1` |
| `ace_hitreactions_weaponDropChanceArmHitAI` | `0.15` |
| `ace_hitreactions_weaponDropChanceArmHitPlayer` | `0.1` |
| `ace_laser_dispersionCount` | `2` |
| `ace_laser_showLaserOnMap` | `1` |
| `ace_marker_flags_placeAnywhere` | `false` |
| `ace_microdagr_mapDataAvailable` | `2` |
| `ace_microdagr_waypointPrecision` | `3` |
| `ace_noradio_enabled` | `true` |
| `ace_optionsmenu_showNewsOnMainMenu` | `false` |
| `ace_overpressure_backblastDistanceCoefficient` | `1` |
| `ace_overpressure_overpressureDistanceCoefficient` | `1` |
| `ace_parachute_failureChance` | `0.15` |
| `ace_parachute_hideAltimeter` | `true` |
| `ace_tagging_quickTag` | `1` |
| `ace_vehiclelock_defaultLockpickStrength` | `20` |
| `ace_vehiclelock_lockVehicleInventory` | `true` |
| `ace_vehiclelock_vehicleStartingLockState` | `-1` |
| `ace_novehicleclanlogo_enabled` | `true` |
| `ace_vehicles_keepEngineRunning` | `false` |
| `ace_vehicles_speedLimiterStep` | `5` |
| `ace_viewports_enabled` | `true` |
| `ace_viewdistance_enabled` | `false` |
| `ace_viewdistance_limitViewDistance` | `10000` |
| `ace_viewdistance_objectViewDistanceCoeff` | `0` |
| `ace_viewdistance_viewDistanceAirVehicle` | `0` |
| `ace_viewdistance_viewDistanceLandVehicle` | `0` |
| `ace_viewdistance_viewDistanceOnFoot` | `0` |
| `acex_viewrestriction_mode` | `3` |
| `acex_viewrestriction_modeSelectiveAir` | `0` |
| `acex_viewrestriction_modeSelectiveFoot` | `0` |
| `acex_viewrestriction_modeSelectiveLand` | `0` |
| `acex_viewrestriction_modeSelectiveSea` | `0` |
| `acex_viewrestriction_preserveView` | `true` |
| `ace_weather_enabled` | `true` |
| `ace_weather_showCheckAirTemperature` | `true` |
| `ace_weather_updateInterval` | `60` |
| `ace_weather_windSimulation` | `true` |
| `ace_winddeflection_enabled` | `true` |
| `ace_winddeflection_simulationInterval` | `0.05` |
| `ace_winddeflection_vehicleEnabled` | `true` |
| `ace_zeus_autoAddObjects` | `false` |
| `ace_zeus_canCreateZeus` | `0` |
| `ace_zeus_radioOrdnance` | `false` |
| `ace_zeus_remoteWind` | `false` |
| `ace_zeus_revealMines` | `0` |
| `ace_zeus_zeusAscension` | `true` |
| `ace_zeus_zeusBird` | `false` |
| `acre_sys_core_fullDuplex` | `true` |
| `acre_sys_core_ts3ChannelName` | `"acre"` |
| `acre_sys_core_ts3ChannelPassword` | `"1234"` |
| `acre_sys_radio_defaultRadio` | `""` |
| `acre_sys_signal_signalModel` | `3` |
| `GW_setting_noModuleBehavior` | `"default"` |
| `AHDNC_main_enabled_VTOL` | `true` |
| `cba_diagnostic_watchInfoRefreshRate` | `0.2` |
| `cba_disposable_dropUsedLauncher` | `2` |
| `cba_disposable_replaceDisposableLauncher` | `false` |
| `cba_network_loadoutValidation` | `1` |
| `DT_terrainGridMax` | `50` |
| `DT_viewDistanceMax` | `12000` |
| `emr_main_allowClimbOnStandingUnits` | `false` |
| `emr_main_allowMidairClimbing` | `true` |
| `emr_main_animSpeedCoef` | `1` |
| `emr_main_animSpeedStaminaCoef` | `0.4` |
| `emr_main_assistDuty` | `1.5` |
| `emr_main_assistHeight` | `1` |
| `emr_main_blacklistStr` | `""` |
| `emr_main_climbingEnabled` | `true` |
| `emr_main_climbOnDuty` | `3.4` |
| `emr_main_climbOverDuty` | `3` |
| `emr_main_dropDuty` | `0.7` |
| `emr_main_enableWeightCheck` | `false` |
| `emr_main_jumpDuty` | `1` |
| `emr_main_jumpForwardVelocity` | `1.2` |
| `emr_main_jumpingEnabled` | `true` |
| `emr_main_jumpingLoadCoefficient` | `1` |
| `emr_main_jumpVelocity` | `3.5` |
| `emr_main_maxClimbHeight` | `2.6` |
| `emr_main_maxDropHeight` | `6` |
| `emr_main_maxWeightClimb1` | `100` |
| `emr_main_maxWeightClimb2` | `85` |
| `emr_main_maxWeightClimb3` | `60` |
| `emr_main_maxWeightJump` | `100` |
| `emr_main_minClimbTerrain` | `0.3` |
| `emr_main_staminaCoefficient` | `1` |
| `emr_main_whitelistStr` | `""` |
| `emr_main_yeetCoefficient` | `1.4` |
| `vnd_allowBotsShoot` | `true` |
| `vnd_fiberTTL` | `60` |
| `FPV_isUavCaptive` | `true` |
| `FPV_MaxFlightDistance` | `4000` |
| `ghost_ai_disembark_enabled` | `true` |
| `ghost_ai_disembark_stayInImmobileChance` | `0.2927` |
| `ghost_back_to_game_enableAddon` | `true` |
| `ghost_back_to_game_removeBody` | `true` |
| `ghost_back_to_game_teleportToLeader` | `true` |
| `ghost_back_to_game_teleportToVehicle` | `true` |
| `ghost_boc_disabled` | `false` |
| `ghost_bft_adminGodView` | `false` |
| `ghost_bft_autoEnable` | `2` |
| `ghost_bft_colorsBlacklist` | `"Default, ColorWEST, ColorEAST, ColorGUER, ColorCIV, Color1_` |
| `ghost_bft_enabled` | `true` |
| `ghost_bft_fuzzOtherSides` | `false` |
| `ghost_bft_iconsBlacklist` | `"unknown, uav"` |
| `ghost_bft_mapSettings` | `true` |
| `ghost_bft_markerShape` | `"a"` |
| `ghost_bft_nameOptions` | `"Zulu,Lima,Uniform,Echo,Whiskey,Tango"` |
| `ghost_bft_preferredColors` | `"ColorBLUFOR, ColorOPFOR, ColorIndependent, ColorCivilian, C` |
| `ghost_bft_preferredIcons` | `"inf, motor_inf, mech_inf, air, armor, recon"` |
| `ghost_bft_trackingMode` | `"weightedAverage"` |
| `ghost_bft_trailingCount` | `5` |
| `ghost_bft_trailingMode` | `"weightedAverage"` |
| `ghost_bft_trailingWeight` | `0.75` |
| `ghost_bft_updateDelay` | `5` |
| `ghost_boc_walk` | `true` |
| `ghost_chat_allowGlobalChat` | `true` |
| `ghost_evac_enabled` | `true` |
| `ghost_evac_medicOnly` | `true` |
| `ghost_evac_time` | `10` |
| `ghost_fatigue_highJogCoef` | `0.8` |
| `ghost_fatigue_highJogCoefEnabled` | `true` |
| `ghost_friendly_fire_loggingEnabled` | `true` |
| `ghost_grass_enabled` | `true` |
| `ghost_hacking_enabled` | `true` |
| `ghost_hacking_requireISR` | `true` |
| `ghost_hacking_towerClasses` | `"Land_TTowerBig_2_F,Land_TTowerBig_1_F,Land_Communication_F,` |
| `ghost_insurgents_enabled_CUP` | `false` |
| `ghost_insurgents_enabled_Vanilla` | `true` |
| `ghost_medical_treatment_fatalInjuriesCardiacArrestTimeCoefficient` | `0.2` |
| `ghost_pointing_vehicleEnabled` | `true` |
| `ghost_remotesensors_enabled` | `true` |
| `ghost_respawn_enabled` | `true` |
| `ghost_respawn_time` | `6` |
| `ghost_spectator_allowAI` | `false` |
| `ghost_spectator_allowAIUnconscious` | `false` |
| `ghost_spectator_allowUnconscious` | `true` |
| `ghost_spectator_civilianSide` | `false` |
| `ghost_spectator_civilianSideUnconscious` | `false` |
| `ghost_spectator_enabled` | `false` |
| `ghost_spectator_freeCamera` | `false` |
| `ghost_spectator_freeCameraUnconscious` | `false` |
| `ghost_spectator_sides` | `0` |
| `ghost_spectator_sidesUnconscious` | `0` |
| `ghost_spectator_TPPCamera` | `false` |
| `ghost_spectator_TPPCameraUnconscious` | `false` |
| `ghost_spectator_unconsciousDelay` | `30` |
| `ghost_suppress_checkLOS` | `true` |
| `ghost_suppress_overlayFadeoutTime` | `10` |
| `ghost_suppress_overlayOpacity` | `0.96` |
| `ghost_suppress_overlayTexture` | `1` |
| `ghost_suppress_projectileMaxDistance` | `9` |
| `ghost_suppress_shooterMinDistance` | `0` |
| `ghost_tagging_enabled` | `true` |
| `ghost_towing_addToCars` | `true` |
| `ghost_towing_addToHeavyDutyVehicles` | `true` |
| `Rev_tp_action_radius` | `5` |
| `Rev_tp_action_time` | `6` |
| `YMF_Settings_addEarplugs` | `true` |
| `YMF_Settings_allowInsigniaApplication` | `true` |
| `YMF_Settings_enableRadios` | `true` |
| `YMF_Settings_enableStagingSystem` | `true` |
| `YMF_Settings_enableVehicleInventory` | `true` |
| `YMF_Settings_enableVehiclePylon` | `true` |
| `YMF_Settings_enableVehicleRadios` | `true` |
| `YMF_Settings_enableVehicleSystem` | `true` |
| `YMF_Settings_jumpSimulation` | `2` |
| `YMF_Settings_jumpSimulationGlasses` | `true` |
| `YMF_Settings_jumpSimulationHat` | `true` |
| `YMF_Settings_jumpSimulationNVG` | `true` |
| `YMF_Settings_patrolBaseEnabled` | `true` |
| `YMF_Settings_patrolBaseKitCount` | `4` |
| `YMF_Settings_patrolBaseKitRange` | `3` |
| `YMF_Settings_patrolBaseMaxCount` | `3` |
| `YMF_Settings_patrolBaseZoneSize` | `15` |
| `YMF_Settings_setAiSystemDifficulty` | `2` |
| `YMF_Settings_setMissionType` | `1` |
| `YMF_Settings_setPlayerRank` | `true` |
| `YMF_Settings_setRadio` | `true` |
| `YMF_Settings_showDiaryRecords` | `true` |
| `YMF_Settings_vehicleFactions` | `"[""BLU_W_F"",""BLU_T_F"",""BLU_NATO_lxWS"",""BLU_F"",""USAF` |
| `ghostfa_ammo_debugBreaching` | `false` |
| `ghostfa_ammo_enableBreaching` | `true` |
| `ghostfa_antidrone_damageMultiplier` | `1` |
| `ghostfa_antidrone_lethalRadiusMultiplier` | `1` |
| `ghostfa_antidrone_triggerRadiusMultiplier` | `1` |
| `ghost_nvg_ACE` | `false` |
| `ghost_nvg_Blacklist` | `""` |
| `ghost_nvg_Effect` | `""` |
| `grad_trenches_functions_allowBigEnvelope` | `true` |
| `grad_trenches_functions_allowCamouflage` | `true` |
| `grad_trenches_functions_allowDigging` | `true` |
| `grad_trenches_functions_allowEffects` | `true` |
| `grad_trenches_functions_allowGiantEnvelope` | `true` |
| `grad_trenches_functions_allowHitDecay` | `true` |
| `grad_trenches_functions_allowLongEnvelope` | `true` |
| `grad_trenches_functions_allowShortEnvelope` | `true` |
| `grad_trenches_functions_allowSmallEnvelope` | `true` |
| `grad_trenches_functions_allowTextureLock` | `true` |
| `grad_trenches_functions_allowTrenchDecay` | `false` |
| `grad_trenches_functions_allowVehicleEnvelope` | `true` |
| `grad_trenches_functions_bigEnvelopeDamageMultiplier` | `2` |
| `grad_trenches_functions_bigEnvelopeDigTime` | `40` |
| `grad_trenches_functions_bigEnvelopeRemovalTime` | `-1` |
| `grad_trenches_functions_buildFatigueFactor` | `1` |
| `grad_trenches_functions_camouflageRequireEntrenchmentTool` | `true` |
| `grad_trenches_functions_createTrenchMarker` | `false` |
| `grad_trenches_functions_decayTime` | `1800` |
| `grad_trenches_functions_giantEnvelopeDamageMultiplier` | `1` |
| `grad_trenches_functions_giantEnvelopeDigTime` | `90` |
| `grad_trenches_functions_giantEnvelopeRemovalTime` | `-1` |
| `grad_trenches_functions_hitDecayMultiplier` | `1` |
| `grad_trenches_functions_LongEnvelopeDigTime` | `100` |
| `grad_trenches_functions_LongEnvelopeRemovalTime` | `-1` |
| `grad_trenches_functions_playersInAreaRadius` | `0` |
| `grad_trenches_functions_shortEnvelopeDamageMultiplier` | `2` |
| `grad_trenches_functions_shortEnvelopeDigTime` | `15` |
| `grad_trenches_functions_shortEnvelopeRemovalTime` | `-1` |
| `grad_trenches_functions_smallEnvelopeDamageMultiplier` | `3` |
| `grad_trenches_functions_smallEnvelopeDigTime` | `30` |
| `grad_trenches_functions_smallEnvelopeRemovalTime` | `-1` |
| `grad_trenches_functions_stopBuildingAtFatigueMax` | `true` |
| `grad_trenches_functions_textureLockDistance` | `5` |
| `grad_trenches_functions_timeoutToDecay` | `7200` |
| `grad_trenches_functions_vehicleEnvelopeDamageMultiplier` | `1` |
| `grad_trenches_functions_vehicleEnvelopeDigTime` | `120` |
| `grad_trenches_functions_vehicleEnvelopeRemovalTime` | `-1` |
| `grad_trenches_functions_vehicleTrenchBuildSpeed` | `5` |
| `GX_DRONES_AUTOCONNECT` | `true` |
| `GX_DRONES_COMMAND_INTERACTION_ENABLE` | `false` |
| `GX_DRONES_COMMAND_NON_CONNECTED_ENABLE` | `true` |
| `GX_DRONES_TIME_TO_DEPLOY` | `3` |
| `GX_DRONES_TIME_TO_PICKUP` | `3` |
| `GX_DRONES_TIME_TO_REARM` | `2` |
| `GX_DRONES_TIME_TO_RECHARGE` | `2` |
| `KJW_TwoPrimaryWeapons_blacklistedClasses` | `"[]"` |
| `KJW_TwoPrimaryWeapons_Enabled` | `true` |
| `KJW_TwoPrimaryWeapons_Launchers` | `true` |
| `KJW_TwoPrimaryWeapons_whitelistedClasses` | `"[]"` |
| `sss_artillery_autoTerminals` | `true` |
| `sss_artillery_manualInput` | `true` |
| `sss_artillery_rangeIndicators` | `true` |
| `sss_artillery_relocateCooldown` | `true` |
| `sss_artillery_taskMarkers` | `true` |
| `sss_artillery_visualAids` | `true` |
| `sss_cas_manualInput` | `true` |
| `sss_cas_taskMarkers` | `true` |
| `sss_cas_visualAids` | `true` |
| `sss_cas_visualAidsLive` | `true` |
| `sss_logistics_clearAreaRestriction` | `true` |
| `sss_logistics_cooldownTrigger` | `"END"` |
| `sss_logistics_manualInput` | `true` |
| `sss_logistics_taskMarkers` | `true` |
| `sss_logistics_visualAids` | `true` |
| `sss_logistics_visualAidsLive` | `true` |
| `sss_optionadminAccess` | `true` |
| `sss_optionadminSide` | `false` |
| `sss_optioncleanupCrew` | `true` |
| `sss_optiondebugGeneral` | `false` |
| `sss_optiondebugPerf` | `false` |
| `sss_optiondeleteVehicleOnEntityRemoval` | `true` |
| `sss_optionejectInterval` | `0.5` |
| `sss_optionmarkerScope` | `"ACCESS"` |
| `sss_optionnotifyScope` | `"ACCESS"` |
| `sss_optionremoteControlAddMap` | `true` |
| `sss_optionremoveEntityOnVehicleDeletion` | `true` |
| `sss_optionterminalActions` | `"ACE"` |
| `sss_optionterminalRequireAuth` | `true` |
| `sss_optionterminalRequireItems` | `false` |
| `sss_transport_autoTerminals` | `true` |
| `sss_transport_holdTimeoutStr` | `"-1"` |
| `sss_transport_manualInput` | `true` |
| `sss_transport_maxSearchRadiusStr` | `"1000"` |
| `sss_transport_RTBReset` | `true` |
| `sss_transport_RTBRestoreCrew` | `true` |
| `sss_transport_slingloadMassOverride` | `true` |
| `sss_transport_taskMarkers` | `true` |
| `sss_transport_visualAids` | `true` |
| `sss_transport_visualAidsLive` | `true` |
| `Fat_Lurch_Grid` | `true` |
| `Fat_Lurch_GridNum` | `10` |
| `Fat_Lurch_MapSlew` | `true` |
| `Fat_Lurch_Markers` | `true` |
| `Fat_Lurch_Measure` | `true` |
| `Fat_Lurch_ShowAz` | `true` |
| `Fat_Lurch_ShowEl` | `true` |
| `Fat_Lurch_ShowNorth` | `true` |
| `Fat_Lurch_ShowTarget` | `true` |
| `zen_area_markers_editableMarkers` | `0` |
| `zen_building_markers_enabled` | `true` |
| `zen_common_ascensionMessages` | `true` |
| `zen_common_autoAddObjects` | `false` |
| `zen_common_disableGearAnim` | `false` |
| `zen_compat_ace_hideModules` | `true` |
| `lambs_danger_cqbRange` | `100.128` |
| `lambs_danger_panicChance` | `0` |
| `lambs_eventhandlers_ExplosionEventHandlerEnabled` | `true` |
| `lambs_eventhandlers_ExplosionReactionTime` | `16` |
| `lambs_wp_autoAddArtillery` | `true` |
| `lambs_main_combatShareRange` | `750.692` |
| `lambs_main_maxRevealValue` | `1` |
| `lambs_main_minFriendlySuppressionDistance` | `0` |
| `lambs_main_minObstacleProximity` | `5` |
| `lambs_main_minSuppressionRange` | `50` |
| `lambs_main_radioBackpack` | `3600` |
| `lambs_main_radioDisabled` | `false` |
| `lambs_main_radioEast` | `1200` |
| `lambs_main_radioGuer` | `1200` |
| `lambs_main_radioShout` | `100` |
| `lambs_main_radioWest` | `1200` |
