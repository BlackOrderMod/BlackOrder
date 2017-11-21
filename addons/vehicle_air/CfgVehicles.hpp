
class CfgVehicles {
    class O_T_VTOL_02_infantry_dynamicLoadout_F;
    class O_BlackOrder_VTOL_Infantry_F : O_T_VTOL_02_infantry_dynamicLoadout_F {
        _generalMacro = "O_BlackOrder_VTOL_Infantry_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(BlackOrder_VTOL_Infantry_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_VTOL_Infantry_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_FighterPilot_F";
        typicalCargo[] = {"O_BlackOrder_FighterPilot_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\blackorder_vtol_02_ext01_co.paa),
            QPATHTOF(data\blackorder_vtol_02_ext02_co.paa),
            QPATHTOF(data\blackorder_vtol_02_ext03_l_co.paa),
            QPATHTOF(data\blackorder_vtol_02_ext03_r_co.paa)
        };
        class textureSources {
            class O_BlackOrder_VTOL_Infantry_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\blackorder_vtol_02_ext01_co.paa),
                    QPATHTOF(data\blackorder_vtol_02_ext02_co.paa),
                    QPATHTOF(data\blackorder_vtol_02_ext03_l_co.paa),
                    QPATHTOF(data\blackorder_vtol_02_ext03_r_co.paa)
                };
            };
        };
    };
    class O_T_VTOL_02_vehicle_dynamicLoadout_F;
    class O_BlackOrder_VTOL_Vehicle_F : O_T_VTOL_02_vehicle_dynamicLoadout_F {
        _generalMacro = "O_BlackOrder_VTOL_Vehicle_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(BlackOrder_VTOL_Vehicle_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_VTOL_Vehicle_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_FighterPilot_F";
        typicalCargo[] = {"O_BlackOrder_FighterPilot_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\blackorder_vtol_02_ext01_co.paa),
            QPATHTOF(data\blackorder_vtol_02_ext02_co.paa),
            QPATHTOF(data\blackorder_vtol_02_ext03_l_co.paa),
            QPATHTOF(data\blackorder_vtol_02_ext03_r_co.paa)
        };
        class textureSources {
            class O_BlackOrder_VTOL_Vehicle_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\blackorder_vtol_02_ext01_co.paa),
                    QPATHTOF(data\blackorder_vtol_02_ext02_co.paa),
                    QPATHTOF(data\blackorder_vtol_02_ext03_l_co.paa),
                    QPATHTOF(data\blackorder_vtol_02_ext03_r_co.paa)
                };
            };
        };
    };
/*     class RHS_C130J;
    class RHS_BlackOrder_C130J : RHS_C130J {
        _generalMacro = "RHS_BlackOrder_C130J";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(BlackOrder_C130J_Display);
        author = ECSTRING(common,BlackOrderTeam);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa",
            "rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"
        };
        class textureSources {
            class O_BlackOrder_VTOL_Vehicle_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    "rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa",
                    "rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"
                };
            };
        };
    }; */
};
