class RscActivePictureKeepAspect;
class RscDisplayMain: RscStandardDisplay {
    class ControlsBackground {
        // SIX UNITS, CENTRED ON THE BUTTON ROW. It was ten wide and ten tall
        // with its x built from a five-unit half-width, so it was neither
        // centred nor small enough - it ran up behind the game's own menu bar
        // and sat off to one side of the servers underneath it. The width
        // halves the same number it is drawn with, and the height is measured
        // UP from the button row (0.37) so the two always read as one block
        // whatever the screen.
        class GVAR(logo61): RscActivePictureKeepAspect {
            text = QPATHTOF(data\logo_512.paa);
            x = "0.5 - (0.5 * 5) * (pixelW * pixelGridNoUIScale * 2)";
            y = "0.37 - (10) * (pixelH * pixelGridNoUIScale * 2)";
            w = "5 * (pixelW * pixelGridNoUIScale * 2)";
            h = "5 * (pixelH * pixelGridNoUIScale * 2)";
            color[] = {1,1,1,1};
            background = 1;
        };
    };

    class controls {
        class GVAR(quickConnectToServer_main): RscButton { // port 2302
            x = "0.5 - (0.5 * 10) * (pixelW * pixelGridNoUIScale * 2)";
            y = "0.37 - (10 / 2) * (pixelH * pixelGridNoUIScale * 2)";
            w = "10 * pixelW * pixelGridNoUIScale * 2)";
            h = "1 * (pixelH * pixelGridNoUIScale * 2)";
            text = "Ghosts Operations Server";
            tooltip = "Don't forget your beer!"; 
            colorBackground[] = {0.8,0.263,0.192,1};   // #CC4331
            onButtonClick = "connectToServer ['104.243.43.232', 2302, 'Ghosts'];";
        };
        class GVAR(quickConnectToServer_train): GVAR(quickConnectToServer_main) { // port 2402
            x = "0.5 - (1.5 * 10) * (pixelW * pixelGridNoUIScale * 2) - (2 * pixelW)";
            y = "0.37 - (10 / 2) * (pixelH * pixelGridNoUIScale * 2)";
            w = "10 * pixelW * pixelGridNoUIScale * 2)";
            h = "1 * (pixelH * pixelGridNoUIScale * 2)";
            text = "Ghosts Training Server"; 
            tooltip = "Training Server (may not always be running)"; 
            colorBackground[] = {0.8,0.263,0.192,1};   // #CC4331
            onButtonClick = "connectToServer ['104.243.43.232', 2402, 'Ghosts'];";
        };
        class GVAR(quickConnectToServer_events): GVAR(quickConnectToServer_main) { // port 2502
            x = "0.5 + (0.5 * 10) * (pixelW * pixelGridNoUIScale * 2) + (2 * pixelW)";
            y = "0.37 - (10 / 2) * (pixelH * pixelGridNoUIScale * 2)";
            w = "10 * pixelW * pixelGridNoUIScale * 2)";
            h = "1 * (pixelH * pixelGridNoUIScale * 2)";
            text = "Ghosts Development Server";
            tooltip = "Unicorns!"; 
            colorBackground[] = {0.8,0.263,0.192,1};   // #CC4331
            onButtonClick = "connectToServer ['104.243.43.232', 2502, 'Ghosts'];";
        };
    };
};
