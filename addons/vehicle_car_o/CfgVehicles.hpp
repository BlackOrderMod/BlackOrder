
class CfgVehicles {
    class B_Quadbike_01_F;
    class O_blackorder_veh_Quadbike_F : B_Quadbike_01_F {
        _generalMacro = "O_blackorder_veh_Quadbike_F";
        scope = 2;
        scopeCurator = 2;
        //displayName = "$STR_A3_CfgVehicles_Quadbike_Base_F0";
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_Quadbike_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\quadbike_blackorder_co.paa),
            "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"
        };
        class textureSources {
            class O_blackorder_veh_Quadbike_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\quadbike_blackorder_co.paa),
                    "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"
                };
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

    class C_SUV_01_F;
    class O_blackorder_veh_SUV_F : C_SUV_01_F {
        _generalMacro = "O_blackorder_veh_suv";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(SUV_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_SUV_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_Light_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_Light_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\suv_blackorder_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_SUV_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\suv_blackorder_co.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };

    class C_Offroad_01_F;
    class O_blackorder_veh_Offroad_F : C_Offroad_01_F {
        _generalMacro = "O_blackorder_veh_Offroad";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(Offroad_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_Offroad_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\offroad_BlackOrder_co.paa),
            QPATHTOF(data\offroad_BlackOrder_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_Offroad_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\offroad_BlackOrder_co.paa),
                    QPATHTOF(data\offroad_BlackOrder_co.paa)
                };
            };
        };
        animationList[] = {
            "hidePolice",1,
            "HideServices",1,
            "BeaconsStart",0,
            "BeaconsServicesStart",0,
            "HideDoor1",0,
            "HideDoor2",0,
            "HideDoor3",1,
            "HideBackpacks",1,
            "HideBumper1",0,
            "HideBumper2",1,
            "HideConstruction",0
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };
    class I_G_Offroad_01_armed_F;
    class O_blackorder_veh_Offroad_armed_F : I_G_Offroad_01_armed_F {
        _generalMacro = "O_blackorder_veh_Offroad";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(Offroad_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_Offroad_armed_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\offroad_BlackOrder_co.paa),
            QPATHTOF(data\offroad_BlackOrder_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_Offroad_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\offroad_BlackOrder_co.paa),
                    QPATHTOF(data\offroad_BlackOrder_co.paa)
                };
            };
        };
        animationList[]=
        {
            "HidePolice",1,
            "HideBumper1",1,
            "HideBumper2",0,
            "HideConstruction",0,
            "HideDoor3",0.33000001,
            "HideDoor3",0.33000001,
            "HideDoor3",1,
            "HideBackpacks",1
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };

    class C_IDAP_Van_02_vehicle_F;
    class O_blackorder_veh_Van_02_F : C_IDAP_Van_02_vehicle_F {
        _generalMacro = "O_blackorder_veh_Van_02_F";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(Offroad_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_Van_02_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_Light_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_Light_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\van_body_BlackOrder_co.paa),
            "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
            "\a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
            QPATHTOF(data\van_body_BlackOrder_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_Offroad_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\van_body_BlackOrder_CO.paa),
                    "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                    "\a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
                    QPATHTOF(data\van_body_BlackOrder_CO.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };
    class C_IDAP_Van_02_transport_F;
    class O_blackorder_veh_Van_02_transport_F : C_IDAP_Van_02_transport_F {
        _generalMacro = "O_blackorder_veh_Van_02_transport_F";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(Offroad_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_Van_02_transport_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_Light_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_Light_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\van_body_BlackOrder_co.paa),
            "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
            "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
            QPATHTOF(data\van_body_BlackOrder_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_Van_02_transport_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\van_body_BlackOrder_co.paa),
                    "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                    "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
                    QPATHTOF(data\van_body_BlackOrder_co.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };

    class O_Truck_02_covered_F;
    class O_blackorder_veh_Truck_Covered_F : O_Truck_02_covered_F {
        _generalMacro = "O_blackorder_veh_Truck_Covered";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(Truck_Covered_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_Truck_Covered_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\truck_02_kab_blackorder_co.paa),
            QPATHTOF(data\truck_02_kuz_blackorder_co.paa),
            "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
        };
        class textureSources {
            class O_blackorder_veh_Truck_Covered_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\truck_02_kab_blackorder_co.paa),
                    QPATHTOF(data\truck_02_kuz_blackorder_co.paa),
                    "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };
    class O_Truck_02_transport_F;
    class O_blackorder_veh_Truck_Transport_F : O_Truck_02_transport_F {
        _generalMacro = "O_blackorder_veh_Truck_Transport";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(Truck_Transport_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_Truck_Transport_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\truck_02_kab_blackorder_co.paa),
            QPATHTOF(data\truck_02_kuz_blackorder_co.paa),
            "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
        };
        class textureSources {
            class O_blackorder_veh_SUV_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\truck_02_kab_blackorder_co.paa),
                    QPATHTOF(data\truck_02_kuz_blackorder_co.paa),
                    "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };

    class rhsusf_m1025_w_m2;
    class O_blackorder_veh_m1025_m2_F : rhsusf_m1025_w_m2 {
        _generalMacro = "O_blackorder_veh_m1025_m2";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_m1025_m2_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "camo2",
            "camo3",
            "unitdecals_1",
            "unitdecals_2",

            //hide rest of stuff
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_BlackOrder_co.paa),
            QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOF(data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m1025_BlackOrder_co.paa),
            QPATHTOF(data\mk64mount_BlackOrder_co.paa),
            QPATHTOF(data\decals\empty.paa),
            QPATHTOF(data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m1025_m2_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOF(data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_BlackOrder_co.paa),
                    QPATHTOF(data\mk64mount_BlackOrder_co.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };
    class rhsusf_m1025_w_mk19;
    class O_blackorder_veh_m1025_mk19_F : rhsusf_m1025_w_mk19 {
        _generalMacro = "O_blackorder_veh_m1025_mk19";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_m1025_mk19_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "camo2",
            "camo3",
            "unitdecals_1",
            "unitdecals_2",

            //hide rest of stuff
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_BlackOrder_co.paa),
            QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOF(data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m1025_BlackOrder_co.paa),
            QPATHTOF(data\mk64mount_BlackOrder_co.paa),
            QPATHTOF(data\decals\empty.paa),
            QPATHTOF(data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m1025_mk19_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOF(data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_BlackOrder_co.paa),
                    QPATHTOF(data\mk64mount_BlackOrder_co.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };
    class rhsusf_m1025_w;
    class O_blackorder_veh_m1025_F : rhsusf_m1025_w {
        _generalMacro = "O_blackorder_veh_m1025";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_m1025_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "camo2",
            "unitdecals_1",
            "unitdecals_2",

            //hide rest of stuff
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_BlackOrder_co.paa),
            QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOF(data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m1025_BlackOrder_co.paa),
            QPATHTOF(data\decals\empty.paa),
            QPATHTOF(data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m1025_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOF(data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_BlackOrder_co.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };

    class rhsusf_m1045_w;
    class O_blackorder_veh_m1045_w : rhsusf_m1045_w {
        _generalMacro = "O_blackorder_veh_m1045_w";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_m1025_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        HiddenSelectionsTextures[] = {
            QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_BlackOrder_co.paa),
            QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOF(data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\tile_exmetal_BlackOrder_co.paa),
            QPATHTOF(data\m1025_BlackOrder_co.paa),
            QPATHTOF(data\mk64mount_BlackOrder_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_m1025_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOF(data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\tile_exmetal_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_BlackOrder_co.paa),
                    QPATHTOF(data\mk64mount_BlackOrder_co.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };

    class rhsusf_m998_w_2dr_fulltop;
    class O_blackorder_veh_m998_2dr_fulltop_F : rhsusf_m998_w_2dr_fulltop {
        _generalMacro = "O_blackorder_veh_m998_2dr_fulltop";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_m998_2dr_fulltop_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "interior_wood",
            "2drcargocomplete",
            "camo1",
            "unitdecals_1",
            "unitdecals_2",

            //hide rest of stuff
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_BlackOrder_co.paa),
            QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOF(data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_wood_BlackOrder_co.paa),
            QPATHTOF(data\m998_2drcargo_BlackOrder_co.paa),
            QPATHTOF(data\tile_exmetal_BlackOrder_co.paa),
            QPATHTOF(data\decals\empty.paa),
            QPATHTOF(data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m998_2dr_fulltop_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOF(data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_wood_BlackOrder_co.paa),
                    QPATHTOF(data\m998_2drcargo_BlackOrder_co.paa),
                    QPATHTOF(data\tile_exmetal_BlackOrder_co.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };
    class rhsusf_m998_w_2dr_halftop;
    class O_blackorder_veh_m998_2dr_halftop_F : rhsusf_m998_w_2dr_halftop {
        _generalMacro = "O_blackorder_veh_m998_2dr_halftop";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_m998_2dr_halftop_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "interior_wood",
            "2drcargocomplete",
            "camo1",
            "unitdecals_1",
            "unitdecals_2",

            //hide rest of stuff
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_BlackOrder_co.paa),
            QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOF(data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_wood_BlackOrder_co.paa),
            QPATHTOF(data\m998_2drcargo_BlackOrder_co.paa),
            QPATHTOF(data\tile_exmetal_BlackOrder_co.paa),
            QPATHTOF(data\decals\empty.paa),
            QPATHTOF(data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m998_2dr_halftop_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOF(data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_wood_BlackOrder_co.paa),
                    QPATHTOF(data\m998_2drcargo_BlackOrder_co.paa),
                    QPATHTOF(data\tile_exmetal_BlackOrder_co.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };
    class rhsusf_m998_w_2dr;
    class O_blackorder_veh_m998_2dr_F : rhsusf_m998_w_2dr {
        _generalMacro = "O_blackorder_veh_m998_2dr";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_m998_2dr_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "interior_wood",
            "2drcargocomplete",
            "camo1",
            "unitdecals_1",
            "unitdecals_2",

            //hide rest of stuff
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_BlackOrder_co.paa),
            QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOF(data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_wood_BlackOrder_co.paa),
            QPATHTOF(data\m998_2drcargo_BlackOrder_co.paa),
            QPATHTOF(data\tile_exmetal_BlackOrder_co.paa),
            QPATHTOF(data\decals\empty.paa),
            QPATHTOF(data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m998_2dr_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOF(data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_wood_BlackOrder_co.paa),
                    QPATHTOF(data\m998_2drcargo_BlackOrder_co.paa),
                    QPATHTOF(data\tile_exmetal_BlackOrder_co.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };

    class rhsusf_m998_w_4dr_fulltop;
    class O_blackorder_veh_m998_4dr_fulltop_F : rhsusf_m998_w_4dr_fulltop {
        _generalMacro = "O_blackorder_veh_m998_4dr_fulltop";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_m998_4dr_fulltop_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "interior_wood",
            "4drcargocomplete",
            "camo1",
            "unitdecals_1",
            "unitdecals_2",

            //hide rest of stuff
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_BlackOrder_co.paa),
            QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOF(data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_wood_BlackOrder_co.paa),
            QPATHTOF(data\m998_4drcargo_BlackOrder_co.paa),
            QPATHTOF(data\tile_exmetal_BlackOrder_co.paa),
            QPATHTOF(data\decals\empty.paa),
            QPATHTOF(data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m998_4dr_fulltop_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOF(data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_wood_BlackOrder_co.paa),
                    QPATHTOF(data\m998_4drcargo_BlackOrder_co.paa),
                    QPATHTOF(data\tile_exmetal_BlackOrder_co.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };
    class rhsusf_m998_w_4dr_halftop;
    class O_blackorder_veh_m998_4dr_halftop_F : rhsusf_m998_w_4dr_halftop {
        _generalMacro = "O_blackorder_veh_m998_4dr_halftop";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_m998_4dr_halftop_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "interior_wood",
            "4drcargocomplete",
            "camo1",
            "unitdecals_1",
            "unitdecals_2",

            //hide rest of stuff
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_BlackOrder_co.paa),
            QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOF(data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_wood_BlackOrder_co.paa),
            QPATHTOF(data\m998_4drcargo_BlackOrder_co.paa),
            QPATHTOF(data\tile_exmetal_BlackOrder_co.paa),
            QPATHTOF(data\decals\empty.paa),
            QPATHTOF(data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m998_4dr_halftop_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOF(data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_wood_BlackOrder_co.paa),
                    QPATHTOF(data\m998_4drcargo_BlackOrder_co.paa),
                    QPATHTOF(data\tile_exmetal_BlackOrder_co.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };
    class rhsusf_m998_w_4dr;
    class O_blackorder_veh_m998_4dr_F : rhsusf_m998_w_4dr {
        _generalMacro = "O_blackorder_veh_m998_4dr";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_m998_4dr_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "interior_wood",
            "4drcargocomplete",
            "camo1",
            "unitdecals_1",
            "unitdecals_2",

            //hide rest of stuff
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_BlackOrder_co.paa),
            QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOF(data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m998_interior_wood_BlackOrder_co.paa),
            QPATHTOF(data\m998_4drcargo_BlackOrder_co.paa),
            QPATHTOF(data\tile_exmetal_BlackOrder_co.paa),
            QPATHTOF(data\decals\empty.paa),
            QPATHTOF(data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m998_4dr_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOF(data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOF(data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOF(data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m998_interior_wood_BlackOrder_co.paa),
                    QPATHTOF(data\m998_4drcargo_BlackOrder_co.paa),
                    QPATHTOF(data\tile_exmetal_BlackOrder_co.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };

    class rhs_tigr_base;
    class rhs_tigr_vdv : rhs_tigr_base {
        class Turrets;
    };
    class O_blackorder_tigr_F : rhs_tigr_vdv {
        _generalMacro = "O_blackorder_veh_m998_4dr";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_m998_4dr_F.jpg);

        editorSubcategory = "EdSubcat_Cars";
        
        faction = "OPF_BlackOrder_F";
        side = 0;
        
        rhs_decalParameters[] = {};

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};
        hiddenSelectionsTextures[] = {
        	QPATHTOF(data\tigr_BlackOrder_co.paa),                      // "rhsafrf\addons\rhs_tigr\data\rhs_tigr_co.paa",
        	QPATHTOF(data\tigr_int_01_BlackOrder_co.paa),        // "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa",
        	"rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",      // "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",
        	QPATHTOF(data\tigr_ext_ads_BlackOrder_co.paa),       // "rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa",
        	QPATHTOF(data\tigr_m_adds_BlackOrder_co.paa),        // "rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa",
        	QPATHTOF(data\decals\empty.paa),                            // "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        	QPATHTOF(data\decals\empty.paa),                            // "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        	QPATHTOF(data\decals\empty.paa),                            // "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        	QPATHTOF(data\decals\empty.paa),                            // "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        	QPATHTOF(data\decals\empty.paa),                            // "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        	QPATHTOF(data\decals\empty.paa),                            // "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        	QPATHTOF(data\decals\empty.paa),                            // "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        	QPATHTOF(data\decals\empty.paa)                             // "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources {
            class O_blackorder_veh_m998_4dr_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\tigr_BlackOrder_co.paa),
                    QPATHTOF(data\tigr_int_01_BlackOrder_co.paa),
                    "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",
                    QPATHTOF(data\tigr_ext_ads_BlackOrder_co.paa),
                    QPATHTOF(data\tigr_m_adds_BlackOrder_co.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa)
                };
            };
        };

        rhs_randomizedHabar[] = {};

        class Attributes {};

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };

    class rhs_tigr_m_vdv : rhs_tigr_vdv {
        class Turrets : Turrets {
            class CargoTurret_01;
        };
    };
    class O_blackorder_tigr_m_F : rhs_tigr_m_vdv {
        _generalMacro = "O_blackorder_veh_m998_4dr";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_m998_4dr_F.jpg);

        editorSubcategory = "EdSubcat_Cars";
        
        faction = "OPF_BlackOrder_F";
        side = 0;
        
        rhs_decalParameters[] = {};

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 {
                gunnerType = "O_BlackOrder_Autorifleman_F";
            };
        };
        
        hiddenSelectionsTextures[] = {
        	QPATHTOF(data\tigr_BlackOrder_co.paa),
        	QPATHTOF(data\tigr_int_01_BlackOrder_co.paa),
        	"rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",
        	QPATHTOF(data\tigr_ext_ads_BlackOrder_co.paa),
        	QPATHTOF(data\tigr_m_adds_BlackOrder_co.paa),
        	QPATHTOF(data\decals\empty.paa),
        	QPATHTOF(data\decals\empty.paa),
        	QPATHTOF(data\decals\empty.paa),
        	QPATHTOF(data\decals\empty.paa),
        	QPATHTOF(data\decals\empty.paa),
        	QPATHTOF(data\decals\empty.paa),
        	QPATHTOF(data\decals\empty.paa),
        	QPATHTOF(data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m998_4dr_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\tigr_BlackOrder_co.paa),
                    QPATHTOF(data\tigr_int_01_BlackOrder_co.paa),
                    "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",
                    QPATHTOF(data\tigr_ext_ads_BlackOrder_co.paa),
                    QPATHTOF(data\tigr_m_adds_BlackOrder_co.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa),
                    QPATHTOF(data\decals\empty.paa)
                };
            };
        };

        rhs_randomizedHabar[] = {};

        class Attributes {};

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_200Rnd_556x45_box,4),
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,8);
            MACRO_ADDMAGAZINE(SmokeShell,3);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };
};
