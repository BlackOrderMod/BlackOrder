
class CfgVehicles {
    class O_blackorder_veh_Quadbike_F;
    class O_blackorder_veh_sci_Quadbike_F : O_blackorder_veh_Quadbike_F {
        _generalMacro = "O_blackorder_veh_sci_SUV_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_SCI_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_Light_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_Light_F"};

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
    class O_blackorder_veh_sci_SUV_F : O_blackorder_veh_SUV_F {
        _generalMacro = "O_blackorder_veh_sci_SUV_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_SCI_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_Light_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_Light_F"};

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,1);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhsusf_weap_glock17g4,1);
            MACRO_ADDWEAPON(Binocular,1);
        };
    };

    class O_blackorder_veh_Offroad_F;
    class O_blackorder_veh_sci_Offroad_F : O_blackorder_veh_Offroad_F {
        _generalMacro = "O_blackorder_veh_sci_Offroad_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_Light_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_Light_F"};

        animationList[] = {
            "hidePolice",1,
            "HideServices",1,
            "BeaconsStart",0,
            "BeaconsServicesStart",0,
            "HideDoor1",0,
            "HideDoor2",0,
            "HideDoor3",0,
            "HideBackpacks",1,
            "HideBumper1",1,
            "HideBumper2",0,
            "HideConstruction",0
        };

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,1);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhsusf_weap_glock17g4,1);
            MACRO_ADDWEAPON(Binocular,1);
        };
    };

    class O_blackorder_veh_Van_02_F;
    class O_blackorder_veh_sci_Van_02_F : O_blackorder_veh_Van_02_F {
        _generalMacro = "O_blackorder_veh_sci_Van_02_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_SCI_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_Light_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_Light_F"};

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,1);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhsusf_weap_glock17g4,1);
            MACRO_ADDWEAPON(Binocular,1);
        };
    };

    class O_blackorder_veh_Van_02_transport_F;
    class O_blackorder_veh_sci_Van_02_transport_F : O_blackorder_veh_Van_02_transport_F {
        _generalMacro = "O_blackorder_veh_sci_Van_02_transport_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_SCI_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_Light_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_Light_F"};

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,1);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhsusf_weap_glock17g4,1);
            MACRO_ADDWEAPON(Binocular,1);
        };
    };

    class O_blackorder_veh_m1025_F;
    class O_blackorder_veh_sci_m1025_F : O_blackorder_veh_m1025_F {
        _generalMacro = "O_blackorder_veh_sci_m1025_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_SCI_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_F"};

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,1);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhsusf_weap_glock17g4,1);
            MACRO_ADDWEAPON(Binocular,1);
        };
    };

    class O_blackorder_veh_m998_2dr_fulltop_F;
    class O_blackorder_veh_sci_m998_2dr_fulltop_F : O_blackorder_veh_m998_2dr_fulltop_F {
        _generalMacro = "O_blackorder_veh_sci_m998_2dr_fulltop_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_SCI_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_F"};

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,1);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhsusf_weap_glock17g4,1);
            MACRO_ADDWEAPON(Binocular,1);
        };
    };
    class O_blackorder_veh_m998_2dr_halftop_F;
    class O_blackorder_veh_sci_m998_2dr_halftop_F : O_blackorder_veh_m998_2dr_halftop_F {
        _generalMacro = "O_blackorder_veh_sci_m998_2dr_halftop_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_SCI_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_F"};

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,1);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhsusf_weap_glock17g4,1);
            MACRO_ADDWEAPON(Binocular,1);
        };
    };
    class O_blackorder_veh_m998_2dr_F;
    class O_blackorder_veh_sci_m998_2dr_F : O_blackorder_veh_m998_2dr_F {
        _generalMacro = "O_blackorder_veh_sci_m998_2dr_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_SCI_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_F"};

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,1);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhsusf_weap_glock17g4,1);
            MACRO_ADDWEAPON(Binocular,1);
        };
    };

    class O_blackorder_veh_m998_4dr_fulltop_F;
    class O_blackorder_veh_sci_m998_4dr_fulltop_F : O_blackorder_veh_m998_4dr_fulltop_F {
        _generalMacro = "O_blackorder_veh_sci_m998_4dr_fulltop_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_SCI_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_F"};

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,1);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhsusf_weap_glock17g4,1);
            MACRO_ADDWEAPON(Binocular,1);
        };
    };
    class O_blackorder_veh_m998_4dr_halftop_F;
    class O_blackorder_veh_sci_m998_4dr_halftop_F : O_blackorder_veh_m998_4dr_halftop_F {
        _generalMacro = "O_blackorder_veh_sci_m998_4dr_halftop_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_SCI_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_F"};

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,1);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhsusf_weap_glock17g4,1);
            MACRO_ADDWEAPON(Binocular,1);
        };
    };
    class O_blackorder_veh_m998_4dr_F;
    class O_blackorder_veh_sci_m998_4dr_F : O_blackorder_veh_m998_4dr_F {
        _generalMacro = "O_blackorder_veh_sci_m998_4dr_F";
        scope = 2;
        scopeCurator = 2;

        faction = "OPF_BlackOrder_SCI_F";
        side = 0;

        crew = "O_BlackOrder_Sci_Security_F";
        typicalCargo[] = {"O_BlackOrder_Sci_Security_F"};

        class TransportBackpacks {
        };
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,1);
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhsusf_weap_glock17g4,1);
            MACRO_ADDWEAPON(Binocular,1);
        };
    };
};
