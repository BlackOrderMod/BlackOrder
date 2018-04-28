
class CfgVehicles {

    class O_blackorder_veh_Quadbike_F;
    class O_blackorder_veh_mp_Quadbike_F : O_blackorder_veh_Quadbike_F {
        _generalMacro = "O_blackorder_veh_mp_Quadbike_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_MP_PatrolOfficer_01_F";
        typicalCargo[] = {"O_BlackOrder_MP_PatrolOfficer_01_F"};

        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
    };

    class O_blackorder_veh_SUV_F;
    class O_blackorder_veh_mp_SUV_F : O_blackorder_veh_SUV_F {
        _generalMacro = "O_blackorder_veh_mp_SUV_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_MP_PatrolOfficer_01_F";
        typicalCargo[] = {"O_BlackOrder_MP_PatrolOfficer_01_F"};

        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_mp_SUV_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\suv_blackorder_MP_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_SUV_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\suv_blackorder_MP_co.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
            MACRO_ADDITEM(V_BlackOrder_TacVest_MilitaryPolice,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_5Rnd_00Buck,2);
            MACRO_ADDMAGAZINE(rhsusf_5Rnd_Slug,2);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhs_weap_M590_5RD,1);
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

        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_mp_Offroad_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\offroad_BlackOrder_MP_co.paa),
            QPATHTOF(data\offroad_BlackOrder_MP_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_Offroad_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\offroad_BlackOrder_MP_co.paa),
                    QPATHTOF(data\offroad_BlackOrder_MP_co.paa)
                };
            };
        };
        animationList[] = {
            "hidePolice",0,
            "HideServices",1,
            "BeaconsStart",0,
            "BeaconsServicesStart",0,
            "HideDoor1",0,
            "HideDoor2",0,
            "HideDoor3",0,
            "HideBackpacks",1,
            "HideBumper1",0,
            "HideBumper2",1,
            "HideConstruction",0
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
            MACRO_ADDITEM(V_BlackOrder_TacVest_MilitaryPolice,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_5Rnd_00Buck,2);
            MACRO_ADDMAGAZINE(rhsusf_5Rnd_Slug,2);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhs_weap_M590_5RD,1);
        };
    };
    class I_G_Offroad_01_armed_F;
    class O_blackorder_veh_mp_Offroad_armed_F : I_G_Offroad_01_armed_F {
        _generalMacro = "O_blackorder_veh_mp_Offroad_armed_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_MP_Soldier_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_MP_Soldier_Rifleman_F"};

        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_mp_Offroad_armed_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\offroad_BlackOrder_MP_co.paa),
            QPATHTOF(data\offroad_BlackOrder_MP_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_Offroad_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
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

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
    };

    class B_GEN_Van_02_vehicle_F;
    class O_blackorder_veh_mp_Van_02_F : B_GEN_Van_02_vehicle_F {
        _generalMacro = "O_blackorder_veh_mp_Van_02_F";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(Offroad_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_mp_Van_02_F.jpg);

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_MP_PatrolOfficer_01_Armored_F";
        typicalCargo[] = {"O_BlackOrder_MP_PatrolOfficer_01_Armored_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\van_body_BlackOrder_MP_co.paa),
            "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
            "\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
            QPATHTOF(data\van_body_BlackOrder_MP_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_Van_02_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\van_body_BlackOrder_MP_co.paa),
                    "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                    "\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
                    QPATHTOF(data\van_body_BlackOrder_MP_co.paa)
                };
            };
        };

        animationList[] = {
            "beacon_front_hide",0,
            "beacon_rear_hide",0,
            "LED_lights_hide",0,
            "reflective_tape_hide",1,
            "side_protective_frame_hide",0,
            "front_protective_frame_hide",0
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
            MACRO_ADDITEM(V_BlackOrder_TacVest_MilitaryPolice,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_5Rnd_00Buck,2);
            MACRO_ADDMAGAZINE(rhsusf_5Rnd_Slug,2);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhs_weap_M590_5RD,1);
        };
    };

    class B_GEN_Van_02_transport_F;
    class O_blackorder_veh_mp_Van_02_transport_F : B_GEN_Van_02_transport_F {
        _generalMacro = "O_blackorder_veh_mp_Van_02_transport_F";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(Offroad_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_mp_Van_02_transport_F.jpg);

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_MP_PatrolOfficer_01_Armored_F";
        typicalCargo[] = {"O_BlackOrder_MP_PatrolOfficer_01_Armored_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\van_body_BlackOrder_MP_co.paa),
            "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
            "\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
            QPATHTOF(data\van_body_BlackOrder_MP_co.paa)
        };
        class textureSources {
            class O_blackorder_veh_Van_02_transport_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOF(data\van_body_BlackOrder_MP_co.paa),
                    "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
                    "\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
                    QPATHTOF(data\van_body_BlackOrder_MP_co.paa)
                };
            };
        };
        animationList[] = {
            "beacon_front_hide",0,
            "beacon_rear_hide",0,
            "LED_lights_hide",0,
            "reflective_tape_hide",1,
            "side_protective_frame_hide",0,
            "front_protective_frame_hide",0
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
            MACRO_ADDITEM(V_BlackOrder_TacVest_MilitaryPolice,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_5Rnd_00Buck,2);
            MACRO_ADDMAGAZINE(rhsusf_5Rnd_Slug,2);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhs_weap_M590_5RD,1);
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

        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_mp_m1025_m2_F.jpg);

        HiddenSelectionsTextures[] = {
            QPATHTOEF(vehicle_car_o,data\m998_exterior_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\m998_interior_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m1025_BlackOrder_MP_co.paa),
            QPATHTOEF(vehicle_car_o,data\mk64mount_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\decals\empty.paa),
            QPATHTOEF(vehicle_car_o,data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m1025_m2_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOEF(vehicle_car_o,data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\m998_interior_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_BlackOrder_MP_co.paa),
                    QPATHTOEF(vehicle_car_o,data\mk64mount_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\decals\empty.paa),
                    QPATHTOEF(vehicle_car_o,data\decals\empty.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhs_mag_mk3a2,2);
            MACRO_ADDMAGAZINE(rhs_mag_m7a3_cs,2);
            MACRO_ADDMAGAZINE(SmokeShell,2);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
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

        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_mp_m1025_mk19_F.jpg);

        HiddenSelectionsTextures[] = {
            QPATHTOEF(vehicle_car_o,data\m998_exterior_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\m998_interior_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m1025_BlackOrder_MP_co.paa),
            QPATHTOEF(vehicle_car_o,data\mk64mount_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\decals\empty.paa),
            QPATHTOEF(vehicle_car_o,data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m1025_mk19_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOEF(vehicle_car_o,data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\m998_interior_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_BlackOrder_MP_co.paa),
                    QPATHTOEF(vehicle_car_o,data\mk64mount_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\decals\empty.paa),
                    QPATHTOEF(vehicle_car_o,data\decals\empty.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhs_mag_mk3a2,2);
            MACRO_ADDMAGAZINE(rhs_mag_m7a3_cs,2);
            MACRO_ADDMAGAZINE(SmokeShell,2);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
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

        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_veh_mp_m1025_F.jpg);

        HiddenSelectionsTextures[] = {
            QPATHTOEF(vehicle_car_o,data\m998_exterior_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\m998_interior_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\m1025_A2_parts_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\wheel_wranglermt_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\m998_mainbody_BlackOrder_co.paa),
            QPATHTOEF(vehicle_car_o,data\gratting_BlackOrder_co.paa),
            QPATHTOF(data\m1025_BlackOrder_MP_co.paa),
            QPATHTOEF(vehicle_car_o,data\decals\empty.paa),
            QPATHTOEF(vehicle_car_o,data\decals\empty.paa)
        };
        class textureSources {
            class O_blackorder_veh_m1025_MP_Texture {
                author = ECSTRING(common,BlackOrderTeam);
                displayName = ECSTRING(common,BlackOrder_MP_Display);
                factions[] = {"OPF_BlackOrder_F","OPF_BlackOrder_SCI_F","OPF_BlackOrder_MP_F","IND_BlackOrder_F","IND_BlackOrder_SCI_F","IND_BlackOrder_MP_F"};
                textures[] = {
                    QPATHTOEF(vehicle_car_o,data\m998_exterior_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\m998_interior_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\m1025_A2_parts_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\wheel_wranglermt_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\m998_mainbody_BlackOrder_co.paa),
                    QPATHTOEF(vehicle_car_o,data\gratting_BlackOrder_co.paa),
                    QPATHTOF(data\m1025_BlackOrder_MP_co.paa),
                    QPATHTOEF(vehicle_car_o,data\decals\empty.paa),
                    QPATHTOEF(vehicle_car_o,data\decals\empty.paa)
                };
            };
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhs_mag_mk3a2,2);
            MACRO_ADDMAGAZINE(rhs_mag_m7a3_cs,2);
            MACRO_ADDMAGAZINE(SmokeShell,2);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
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
