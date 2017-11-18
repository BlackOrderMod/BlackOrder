
class CfgVehicles {
    class B_Quadbike_01_F;
    class O_blackorder_veh_Quadbike : B_Quadbike_01_F {
        _generalMacro = "O_blackorder_veh_Quadbike";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Quadbike_Display);
        author = ECSTRING(common,BlackOrderTeam);

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
    class O_blackorder_veh_SUV : C_SUV_01_F {
        _generalMacro = "O_blackorder_veh_suv";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SUV_Display);
        author = ECSTRING(common,BlackOrderTeam);

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

    class O_Truck_02_covered_F;
    class O_blackorder_veh_Truck_Covered : O_Truck_02_covered_F {
        _generalMacro = "O_blackorder_veh_Truck_Covered";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Truck_Covered_Display);
        author = ECSTRING(common,BlackOrderTeam);

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
    class O_blackorder_veh_Truck_Transport : O_Truck_02_transport_F {
        _generalMacro = "O_blackorder_veh_Truck_Transport";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Truck_Transport_Display);
        author = ECSTRING(common,BlackOrderTeam);

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
    class O_blackorder_veh_m1025_m2 : rhsusf_m1025_w_m2 {
        _generalMacro = "O_blackorder_veh_m1025_m2";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);

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
    class O_blackorder_veh_m1025_mk19 : rhsusf_m1025_w_mk19 {
        _generalMacro = "O_blackorder_veh_m1025_mk19";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);

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
    class O_blackorder_veh_m1025 : rhsusf_m1025_w {
        _generalMacro = "O_blackorder_veh_m1025";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);

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
    class O_blackorder_veh_m998_2dr_fulltop : rhsusf_m998_w_2dr_fulltop {
        _generalMacro = "O_blackorder_veh_m998_2dr_fulltop";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);

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
    class O_blackorder_veh_m998_2dr_halftop : rhsusf_m998_w_2dr_halftop {
        _generalMacro = "O_blackorder_veh_m998_2dr_halftop";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);

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
    class O_blackorder_veh_m998_2dr : rhsusf_m998_w_2dr {
        _generalMacro = "O_blackorder_veh_m998_2dr";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);

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
    class O_blackorder_veh_m998_4dr_fulltop : rhsusf_m998_w_4dr_fulltop {
        _generalMacro = "O_blackorder_veh_m998_4dr_fulltop";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);

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
    class O_blackorder_veh_m998_4dr_halftop : rhsusf_m998_w_4dr_halftop {
        _generalMacro = "O_blackorder_veh_m998_4dr_halftop";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);

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
    class O_blackorder_veh_m998_4dr : rhsusf_m998_w_4dr {
        _generalMacro = "O_blackorder_veh_m998_4dr";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(_Display);
        author = ECSTRING(common,BlackOrderTeam);

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
