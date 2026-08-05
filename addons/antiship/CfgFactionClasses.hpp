class CfgFactionClasses {
    class NO_CATEGORY;
    // Shared 3DEN + Zeus category for the ambient-effects modules. Declared
    // identically in ambient_arty and ambient_kamikaze; config classes merge, so
    // any one pbo loading alone still gets the category.
    class ghost_ambient_modules: NO_CATEGORY {
        displayName = "Ghost - Ambient";
    };
};
