Drongo's Dynamic Weather
for Arma 3
v0.15

by Drongo and Alias
5 May 2023

My Discord: https://discord.gg/XSRHPEd
My Patreon: https://www.patreon.com/DrongoMods
My YouTube channel: https://www.youtube.com/channel/UCrZtKPYPS9iYzu1EAzTLYgg

Alias's Patreon and Workshop:
https://www.patreon.com/aliascartoons
https://steamcommunity.com/id/aliascartoons/myworkshopfiles


REQUIREMENTS
Arma 3

tl;dr Easy random weather in SP/MP

OVERVIEW
DDW enables randomly changing weather in SP/MP with easy module-based setup. It has several weather presets:

sunny
cloudy
overcast
rainy
foggy
stormy
windy
monsoon
snow storm
dust storm
tornado

Each cycle, there is a chance that the weather will change. Possible presets, cycle length, change chance and change time can be set in the module.

The "weight" value next to each preset is how likely it is to be chosen.
0=never chosen
1=same chance as others
2=twice as likely as other presets (with a value of 1)
9=nine times as likely as other presets (with a value of 1)

Note that the monsoon, snow storm and dust storm can take some time to take effect. Make sure the cycle is long enough to accomodate this.

You can check the current weather present by interrogating the following string global variable on any client:

ddwWeatherCurrent

You can force a weather change by running this code on any client:

[]remoteExec["DDW_fnc_ChangeWeather",2];

Note that doing so may cause conflicts if snow storm, sand storm, monsoon or tornado is currently active.

SKIP TIME
For more details on this, see this command:
https://community.bistudio.com/wiki/skipTime

If this value is over 0, at mission start the time will skip ahead a random number of hours between 0 and this value. Note that using skipTime will affect weather. It can cause sudden, jarring changes.


LICENSE
Arma and Dayz Public License Share Alike (ADPL-SA)
https://www.bohemia.net/community/licenses/arma-and-dayz-public-license-share-alike-adpl-sa

If you need an exception to this license, contact me.

The following applies to the monsoon, snow storm, dust storm and tornado elements of this mod:

DO NOT INCORPORATE THIS SCRIPT OR PORTIONS OF IT IN MONETIZED PRODUCTS OR SERVERS WITHOUT ASKING FOR PERMISSION AND OBTAINING APPROVAL FROM ALIAS.


CREDITS
Drongo:	Concept and coding
Alias:	Monsoon, snow storm and dust storm scripts

Special thanks to VedKay for all his work behind the scenes

A huge thanks to my Patrons and supporters:
Ahmad Fadhil Mohamed
Aidan Platt
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
sebastien gelineau
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


CHANGELOG
v0.15
Added:		Option to delay start
Added:		Control over max fog
Added:		Control over max wind

v0.14
Added:		Optional skip time at mission start

v0.13
Added:		Tornado by Alias
Fixed:		Cloudy was using the same values as overcast

v0.12
Steam release

v0.11
Addded:		Monsoon, snow storm and dust storm scripts by Alias

v0.1
Discord release