
class CfgVehicles {
    class rhsusf_m1a1tank_base;
    class O_blackorder_veh_m1a1tank_F : rhsusf_m1a1tank_base {
        _generalMacro = "O_blackorder_veh_m1a1tank_F";
        scope = 2;
        scopeCurator = 2;
        //displayName = "$STR_A3_CfgVehicles_Quadbike_Base_F0";
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_m1a1tank_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\blackorder_m1a1aim_01_co.paa),
            QPATHTOF(data\blackorder_m1a1aim_02_co.paa),
            QPATHTOF(data\blackorder_m1a1aim_03_co.paa),
            QPATHTOF(data\blackorder_loaderspintle_co.paa),
            QPATHTOF(data\blackorder_duke_antennae_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_m1a1tank_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\blackorder_m1a1aim_01_co.paa),
                    QPATHTOF(data\blackorder_m1a1aim_02_co.paa),
                    QPATHTOF(data\blackorder_m1a1aim_03_co.paa),
                    QPATHTOF(data\blackorder_loaderspintle_co.paa),
                    QPATHTOF(data\blackorder_duke_antennae_co.paa)
                };
            };
        };
        animationList[] = {
            "IFF_Panels_Hide",1,
            "Miles_Hide",1,
            "showCamonetTurret",0,
            "showCamonetHull",0
        };

        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
    };
};
