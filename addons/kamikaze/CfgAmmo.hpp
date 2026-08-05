// The warhead, at one and a half GBU-12s.
//
// Inherited from Bo_GBU12_LGB so the crater, the explosion effects and the
// sound come with it - the lineage is also the documentation for what "1.5 GBUs"
// means. Vanilla GBU-12: hit 5000, indirectHit 1100, indirectHitRange 12.
//
// Note on the radius. Damage is scaled 1.5x, which is exactly what was asked
// for; the RADIUS is also scaled 1.5x, which is generous - blast radius really
// goes with the cube root of charge mass, so a strictly physical 1.5x charge
// would reach about 13.7 m rather than 18. The bigger number is the one that
// reads as "one and a half GBUs" in play. Drop indirectHitRange to 14 if it is
// levelling more than it should.

class CfgAmmo {
    class Bo_GBU12_LGB;

    class GVAR(warhead): Bo_GBU12_LGB {
        author = QAUTHOR;
        hit = 7500;
        indirectHit = 1650;
        indirectHitRange = 18;

        // It is delivered by an airframe, not dropped and guided, so nothing
        // here should be steering.
        maneuvrability = 0;
        trackLead = 0;
        trackOversteer = 0;
        fuseDistance = 0;

        // Spawned a few metres up and driven straight down - it never needs to
        // live long enough to be worth simulating.
        timeToLive = 5;
    };
};
