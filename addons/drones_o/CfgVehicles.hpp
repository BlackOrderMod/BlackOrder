
class CfgVehicles {
    class O_UAV_01_F;
    class O_UAV_01_BlackOrder_F : O_UAV_01_F {
        _generalMacro = "O_UAV_01_BlackOrder_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(UAV_01_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_UAV_01_BlackOrder_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_UAV_AI";
        typicalCargo[] = {"O_UAV_AI"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\BlackOrder_UAV_01_co.paa)
        };
        class assembleInfo {
            primary = 1;
            base = "";
            assembleTo = "";
            displayName = "";
            dissasembleTo[] = {"O_UAV_01_backpack_BlackOrder_F"};
        };

        class textureSources {
            class O_UAV_02_BlackOrder_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\BlackOrder_UAV_01_co.paa)
                };
            };
        };
    };
    class B_UAV_02_dynamicLoadout_F;
    class O_UAV_02_dynamicLoadout_BlackOrder_F : B_UAV_02_dynamicLoadout_F {
        _generalMacro = "O_UAV_02_dynamicLoadout_BlackOrder_F";
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(UAV_02_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_UAV_02_BlackOrder_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_UAV_AI";
        typicalCargo[] = {"O_UAV_AI"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\BlackOrder_UAV_02_co.paa)
        };
        class textureSources {
            class O_UAV_02_dynamicLoadout_BlackOrder_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\BlackOrder_UAV_02_co.paa)
                };
            };
        };
    };
    class B_UAV_02_F;
    class O_UAV_02_BlackOrder_F : B_UAV_02_F {
        _generalMacro = "B_UAV_02_BlackOrder_F";
        scope = 1;
        scopeCurator = 2;
        displayName = CSTRING(UAV_02_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_UAV_02_BlackOrder_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_UAV_AI";
        typicalCargo[] = {"O_UAV_AI"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\BlackOrder_UAV_02_co.paa)
        };
        class textureSources {
            class O_UAV_02_BlackOrder_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\BlackOrder_UAV_02_co.paa)
                };
            };
        };
    };
    class B_UAV_02_CAS_F;
    class O_UAV_02_CAS_BlackOrder_F : B_UAV_02_CAS_F {
        _generalMacro = "B_UAV_02_CAS_BlackOrder_F";
        scope = 1;
        scopeCurator = 2;
        displayName = CSTRING(UAV_02_CAS_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_UAV_02_BlackOrder_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_UAV_AI";
        typicalCargo[] = {"O_UAV_AI"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\BlackOrder_UAV_02_co.paa)
        };
        class textureSources {
            class O_UAV_02_CAS_BlackOrder_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\BlackOrder_UAV_02_co.paa)
                };
            };
        };
    };
};
