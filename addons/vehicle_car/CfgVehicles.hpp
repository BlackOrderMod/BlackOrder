
class CfgVehicles {
    class B_Quadbike_01_F;
    class O_blackorder_veh_Quadbike_F : B_Quadbike_01_F {
        _generalMacro = "O_blackorder_veh_Quadbike";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Quadbike_Display);
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\quadbike_blackorder_co.paa),
                    "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"
                };
            };
        };
    };

    class C_SUV_01_F;
    class O_blackorder_veh_SUV_F : C_SUV_01_F {
        _generalMacro = "O_blackorder_veh_suv";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SUV_Display);
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\suv_blackorder_co.paa)
                };
            };
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\van_body_BlackOrder_CO.paa),
                    "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                    "\a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
                    QPATHTOF(data\van_body_BlackOrder_CO.paa)
                };
            };
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
            class O_blackorder_veh_Offroad_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\van_body_BlackOrder_co.paa),
                    "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                    "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
                    QPATHTOF(data\van_body_BlackOrder_co.paa)
                };
            };
        };
    };

    class O_Truck_02_covered_F;
    class O_blackorder_veh_Truck_Covered_F : O_Truck_02_covered_F {
        _generalMacro = "O_blackorder_veh_Truck_Covered";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Truck_Covered_Display);
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\truck_02_kab_blackorder_co.paa),
                    QPATHTOF(data\truck_02_kuz_blackorder_co.paa),
                    "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
                };
            };
        };
    };
    class O_Truck_02_transport_F;
    class O_blackorder_veh_Truck_Transport_F : O_Truck_02_transport_F {
        _generalMacro = "O_blackorder_veh_Truck_Transport";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Truck_Transport_Display);
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
                textures[] = {
                    QPATHTOF(data\truck_02_kab_blackorder_co.paa),
                    QPATHTOF(data\truck_02_kuz_blackorder_co.paa),
                    "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
                };
            };
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
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
                displayName = CSTRING(OrderTexture_Display);
                factions[] = {"OPF_BlackOrder_F"};
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
    };
};
