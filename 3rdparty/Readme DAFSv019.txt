Drongo's AI Fire Support
for Arma 3
v0.19

14 May 2022

Discord for my mods: https://discord.gg/XSRHPEd
Support me on Patreon: https://www.patreon.com/DrongoMods

REQUIREMENTS
Arma 3

OVERVIEW
This mod provides a module that allows AI units to call air, artillery support and air-to-air support. The module provides several customization options (accuracy, chance of support being granted, frequency of checks, etc). If Drongo's Air Ops is installed, aircraft will use DAO's CAS AI, CAP AI and Gunship AI.


EXCLUDING A GROUP
You can exclude a group from being available for AI support calls with this code:

MY_GROUP setVariable["dafsExclude",TRUE,TRUE]


RESTRICTING BY CLASS
It is possible to make squads require a "Forward Observer" to call support. In addition to meeting the rank requirement, if FO classes are defined, a man or vehicle of that class must be present in the group to call support. If no classes are defined, this will not be a requirement. To define classes, sync dummy infantry units or empty vehicles to the module. The class of the dummy will be registered. The dummy unit will be deleted.

Note that rank checks still apply.


OTHER
As of v009, it is possible to toggle use of arty or CAS on and off (so the AI can only call arty or only call air). These settings will be globally set across all sides.


THEFT OF MY WORK
My artillery mod was stolen, edited and re-released in violation of the license by BlackAlpha of tier1ops.eu. Here is a video showing my original work and his stolen edit:

https://www.youtube.com/watch?v=Oe7G6WwxQVU

Please share this video and let the community know that BlackAlpha and tier1ops.eu are thieves.


CREDITS
Drongo:	Concept, scripting
Rimmy:	Help SOG PF support/Testing

Special thanks to VedKay for all his work behind the scenes

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

CONTACT
I put a lot of time and effort into my mods. I support single, coop and MP players with unique mods and new features. Please show your support, subscribe, follow and rate my mods. Please promote my work on social media and forums. If you have the inclination and cash to spare, you can find my Patreon https://www.patreon.com/DrongoMods

Most of my mods and missions are released on my Patreon page. You don't need to be a Patron to download them: https://www.patreon.com/DrongoMods

Check my YouTube channel for trailers, WIP etc:
https://www.youtube.com/channel/UCrZtKPYPS9iYzu1EAzTLYgg

Discord for my mods: https://discord.gg/XSRHPEd

I am not on the BIS forums. I can be emailed at drongomods@gmail.com.
I am not on social media, so I would appreciate it if those of you who are would help promote my mods.

CHANGELOG
v0.19
Fixed:		Random assets were used even with Use Closest setting

v0.18
Added:		Option to select closest asset to calling group
Changed:	Guns for CAP, Use arty and Use CAP are now local to each module
Fixed:		Rocket launchers not being chosen as arty assets

v0.17
Added:		Can restrict support calls to certain classNames
Fixed:		Aircraft called from VAM sometimes defaulted to LOITER orders

v0.16
Fixed:		Error with VAM check

v0.15
Added:		More control over CAP availability
Fixed:		Various errors

v0.14
Added:		SOG PF support
Added:		Unique key

v0.13
Changed:	Code overhaul

v0.122
Fixed:		VAM calls checked for Plane, should be Air

v0.121
Fixed:		CAP calls could endlessly pull craft from VAM

v0.12
Added:		Support for VAM spawn in air modules
Fixed:		Script erros with VAM

v0.11
Added:		Support for DAO gunship scripts
Changed:	Aircraft on CAP or CAS will linger over the target for 5-10 minutes before becoming available again
Changed:	If DAO is present, CAP and CAS will egress for 90 seconds after these missions are complete

v0.1
Added:		DAFS can now call upon VAM aircraft if Drongo's Air Ops is present

v009:
Added:		Option to toggle arty/CAS on/off

v008:
Fixed:		Non-aircraft try to act as CAP

v007:
Added:		CAP option

v006:
Changed:	Air units with no weapons or only machine guns will no longer be called for support
Changed:	Enemy air units will no longer be targeted

v005:
Fixed:		Friendly rabbits were protecting players from being targeted
Fixed:		Units were being set to cooldown at the start of the mission

v004:
Changed:	Each side's module now has a slightly staggered startup time

v003:
Added:		Minimum safe distance option

v002:
Fixed:		Bug preventing EAST from using assets

v001:		First release

LICENSE
Arma Public License Share Alike (APL-SA) 
https://www.bohemia.net/community/licenses/arma-public-license-share-alike

Brief summary of this Licence

PLEASE, NOTE THAT THIS SUMMARY HAS NO LEGAL EFFECT AND IS ONLY OF AN INFORMATORY NATURE DESIGNED FOR YOU TO GET THE BASIC INFORMATION ABOUT THE CONTENT OF THIS LICENCE. THE ONLY LEGALLY BINDING PROVISIONS ARE THOSE IN THE ORIGINAL AND FULL TEXT OF THIS LICENCE.

With this licence you are free to adapt (i.e. modify, rework or update) and share (i.e. copy, distribute or transmit) the material under the following conditions:

    Attribution - You must attribute the material in the manner specified by the author or licensor (but not in any way that suggests that they endorse you or your use of the material).
    Noncommercial - You may not use this material for any commercial purposes.
    Arma Only - You may not convert or adapt this material to be used in other games than Arma.
    Share Alike - If you adapt, or build upon this material, you may distribute the resulting material only under the same license.
