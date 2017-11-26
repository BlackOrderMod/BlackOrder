
class CfgVehicles {

    class RHS_UH60M_base;
    class RHS_UH60M_US_base : RHS_UH60M_base {
         class Turrets;
    };
    class RHS_UH60M : RHS_UH60M_US_base {
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
        };
    };
    class O_RHS_UH60M_BlackOrder_F : RHS_UH60M {
        _generalMacro = "O_RHS_UH60M_BlackOrder";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(UH60M_BlackOrder_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_VTOL_Vehicle_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_HeliPilot_F";
        typicalCargo[] = {"O_BlackOrder_HeliCrew_F"};

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret {
                gunnerType = "O_BlackOrder_HeliCrew_F";
            };
            class MainTurret : MainTurret {
                gunnerType = "O_BlackOrder_HeliPilot_F"; // Ogly way of fixing the crew in front seat issue
            };
            class RightDoorGun : RightDoorGun {
                gunnerType = "O_BlackOrder_HeliCrew_F";
            };
        };

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\blackorder_uh60m_fuselage_co.paa),
            QPATHTOF(data\blackorder_uh60m_engine_co.paa),
            "rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
            "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
        };
        class textureSources {
            class O_RHS_UH60M_BlackOrder_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\blackorder_uh60m_fuselage_co.paa),
                    QPATHTOF(data\blackorder_uh60m_engine_co.paa),
                    "rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
                    "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
                };
            };
        };
    };

    class RHS_UH60M2;
    class O_RHS_UH60M2_BlackOrder_F : RHS_UH60M2 {
        _generalMacro = "O_RHS_UH60M2_BlackOrder";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(UH60M_BlackOrder_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_VTOL_Vehicle_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_HeliPilot_F";
        typicalCargo[] = {"O_BlackOrder_HeliCrew_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\blackorder_uh60m_fuselage_co.paa),
            QPATHTOF(data\blackorder_uh60m_engine_co.paa),
            "rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
            "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
        };
        class textureSources {
            class O_RHS_UH60M2_BlackOrder_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\blackorder_uh60m_fuselage_co.paa),
                    QPATHTOF(data\blackorder_uh60m_engine_co.paa),
                    "rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
                    "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
                };
            };
        };
    };

    class RHS_UH60M_ESSS;
    class O_RHS_UH60M_ESSS_BlackOrder_F : RHS_UH60M_ESSS {
        _generalMacro = "O_RHS_UH60M_ESSS_BlackOrder";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(UH60M_BlackOrder_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_VTOL_Vehicle_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_HeliPilot_F";
        typicalCargo[] = {"O_BlackOrder_HeliCrew_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\blackorder_uh60m_fuselage_co.paa),
            QPATHTOF(data\blackorder_uh60m_engine_co.paa),
            "rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
            "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
        };
        class textureSources {
            class O_RHS_UH60M_ESSS_BlackOrder_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\blackorder_uh60m_fuselage_co.paa),
                    QPATHTOF(data\blackorder_uh60m_engine_co.paa),
                    "rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
                    "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
                };
            };
        };
    };

    class RHS_UH60M_ESSS2;
    class O_RHS_UH60M_ESSS2_BlackOrder_F : RHS_UH60M_ESSS2 {
        _generalMacro = "O_RHS_UH60M_ESSS2_BlackOrder";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(UH60M_BlackOrder_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_VTOL_Vehicle_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_HeliPilot_F";
        typicalCargo[] = {"O_BlackOrder_HeliCrew_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\blackorder_uh60m_fuselage_co.paa),
            QPATHTOF(data\blackorder_uh60m_engine_co.paa),
            "rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
            "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
        };
        class textureSources {
            class O_RHS_UH60M_ESSS2_BlackOrder_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\blackorder_uh60m_fuselage_co.paa),
                    QPATHTOF(data\blackorder_uh60m_engine_co.paa),
                    "rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
                    "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
                };
            };
        };
    };

    class RHS_AH1Z;
    class O_RHS_AH1Z_BlackOrder_F : RHS_AH1Z {
        _generalMacro = "O_RHS_AH1Z_BlackOrder_F";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(BlackOrder_AH1Z_Vehicle_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_VTOL_Vehicle_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_HeliPilot_F";
        typicalCargo[] = {"O_BlackOrder_HeliPilot_F"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\blackorder_ah1z_body_co.paa),
            QPATHTOF(data\blackorder_ah1z_engines_co.paa)
        };
        class textureSources {
            class O_BlackOrder_VTOL_Vehicle_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\blackorder_ah1z_body_co.paa),
                    QPATHTOF(data\blackorder_ah1z_engines_co.paa)
                };
            };
        };
    };

    class O_T_VTOL_02_infantry_dynamicLoadout_F;
    class O_BlackOrder_VTOL_Infantry_F : O_T_VTOL_02_infantry_dynamicLoadout_F {
        _generalMacro = "O_BlackOrder_VTOL_Infantry_F";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(BlackOrder_VTOL_Infantry_Display);
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
        //displayName = CSTRING(BlackOrder_VTOL_Vehicle_Display);
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



    class Plane_Base_F;
    class Plane_Fighter_04_Base_F : Plane_Base_F {
        class Components {
            class TransportPylonsComponent;
        };
    };
    class I_Plane_Fighter_04_F : Plane_Fighter_04_Base_F {
        class Components : Components {
            class TransportPylonsComponent : TransportPylonsComponent {
                class pylons;
            };
        };
    };
    class I_Plane_Fighter_04_Cluster_F : I_Plane_Fighter_04_F {
        class Components : Components {
            class TransportPylonsComponent : TransportPylonsComponent {
                class pylons : pylons {
                    class pylon1;
                    class pylon2;
                    class pylon3;
                    class pylon4;
                    class pylon5;
                    class pylon6;
                };
            };
        };
    };
    class O_BlackOrder_Plane_Fighter_04_F : I_Plane_Fighter_04_F {
        _generalMacro = "O_BlackOrder_Plane_Fighter_04_F";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(BlackOrder_VTOL_Vehicle_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_VTOL_Vehicle_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_FighterPilot_F";
        typicalCargo[] = {"O_BlackOrder_FighterPilot_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\blackorder_Fighter_04_fuselage_01_co.paa),
            QPATHTOF(data\blackorder_Fighter_04_fuselage_02_co.paa)
        };
        class textureSources {
            class O_BlackOrder_Plane_Fighter_04_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\blackorder_Fighter_04_fuselage_01_co.paa),
                    QPATHTOF(data\blackorder_Fighter_04_fuselage_02_co.paa)
                };
            };
        };
    };
    class O_BlackOrder_Plane_Fighter_04_Cluster_F : I_Plane_Fighter_04_Cluster_F {
        _generalMacro = "O_BlackOrder_Plane_Fighter_04_Cluster_F";
        scope = 1;
        scopeCurator = 2;
        //displayName = CSTRING(BlackOrder_VTOL_Vehicle_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_VTOL_Vehicle_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        availableForSupportTypes[] = {"CAS_Bombing"};

        crew = "O_BlackOrder_FighterPilot_F";
        typicalCargo[] = {"O_BlackOrder_FighterPilot_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\blackorder_Fighter_04_fuselage_01_co.paa),
            QPATHTOF(data\blackorder_Fighter_04_fuselage_02_co.paa)
        };
        class textureSources {
            class O_BlackOrder_Plane_Fighter_04_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\blackorder_Fighter_04_fuselage_01_co.paa),
                    QPATHTOF(data\blackorder_Fighter_04_fuselage_02_co.paa)
                };
            };
        };
    };
    class O_BlackOrder_Plane_Fighter_04_AA_F : O_BlackOrder_Plane_Fighter_04_Cluster_F {
        _generalMacro = "O_BlackOrder_Plane_Fighter_04_AA_F";
        scope = 1;
        scopeCurator = 2;
        displayName = CSTRING(Plane_Fighter_04_AA_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_VTOL_Vehicle_F.jpg);

        availableForSupportTypes[] = {"CAS_Bombing"};

        class Components : Components {
            class TransportPylonsComponent : TransportPylonsComponent {
                class pylons : pylons {
                    class pylon3 : pylon3 {
                        attachment = "PylonRack_Missile_AMRAAM_C_x1";
                    };
                    class pylon4 : pylon4 {
                        attachment = "PylonRack_Missile_AMRAAM_C_x1";
                    };
                    class pylon5 : pylon5 {
                        attachment = "PylonRack_Missile_AMRAAM_C_x2";
                    };
                    class pylon6 : pylon6 {
                        attachment = "PylonRack_Missile_AMRAAM_C_x2";
                    };
                };
            };
        };
    };
    class O_BlackOrder_Plane_Fighter_04_CAS_F : O_BlackOrder_Plane_Fighter_04_Cluster_F {
        _generalMacro = "O_BlackOrder_Plane_Fighter_04_CAS_F";
        scope = 1;
        scopeCurator = 2;
        displayName = CSTRING(Plane_Fighter_04_CAS_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_VTOL_Vehicle_F.jpg);

        availableForSupportTypes[] = {"CAS_Bombing"};

        class Components : Components {
            class TransportPylonsComponent : TransportPylonsComponent {
                class pylons : pylons {
                    class pylon5 : pylon5 {
                        attachment = "PylonMissile_Bomb_GBU12_x1";
                    };
                    class pylon6 : pylon6 {
                        attachment = "PylonMissile_Bomb_GBU12_x1";
                    };
                };
            };
        };
    };
/*     class RHS_C130J;
    class RHS_BlackOrder_C130J : RHS_C130J {
        _generalMacro = "RHS_BlackOrder_C130J";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(BlackOrder_C130J_Display);
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
