
class CfgVehicles {
    class B_supplyCrate_F;
    class blackorder_supplyCrate_F : B_supplyCrate_F {
        _generalMacro = "blackorder_supplyCrate_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(supplyCrate_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\blackorder_supplyCrate_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\blackorder_supplydrop_co.paa)
        };

        class TransportBackpacks {

        };
        class TransportItems {
            MACRO_ADDITEM(acc_flashlight,2);
            MACRO_ADDITEM(FirstAidKit,10);
            MACRO_ADDITEM(Laserdesignator,1);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,38);
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,10);
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_JHP,4);
            MACRO_ADDMAGAZINE(rhs_200rnd_556x45_M_SAW,10);

            MACRO_ADDMAGAZINE(SmokeShell,12);
            MACRO_ADDMAGAZINE(SmokeShellGreen,8);

            MACRO_ADDMAGAZINE(rhs_mag_m67,10);

            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhs_weap_M136,2);
        };
    };
    class B_CargoNet_01_ammo_F;
    class blackorder_CargoNet_01_ammo_F : B_CargoNet_01_ammo_F {
        _generalMacro = "blackorder_CargoNet_01_ammo_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(CargoNet_01_ammo_F_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\blackorder_CargoNet_01_ammo_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\AmmoBox_blackorder_co.paa),
            QPATHTOF(data\AmmoBox_signs_blackorder_ca.paa)
        };

        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_10Rnd_762x51_m118_special_Mag,10);
            MACRO_ADDMAGAZINE(rhs_200rnd_556x45_M_SAW,4);
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,30);
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,8);

            MACRO_ADDMAGAZINE(rhs_mag_m67,9);
        };
        class TransportWeapons {
        };
    };

    class Box_NATO_Ammo_F;
    class Box_blackorder_Ammo_F : Box_NATO_Ammo_F {
        _generalMacro = "Box_blackorder_Ammo_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_Ammo_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\Box_blackorder_Ammo_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\AmmoBox_signs_blackorder_ca.paa),
            QPATHTOF(data\AmmoBox_blackorder_co.paa)
        };

        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_10Rnd_762x51_m118_special_Mag,10);
            MACRO_ADDMAGAZINE(rhs_200rnd_556x45_M_SAW,4);
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,30);
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,8);

            MACRO_ADDMAGAZINE(rhs_mag_m67,9);
        };
        class TransportWeapons {
        };
    };
    class Box_NATO_Wps_F;
    class Box_blackorder_Wps_F : Box_NATO_Wps_F {
        _generalMacro = "Box_blackorder_Wps_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_Wps_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\Box_blackorder_Wps_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\AmmoBox_signs_blackorder_ca.paa),
            QPATHTOF(data\AmmoBox_blackorder_co.paa)
        };

        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,6);
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,4);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(srifle_DMR_03_blackorder_F,6)
            MACRO_ADDWEAPON(rhsusf_weap_glock17g4,4)
        };
    };
    class Box_NATO_AmmoOrd_F;
    class Box_blackorder_AmmoOrd_F : Box_NATO_AmmoOrd_F {
        _generalMacro = "Box_blackorder_AmmoOrd_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_AmmoOrd_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\Box_blackorder_AmmoOrd_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\AmmoBox_signs_blackorder_ca.paa),
            QPATHTOF(data\AmmoBox_blackorder_co.paa)
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
    class Box_NATO_Grenades_F;
    class Box_blackorder_Grenades_F : Box_NATO_Grenades_F {
        _generalMacro = "Box_blackorder_Grenades_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_Grenades_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\Box_blackorder_Grenades_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\AmmoBox_signs_blackorder_ca.paa),
            QPATHTOF(data\AmmoBox_blackorder_co.paa)
        };

        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(SmokeShell,10);
            MACRO_ADDMAGAZINE(SmokeShellBlue,2);
            MACRO_ADDMAGAZINE(SmokeShellGreen,2);
            MACRO_ADDMAGAZINE(SmokeShellOrange,2);
            MACRO_ADDMAGAZINE(SmokeShellPurple,2);
            MACRO_ADDMAGAZINE(SmokeShellRed,2);
            MACRO_ADDMAGAZINE(SmokeShellYellow,2);

            MACRO_ADDMAGAZINE(rhs_mag_m67,12);
        };
        class TransportWeapons {
        };
    };
    class Box_NATO_WpsLaunch_F;
    class Box_blackorder_WpsLaunch_F : Box_NATO_WpsLaunch_F {
        _generalMacro = "Box_blackorder_WpsLaunch_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_WpsLaunch_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\Box_blackorder_WpsLaunch_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\AmmoBox_signs_blackorder_ca.paa),
            QPATHTOF(data\AmmoBox_blackorder_co.paa)
        };

        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhs_fim92_mag,2);
            MACRO_ADDMAGAZINE(rhs_fgm148_magazine_AT,2);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhs_weap_M136,3);
        };
    };
    class Box_NATO_WpsSpecial_F;
    class Box_blackorder_WpsSpecial_F : Box_NATO_WpsSpecial_F {
        _generalMacro = "Box_blackorder_WpsSpecial_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_WpsSpecial_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\Box_blackorder_WpsSpecial_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\AmmoBox_signs_blackorder_ca.paa),
            QPATHTOF(data\AmmoBox_blackorder_co.paa)
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
    class Box_NATO_Support_F;
    class Box_blackorder_Support_F : Box_NATO_Support_F {
        _generalMacro = "Box_blackorder_Support_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_Support_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\Box_blackorder_Support_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\AmmoBox_signs_blackorder_ca.paa),
            QPATHTOF(data\AmmoBox_blackorder_co.paa)
        };

        class TransportBackpacks {
        };
        class TransportItems {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_10Rnd_762x51_m118_special_Mag,10);
            MACRO_ADDMAGAZINE(rhs_200rnd_556x45_M_SAW,4);
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,30);
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,8);

            MACRO_ADDMAGAZINE(rhs_mag_m67,9);
        };
        class TransportWeapons {
        };
    };

    class Box_NATO_Uniforms_F;
    class Box_blackorder_Uniforms_F : Box_NATO_Uniforms_F {
        _generalMacro = "Box_blackorder_Uniforms_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_Uniforms_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\Box_blackorder_Uniforms_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOEF(item,data\blackorder_Land_plasticcase_01_co.paa),
            QPATHTOF(data\equipment_box_blackorder_ca.paa)
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
    class Box_NATO_Equip_F;
    class Box_blackorder_Equip_F : Box_NATO_Equip_F {
        _generalMacro = "Box_blackorder_Equip_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_Equip_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\Box_blackorder_Equip_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\equipment_box_blackorder_co.paa),
            QPATHTOF(data\equipment_box_blackorder_ca.paa)
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

    class Box_NATO_AmmoVeh_F;
    class Box_blackorder_AmmoVeh_F : Box_NATO_AmmoVeh_F {
        _generalMacro = "Box_blackorder_AmmoVeh_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Box_AmmoVeh_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\Box_blackorder_Ammo_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\AmmoBox_signs_blackorder_ca.paa),
            "A3\Weapons_F\Ammoboxes\data\AmmoVeh_CO.paa"
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
