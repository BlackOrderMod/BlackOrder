
class CfgVehicles {
    class Weapon_Base_F;

    class Weapon_srifle_DMR_03_blackorder_F : Weapon_Base_F {
        _generalMacro = "Weapon_Base_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(DMR_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
        editorCategory = "EdCat_Weapons";
        editorSubcategory = "EdSubcat_SniperRifles";
        vehicleClass = "WeaponsPrimary";

        class TransportMagazines {
            MACRO_ADDMAGAZINE(20Rnd_762x51_Mag,1);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(srifle_DMR_03_blackorder_F,1);
        };
    };
    class Weapon_rhs_weap_m40a5_blackorder : Weapon_Base_F {
        _generalMacro = "Weapon_Base_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(m40a5_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
        editorCategory = "EdCat_Weapons";
        editorSubcategory = "EdSubcat_SniperRifles";
        vehicleClass = "WeaponsPrimary";

        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_10Rnd_762x51_m118_special_Mag,1);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhs_weap_m40a5_blackorder,1);
        };
    };

    class Box_NATO_Ammo_F;
    class Box_NATO_Wps_F;
    class Box_NATO_Equip_F;
    class Box_NATO_AmmoOrd_F;
    class Box_NATO_Grenades_F;
    class Box_NATO_WpsLaunch_F;
    class Box_NATO_WpsSpecial_F;
    class B_supplyCrate_F;
    class Box_NATO_Support_F;
    class Box_NATO_Uniforms_F;
    class Box_NATO_AmmoVeh_F;
};
