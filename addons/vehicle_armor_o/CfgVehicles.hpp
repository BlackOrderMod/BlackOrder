
class CfgVehicles {
    class Tank_F;
    class MBT_01_base_F : Tank_F {
        class AnimationSources;
    };
    class rhsusf_m1a1tank_base : MBT_01_base_F {
        class AnimationSources : AnimationSources {
            class IFF_Panels_Hide;
            class Miles_Hide;
            class muzzle_rot_CoaxMG;
            class muzzle_rot_hmg;
            class muzzle_rot_cannon;
            class recoil_source;
            class muzzle_rot_HMG2;
            class reload1;
            class ReloadMagazine1;
            class Revolving1;
            class smoke_revolving_source;
            class muzzle_hide_cannon;
            class elev;
            class elev_bank;
            class lead;
            class offset;
            class HatchC;
            class HatchL;
            class HatchD;
        };
    };
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
        class AnimationSources : AnimationSources {
            class Miles_Hide : Miles_Hide {
                initPhase = 1;
            };
            class IFF_Panels_Hide : IFF_Panels_Hide {
                initPhase = 1;
            };
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
