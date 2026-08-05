// Modern 3DEN attribute system, as used by the ambient modules.
#define AEDIT(NAME,TYPE,DEF,LBL,DESC) \
    class NAME: Edit { \
        property = QUOTE(TRIPLES(ghost,COMPONENT,NAME)); \
        displayName = LBL; \
        tooltip = DESC; \
        typeName = TYPE; \
        defaultValue = DEF; \
        expression = QUOTE(_this setVariable [ARR_2('NAME',_value)]); \
    }

// The decoy. Arma's AI cannot be told to engage a projectile - a shell is not a
// target, and no sensor or config flag makes it one. So it is never asked to.
// A crewed vehicle IS a valid target, so one is attached to the round in flight
// and the guns engage that; the AI does its own tracking, leading and ballistics,
// which means an intercept is earned rather than rolled for.
//
// Technique credit: Drongo's Artillery, used with permission. Reimplemented.
//
// Built on a UAV because it needs a crew to be a proper target, with an invisible
// model so the thing the gunners are visibly shooting at is the shell itself.

class CfgVehicles {
    class B_UAV_01_F;

    class GVAR(decoyBase): B_UAV_01_F {
        author = QAUTHOR;
        scope = 1;
        scopeCurator = 0;
        displayName = "Incoming Munition";
        model = "\A3\Structures_F\Training\InvisibleTarget_F.p3d";
        icon = "iconExplosiveAT";

        // Not a drone: it must not answer to a UAV terminal, and it must not
        // count as an airframe anybody can take over.
        isUav = 0;

        // Deaf and blind. It is a target, not a participant - it should never
        // report a contact, reveal anything, or react.
        sensitivity = 0;
        sensitivityEar = 0;
        audible = 0;
        camouflage = 0;

        // Priced and threatening enough that a gun with a choice shoots at the
        // incoming round rather than at something on the ground.
        cost = 10000000;
        threat[] = {1, 1, 0};

        // Tough enough not to be knocked out by blast alone, so the intercept is
        // credited to a gun that actually hit it.
        armor = 10;

        textSingular = "incoming munition";
        textPlural = "incoming munitions";
    };

    // One per side, because the decoy has to be HOSTILE to the guns defending
    // the site - they will not shoot at their own.
    class GVAR(decoy_west): GVAR(decoyBase) {
        side = 1;
        faction = "BLU_F";
        crew = "B_UAV_AI";
    };
    class GVAR(decoy_east): GVAR(decoyBase) {
        side = 0;
        faction = "OPF_F";
        crew = "O_UAV_AI";
    };
    class GVAR(decoy_guer): GVAR(decoyBase) {
        side = 2;
        faction = "IND_F";
        crew = "I_UAV_AI";
    };

    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Edit;
            class Combo;
        };
        class ModuleDescription;
    };

    class ghost_moduleCIWS: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "CIWS / C-RAM";
        author = QAUTHOR;
        category = "ghost_ambient_modules";
        function = QUOTE(DFUNC(moduleController));
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\A3\UI_F\Data\Map\Markers\NATO\b_air.paa";

        class Attributes: AttributesBase {
            AEDIT(protect_marker,"STRING","''","Protected Area Marker","Marker whose position is defended. Blank = this module's own position.");
            AEDIT(ad_range,"NUMBER","2500","Engagement Range (m)","How far out the guns start shooting at an incoming round. Also the radius within which a round counts as a threat.");
            AEDIT(min_range,"NUMBER","150","Minimum Range (m)","Rounds closer than this when first seen are ignored - already too close to do anything about, and shooting at them drops the burst on your own position.");
            AEDIT(intercept_types,"STRING","'shotShell,shotRocket,shotMissile,shotSubmunitions'","Intercept Types","Comma-separated CfgAmmo simulation types to engage. Leaving shotBullet out is deliberate: engaging rifle rounds would spawn a decoy per bullet.");

            class mode: Combo {
                property = "ghost_ciws_mode";
                displayName = "Interception Mode";
                tooltip = "Guns: a decoy is attached to the round and the synced AA engage it, so Arma's AI aims and the kill depends on the gunner. Interceptor: the site launches a guided missile that flies itself onto the round - consistent, and it does not need a competent gunner anywhere on the map.";
                typeName = "STRING";
                defaultValue = "'GUNS'";
                expression = "_this setVariable ['mode', _value]";
                class Values {
                    class guns { name = "Guns (AI engage a decoy)"; value = "GUNS"; default = 1; };
                    class missile { name = "Interceptor (guided missile)"; value = "INTERCEPTOR"; };
                };
            };

            AEDIT(interceptor_ammo,"STRING","'M_Titan_AA'","Interceptor Ammo","CfgAmmo class launched in Interceptor mode. Any missile will do - it is flown by script, not by its own seeker.");
            AEDIT(interceptor_speed,"NUMBER","600","Interceptor Speed (m/s)","Top speed of the interceptor. It has to out-run what it is chasing.");
            AEDIT(interceptor_limit,"NUMBER","8","Interceptors In Flight","How many the site may have up at once. This is what saturating the defence means - anything over it is simply not engaged.");
            AEDIT(pn_gain,"NUMBER","4","Guidance Gain (N)","Proportional navigation gain. 4 is the textbook value; lower flies lazily and misses crossing shots, higher burns energy chasing noise.");

            class defend_side: Combo {
                property = "ghost_ciws_defend_side";
                displayName = "Defending Side";
                tooltip = "Whose site this is. Auto reads it from the first gun synchronised to the module, which is right unless you have mixed the sides up.";
                typeName = "STRING";
                defaultValue = "'AUTO'";
                expression = "_this setVariable ['defend_side', _value]";
                class Values {
                    class auto { name = "Auto (from synced guns)"; value = "AUTO"; default = 1; };
                    class west { name = "BLUFOR"; value = "WEST"; };
                    class east { name = "OPFOR"; value = "EAST"; };
                    class guer { name = "Independent"; value = "GUER"; };
                };
            };

            class debug: Combo {
                property = "ghost_ciws_debug";
                displayName = "Debug";
                tooltip = "Logs every tracked round to the RPT - what it was, whether it was inbound, which guns were cued, and whether it was stopped.";
                typeName = "STRING";
                defaultValue = "'false'";
                expression = "_this setVariable ['debug', _value isEqualTo 'true']";
                class Values {
                    class off { name = "Off"; value = "false"; default = 1; };
                    class on  { name = "On";  value = "true"; };
                };
            };
        };

        class ModuleDescription: ModuleDescription {
            description = "Point defence against artillery, rockets and missiles. Synchronise the AA guns that should defend the site. Incoming rounds are engaged by the guns themselves - the AI aims and leads, so an intercept has to be earned and a gun that is dead, out of ammo or has no line of sight simply misses. Rounds heading AWAY are ignored, so your own artillery is safe to fire over the site.";
            sync[] = {"AnyVehicle", "AnyStaticObject"};
        };
    };
};
