class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Edit;
            class Checkbox;
        };
        class ModuleDescription;
    };

    // PLACING THIS MODULE IS THE ENABLE. No module, no jamming - there is no
    // separate on switch to forget, and no system quietly running because a
    // setting defaulted to on in a mission that never asked for one.
    //
    // Every attribute here is an OPERATION value: how many, how often, how
    // likely. WHERE and WHO are never asked for - those come from ALiVE's own
    // commanders, their TAORs and their objectives, so this cannot be pointed
    // at ground its commander does not operate on.
    class ghost_moduleJamming: Module_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Ghost - Jamming";
        author = QAUTHOR;
        category = "ghost_modules";
        function = QUOTE(DFUNC(moduleController));
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        icon = "\a3\ui_f\data\map\markers\nato\o_installation.paa";

        class Attributes: AttributesBase {
            // A SITE'S REACH IS ROLLED, NOT FIXED (user, 2026-08-31: "radius is
            // too small, they need to be 1000 to 3000 random number"). These are
            // the bounds, and every site takes its own number between them - so
            // two masts of the same kind are not the same problem, and nobody
            // learns one radius and applies it to the whole map.
            //
            // They were Hub Radius 900 and Terminal Radius 300, which is where
            // "too small" came from: a 300 m field is a building's worth of
            // ground and a player walked out of it without noticing.
            class largeRadius: Edit {
                property = QGVAR(largeRadius);
                displayName = "Site Radius Max (m)";
                tooltip = "Upper bound. Every jammer site rolls its own reach between the minimum and this.";
                typeName = "NUMBER";
                defaultValue = "3000";
                expression = QUOTE(_this setVariable [ARR_2('largeRadius',_value)]);
            };
            class smallRadius: Edit {
                property = QGVAR(smallRadius);
                displayName = "Site Radius Min (m)";
                tooltip = "Lower bound. Every jammer site rolls its own reach between this and the maximum.";
                typeName = "NUMBER";
                defaultValue = "1000";
                expression = QUOTE(_this setVariable [ARR_2('smallRadius',_value)]);
            };
            class objectiveShare: Edit {
                property = QGVAR(objectiveShare);
                displayName = "Objectives With Jammers (%)";
                tooltip = "Share of a commander's objectives that get an emitter. This shapes a small map; the cap below is what bounds a big one.";
                typeName = "NUMBER";
                defaultValue = "30";
                expression = QUOTE(_this setVariable [ARR_2('objectiveShare',_value)]);
            };
            class maxPerSide: Edit {
                property = QGVAR(maxPerSide);
                displayName = "Max Jammers Per Side";
                tooltip = "Hard ceiling per commander whatever the share works out to. A percentage has no ceiling - 30% of 173 objectives is 52 emitters, and three commanders put 156 props on the map in one frame.";
                typeName = "NUMBER";
                defaultValue = "8";
                expression = QUOTE(_this setVariable [ARR_2('maxPerSide',_value)]);
            };
            // GPS is the third domain and the odd one out: space-based, so the
            // radius here is the UPLINK's own small field, not the sphere's.
            // The sphere is rolled between 1 km and 2 km in the code, because a
            // mission tuning it to 300 m would just be a fourth mast.
            class gpsEnable: Checkbox {
                property = QGVAR(gpsEnable);
                displayName = "GPS Denial";
                tooltip = "One satellite uplink per commander, at its biggest objective, steering a 1-2 km sphere that wanders the map. Destroy or hack the uplink and GPS comes back for good.";
                defaultValue = 1;
                expression = QUOTE(_this setVariable [ARR_2('gpsEnable',_value)]);
            };
            // RADIO BURN-THROUGH, the lever that makes a big set worth carrying
            // and worth thinking about. It was a preInit variable with no way to
            // reach it - off, everywhere, with no attribute and no setting - so
            // the burnthrough branch in FUNC(jamFactor) had never run in a
            // mission. Reachable here, on by default, because ghost_reaction now
            // answers a burn-through with a QRF and the pair only makes sense on.
            class burnThrough: Checkbox {
                property = QGVAR(burnThrough);
                displayName = "Radio Burn-Through";
                tooltip = "A high-powered set cuts through a radio jamming field - and the transmission is answered with the full reaction and a QRF on the transmitter. Off: no set beats a jammer, and nobody is punished for trying.";
                defaultValue = 1;
                expression = QUOTE(_this setVariable [ARR_2('burnThrough',_value)]);
            };
            class burnRef: Edit {
                property = QGVAR(burnRef);
                displayName = "Burn-Through Reference (mW)";
                tooltip = "The set power a jamming field is calibrated against. A radio at this power is unaffected by the cut; anything stronger punches through in proportion.";
                typeName = "NUMBER";
                defaultValue = "500";
                expression = QUOTE(_this setVariable [ARR_2('burnRef',_value)]);
            };
            // EVERY SITE AN ALiVE OBJECTIVE - your original spec, off by
            // default because of what it did on 31 August. The uplink is always
            // registered; this is about the 248 masts. Registration itself is
            // cheap now (adapter_alive registerSite dedups through OPCOM's own
            // objectivesByID hashmap rather than walking the list), but each one
            // still ADDS an objective, and on a 31-commander mission that takes
            // OPCOM's world from 132 to ~380 per commander for the whole session.
            // Worth it if you want the masts garrisoned and retaken; not worth
            // it by default.
            class siteObjectives: Checkbox {
                property = QGVAR(siteObjectives);
                displayName = "Masts Are ALiVE Objectives";
                tooltip = "Register every radio and data mast with its commander, so ALiVE garrisons and retakes them. The GPS uplink always is. On a large order of battle this multiplies the objective count OPCOM iterates every tick - see the addon README.";
                defaultValue = 0;
                expression = QUOTE(_this setVariable [ARR_2('siteObjectives',_value)]);
            };
            class gpsUplinkRadius: Edit {
                property = QGVAR(gpsUplinkRadius);
                displayName = "Uplink Radius (m)";
                tooltip = "The uplink's own GPS field - the last leg of the assault on it, not a second sphere.";
                typeName = "NUMBER";
                defaultValue = "400";
                expression = QUOTE(_this setVariable [ARR_2('gpsUplinkRadius',_value)]);
            };
        };

        class ModuleDescription: ModuleDescription {
            description[] = {
                "Placing this module turns on jamming. Without it, the system is off.",
                "",
                "Site Radius Min / Max (m) - every site rolls its own reach between the two",
                "Objectives With Jammers (%) - Share of a commander's objectives that get an emitter",
                "Max Jammers Per Side - Hard ceiling per commander whatever the share works out to",
                "GPS Denial - one uplink per commander steering a wandering 1-2 km GPS sphere",
                "Uplink Radius (m) - the uplink's own GPS field",
                "Masts Are ALiVE Objectives - off by default; the uplink always is",
                "Radio Burn-Through - a strong set beats a jammer, and is answered with a QRF",
                "Burn-Through Reference (mW) - the set power the field is calibrated against",
            };
        };
    };
};
