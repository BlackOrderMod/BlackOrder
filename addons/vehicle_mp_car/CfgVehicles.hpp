
class CfgVehicles {
    class O_blackorder_veh_SUV_F;
    class O_blackorder_veh_mp_SUV_F : O_blackorder_veh_SUV_F {
        _generalMacro = "O_blackorder_veh_mp_SUV_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_MP_PatrolOfficer_01_F";
        typicalCargo[] = {"O_BlackOrder_MP_PatrolOfficer_01_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\suv_blackorder_MP_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_SUV_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\suv_blackorder_MP_co.paa)
                };
            };
        };
    };

    class O_blackorder_veh_Offroad_F;
    class O_blackorder_veh_mp_Offroad_F : O_blackorder_veh_Offroad_F {
        _generalMacro = "O_blackorder_veh_mp_Offroad_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_MP_PatrolOfficer_01_Armored_F";
        typicalCargo[] = {"O_BlackOrder_MP_PatrolOfficer_01_Armored_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\offroad_BlackOrder_MP_co.paa),
            QPATHTOF(data\offroad_BlackOrder_MP_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_Offroad_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\offroad_BlackOrder_MP_co.paa),
                    QPATHTOF(data\offroad_BlackOrder_MP_co.paa)
                };
            };
        };
        animationList[] = {
            "HidePolice",0,
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
    class O_blackorder_veh_mp_Offroad_armed_F : I_G_Offroad_01_armed_F {
        _generalMacro = "O_blackorder_veh_mp_Offroad_armed_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_MP_PatrolOfficer_01_Armored_F";
        typicalCargo[] = {"O_BlackOrder_MP_PatrolOfficer_01_Armored_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\offroad_BlackOrder_MP_co.paa),
            QPATHTOF(data\offroad_BlackOrder_MP_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_Offroad_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\offroad_BlackOrder_MP_co.paa),
                    QPATHTOF(data\offroad_BlackOrder_MP_co.paa)
                };
            };
        };

        animationList[] = {
            "HideBumper1",1,
            "HideBumper2",0,
            "HideConstruction",0,
            "HideDoor3",0.33000001,
            "HideDoor3",0.33000001,
            "HideDoor3",1,
            "HideBackpacks",1
        };
    };

    class O_blackorder_veh_Van_02_F;
    class O_blackorder_veh_mp_Van_02_F : O_blackorder_veh_Van_02_F {
        _generalMacro = "O_blackorder_veh_mp_Van_02_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_Light_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_Light_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\van_body_BlackOrder_MP_co.paa),
            "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
            "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
            QPATHTOF(data\van_body_BlackOrder_MP_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_Van_02_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\van_body_BlackOrder_MP_co.paa),
                    "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                    "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
                    QPATHTOF(data\van_body_BlackOrder_MP_co.paa)
                };
            };
        };

        animationList[] = {
            "Door_1_source",0,
            "Door_2_source",0,
            "Door_3_source",0,
            "Door_4_source",0,
            "Hide_Door_1_source",0,
            "Hide_Door_2_source",0,
            "Hide_Door_3_source",0,
            "Hide_Door_4_source",0,
            "lights_em_hide",0,
            "ladder_hide",1,
            "spare_tyre_holder_hide",1,
            "spare_tyre_hide",1,
            "reflective_tape_hide",1,
            "roof_rack_hide",1,
            "LED_lights_hide",0,
            "sidesteps_hide",1,
            "rearsteps_hide",1,
            "side_protective_frame_hide",0,
            "front_protective_frame_hide",0,
            "beacon_front_hide",1,
            "beacon_rear_hide",1
        };
    };

    class O_blackorder_veh_Van_02_transport_F;
    class O_blackorder_veh_mp_Van_02_transport_F : O_blackorder_veh_Van_02_transport_F {
        _generalMacro = "O_blackorder_veh_mp_Van_02_transport_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_MP_PatrolOfficer_01_F";
        typicalCargo[] = {"O_BlackOrder_MP_PatrolOfficer_01_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\van_body_BlackOrder_MP_co.paa),
            "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
            "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
            QPATHTOF(data\van_body_BlackOrder_MP_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_Van_02_transport_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\van_body_BlackOrder_MP_co.paa),
                    "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                    "\a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
                    QPATHTOF(data\van_body_BlackOrder_MP_co.paa)
                };
            };
        };

        animationList[] = {
            "Door_1_source",0,
            "Door_2_source",0,
            "Door_3_source",0,
            "Door_4_source",0,
            "Hide_Door_1_source",0,
            "Hide_Door_2_source",0,
            "Hide_Door_3_source",0,
            "Hide_Door_4_source",0,
            "lights_em_hide",0,
            "ladder_hide",1,
            "spare_tyre_holder_hide",1,
            "spare_tyre_hide",1,
            "reflective_tape_hide",1,
            "roof_rack_hide",1,
            "LED_lights_hide",0,
            "sidesteps_hide",1,
            "rearsteps_hide",1,
            "side_protective_frame_hide",0,
            "front_protective_frame_hide",0,
            "beacon_front_hide",1,
            "beacon_rear_hide",1
        };
    };

    class O_blackorder_veh_m1025_m2_F;
    class O_blackorder_veh_mp_m1025_m2_F : O_blackorder_veh_m1025_m2_F {
        _generalMacro = "O_blackorder_veh_mp_m1025_m2_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_MP_Soldier_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_MP_Soldier_Rifleman_F"};

        HiddenSelectionsTextures[] = {
            QPATHTOEF(vehicle_car,data\m998_exterior_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\m998_interior_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m1025_BlackOrder_MP_co.paa),
            QPATHTOEF(vehicle_car,data\mk64mount_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\decals\empty.paa),
            QPATHTOEF(vehicle_car,data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m1025_m2_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOEF(vehicle_car,data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\m998_interior_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_BlackOrder_MP_co.paa),
                    QPATHTOEF(vehicle_car,data\mk64mount_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\decals\empty.paa),
                    QPATHTOEF(vehicle_car,data\decals\empty.paa)
                };
            };
        };
    };
    class O_blackorder_veh_m1025_mk19_F;
    class O_blackorder_veh_mp_m1025_mk19_F : O_blackorder_veh_m1025_mk19_F {
        _generalMacro = "O_blackorder_veh_mp_m1025_mk19_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_MP_Soldier_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_MP_Soldier_Rifleman_F"};

        HiddenSelectionsTextures[] = {
            QPATHTOEF(vehicle_car,data\m998_exterior_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\m998_interior_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m1025_BlackOrder_MP_co.paa),
            QPATHTOEF(vehicle_car,data\mk64mount_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\decals\empty.paa),
            QPATHTOEF(vehicle_car,data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m1025_mk19_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOEF(vehicle_car,data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\m998_interior_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_BlackOrder_MP_co.paa),
                    QPATHTOEF(vehicle_car,data\mk64mount_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\decals\empty.paa),
                    QPATHTOEF(vehicle_car,data\decals\empty.paa)
                };
            };
        };
    };
    class O_blackorder_veh_m1025_F;
    class O_blackorder_veh_mp_m1025_F : O_blackorder_veh_m1025_F {
        _generalMacro = "O_blackorder_veh_mp_m1025_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_MP_Soldier_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_MP_Soldier_Rifleman_F"};

        HiddenSelectionsTextures[] = {
            QPATHTOEF(vehicle_car,data\m998_exterior_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\m998_interior_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car,data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m1025_BlackOrder_MP_co.paa),
            QPATHTOEF(vehicle_car,data\decals\empty.paa),
            QPATHTOEF(vehicle_car,data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m1025_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOEF(vehicle_car,data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\m998_interior_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car,data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_BlackOrder_MP_co.paa),
                    QPATHTOEF(vehicle_car,data\decals\empty.paa),
                    QPATHTOEF(vehicle_car,data\decals\empty.paa)
                };
            };
        };
    };

    /* class O_blackorder_veh_m998_2dr_fulltop_F;
    class O_blackorder_veh_mp_m998_2dr_fulltop_F : O_blackorder_veh_m998_2dr_fulltop_F {
        _generalMacro = "O_blackorder_veh_mp_m998_2dr_fulltop_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_Light_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_Light_F"};
    };
    class O_blackorder_veh_m998_2dr_halftop_F;
    class O_blackorder_veh_mp_m998_2dr_halftop_F : O_blackorder_veh_m998_2dr_halftop_F {
        _generalMacro = "O_blackorder_veh_mp_m998_2dr_halftop_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_Light_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_Light_F"};
    };
    class O_blackorder_veh_m998_2dr_F;
    class O_blackorder_veh_mp_m998_2dr_F : O_blackorder_veh_m998_2dr_F {
        _generalMacro = "O_blackorder_veh_mp_m998_2dr_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_Light_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_Light_F"};
    };

    class O_blackorder_veh_m998_4dr_fulltop_F;
    class O_blackorder_veh_mp_m998_4dr_fulltop_F : O_blackorder_veh_m998_4dr_fulltop_F {
        _generalMacro = "O_blackorder_veh_mp_m998_4dr_fulltop_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_Light_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_Light_F"};
    };
    class O_blackorder_veh_m998_4dr_halftop_F;
    class O_blackorder_veh_mp_m998_4dr_halftop_F : O_blackorder_veh_m998_4dr_halftop_F {
        _generalMacro = "O_blackorder_veh_mp_m998_4dr_halftop_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_Light_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_Light_F"};
    };
    class O_blackorder_veh_m998_4dr_F;
    class O_blackorder_veh_mp_m998_4dr_F : O_blackorder_veh_m998_4dr_F {
        _generalMacro = "O_blackorder_veh_mp_m998_4dr_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_Light_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_Light_F"};
    }; */
};
