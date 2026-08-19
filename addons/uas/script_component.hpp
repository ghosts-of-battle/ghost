#define COMPONENT uas
#define COMPONENT_BEAUTIFIED UAS
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_UAS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_UAS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_UAS
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// How often patrols are topped back up to the ceiling, and how often live
// drones are checked for having seen somebody. Both slow: a drone that has
// noticed you stays noticed, and a fleet that is one short can wait.
#define UAS_PATROL_TICK     60

// Replacements per side per planning tick. Uncapped, a side that keeps
// losing drones - a DDT jammer pack downs every hostile UAV inside 100 m,
// crew deleted, no exemption flag - was refilled to the full ceiling every
// minute, which read as raining drones. Attrition now regenerates as a
// drip: the fleet still comes back, one airframe at a time.
#define UAS_REGEN_PER_TICK  1
#define UAS_SPOT_TICK       8

// A drone that has reported a player says nothing again for this long, so one
// pass over a position is one discovery rather than a stream of them.
#define UAS_SPOT_COOLDOWN   120

// How sure a drone must be that it is looking at somebody. knowsAbout runs
// 0-4; 1.5 is "identified something", not "glimpsed a heat blob".
#define UAS_SPOT_KNOWS      1.5

// How far from a drone a player is even considered for detection.
#define UAS_SPOT_RANGE      800

// HOW CLOSE A PLAYER HAS TO BE FOR A PATROL TO EXIST AT ALL.
//
// A drone orbiting a base nobody is near is a drone nobody will ever see, and
// this mission flies twenty of them: twenty airframes, twenty crews and twenty
// AI pilots being simulated across an island for an audience of nobody. The
// point of a patrol is to be met, so one is put up when somebody is close
// enough to meet it and stood down when everybody has left.
//
// Measured to the ORBIT CENTRE, not to the airframe - a patrol wanders 800 m
// around its objective, and measuring the aircraft would have a drone standing
// itself down and back up as it flew the far side of its own circle.
#define UAS_PLAYER_RANGE    4000

// AND HOW CLOSE COUNTS AS BEING WATCHED. A patrol on the near side of a circle
// whose centre has just gone out of range is still a real aircraft in somebody's
// sky; FUNC(standDown) leaves that one for a later tick rather than deleting it
// in front of them. Under the range at which an airframe at 250-600 m is
// anything more than a speck.
#define UAS_SEEN_RANGE      2000

// Patrol altitude band.
#define UAS_ALT_MIN         250
#define UAS_ALT_MAX         600
