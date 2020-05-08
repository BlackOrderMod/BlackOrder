class CfgVehicles {
    class B_ViperLightHarness_blk_F;
    class B_ViperLightHarness_blk_BlackOrder_Medic_F : B_ViperLightHarness_blk_F {
        _generalMacro = "B_ViperLightHarness_blk_BlackOrder_Medic_F";
        scope = 1;
        author = ECSTRING(common,BlackOrderTeam);
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,12);
            MACRO_ADDITEM(Medikit,1);
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
    };
    class B_AssaultPack_blk;
    class B_AssaultPack_blk_BlackOrder_Medic_F : B_AssaultPack_blk {
        _generalMacro = "B_AssaultPack_blk_BlackOrder_Medic_F";
        scope = 1;
        author = ECSTRING(common,BlackOrderTeam);
        class TransportItems {
            MACRO_ADDITEM(FirstAidKit,12);
            MACRO_ADDITEM(Medikit,1);
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
    };
    class B_ViperHarness_blk_F;
    class B_ViperHarness_blk_BlackOrder_AA_F : B_ViperHarness_blk_F {
        _generalMacro = "B_ViperHarness_blk_BlackOrder_AA_F";
        scope = 1;
        author = ECSTRING(common,BlackOrderTeam);
        class TransportItems {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhs_fim92_mag,2);
        };
        class TransportWeapons {
        };
    };
    class B_ViperHarness_blk_BlackOrder_AT_F : B_ViperHarness_blk_F {
        _generalMacro = "B_ViperHarness_blk_BlackOrder_AT_F";
        scope = 1;
        author = ECSTRING(common,BlackOrderTeam);
        class TransportItems {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhs_fgm148_magazine_AT,1);
        };
        class TransportWeapons {
        };
    };

    class B_LegStrapBag_black_F;
    class B_LegStrapBag_black_BlackOrder_explosive_F : B_LegStrapBag_black_F {
        _generalMacro = "B_LegStrapBag_black_F";
        scope = 1;
        author = ECSTRING(common,BlackOrderTeam);
        class TransportItems {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_m112_mag,3);
            MACRO_ADDMAGAZINE(APERSTripMine_Wire_Mag,1);
        };
        class TransportWeapons {
        };
    };
    class B_LegStrapBag_black_BlackOrder_AR_F : B_LegStrapBag_black_F {
        _generalMacro = "B_LegStrapBag_black_F";
        scope = 1;
        author = ECSTRING(common,BlackOrderTeam);
        class TransportItems {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhsusf_200Rnd_556x45_box,2);
        };
        class TransportWeapons {
        };
    };

    class B_UAV_01_backpack_F;
    class O_UAV_01_backpack_F : B_UAV_01_backpack_F {
        class assembleInfo;
    };
    class O_UAV_01_backpack_BlackOrder_F : O_UAV_01_backpack_F {
        _generalMacro = "O_UAV_01_backpack_BlackOrder_F";
        scope = 2;
        displayName = CSTRING(UAV_01_backpack_BlackOrder_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\backpack\icon\icon_UAV_06_backpack_BlackOrder_co.paa);

        faction = "OPF_BlackOrder_F";
        side = 3;

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack\UAV_06_backpack_BlackOrder_co.paa)
        };

        class assembleInfo : assembleInfo {
            displayName = CSTRING(UAV_01_backpack_BlackOrder_Action_Display);
            assembleTo = "O_UAV_01_BlackOrder_F";
        };
    };
    class I_UAV_01_backpack_BlackOrder_F : O_UAV_01_backpack_BlackOrder_F {
        _generalMacro = "I_UAV_01_backpack_BlackOrder_F";
        scope = 2;
        displayName = CSTRING(UAV_01_backpack_BlackOrder_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\backpack\icon\icon_UAV_06_backpack_BlackOrder_co.paa);

        faction = "IND_BlackOrder_F";
        side = 3;

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack\UAV_06_backpack_BlackOrder_co.paa)
        };

        class assembleInfo : assembleInfo {
            displayName = CSTRING(UAV_01_backpack_BlackOrder_Action_Display);
            assembleTo = "I_UAV_01_BlackOrder_F";
        };
    };

    // Placeable items
    class Item_Base_F;
    class Item_U_BlackOrder_Uniform_1_F : Item_Base_F {
        _generalMacro = "Item_Base_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Uniform_1_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Uniforms";

        vehicleClass = "ItemsUniforms";
        model = "\A3\Weapons_f\dummyweapon.p3d";

        class TransportItems {
            MACRO_ADDITEM(U_BlackOrder_Uniform_1,1);
        };
    };
    class Item_U_BlackOrder_Uniform_1_Medic_F : Item_Base_F {
        _generalMacro = "Item_Base_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Uniform_1_Medic_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Uniforms";

        vehicleClass = "ItemsUniforms";
        model = "\A3\Weapons_f\dummyweapon.p3d";
        class TransportItems {
            MACRO_ADDITEM(U_BlackOrder_Uniform_1,1);
        };
    };
    class Item_U_BlackOrder_Uniform_MP_1_F : Item_Base_F {
        _generalMacro = "Item_Base_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Uniform_MP_1_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Uniforms";

        vehicleClass = "ItemsUniforms";
        model = "\A3\Weapons_f\dummyweapon.p3d";
        class TransportItems {
            MACRO_ADDITEM(U_BlackOrder_Uniform_MP_1,1);
        };
    };
    class Item_U_BlackOrder_Uniform_MP_1_Medic_F : Item_Base_F {
        _generalMacro = "Item_Base_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Uniform_MP_1_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Uniforms";

        vehicleClass = "ItemsUniforms";
        model = "\A3\Weapons_f\dummyweapon.p3d";
        class TransportItems {
            MACRO_ADDITEM(U_BlackOrder_Uniform_MP_1,1);
        };
    };
    class Item_U_BlackOrder_PilotCoveralls_F : Item_Base_F {
        _generalMacro = "Item_Base_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(PilotCoveralls_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Uniforms";
        vehicleClass = "ItemsUniforms";
        model = "\A3\Weapons_f\dummyweapon.p3d";
        class TransportItems {
            MACRO_ADDITEM(U_BlackOrder_PilotCoveralls,1);
        };
    };
    class Item_U_BlackOrder_HeliPilotCoveralls_F : Item_Base_F {
        _generalMacro = "Item_Base_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(HeliPilotCoveralls_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Uniforms";

        vehicleClass = "ItemsUniforms";
        model = "\A3\Weapons_f\dummyweapon.p3d";
        class TransportItems {
            MACRO_ADDITEM(U_BlackOrder_HeliPilotCoveralls,1);
        };
    };

    class Item_O_UavTerminal;
    class Item_O_BlackOrder_UavTerminal : Item_O_UavTerminal {
        _generalMacro = "Item_Base_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(UavTerminal_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_InventoryItems";
        vehicleClass = "Items";
        model = "a3\Weapons_F\DummyItemHorizontal";
        class TransportItems {
            MACRO_ADDITEM(O_UavTerminal_BlackOrder,1);
        };
    };
    class Item_I_UavTerminal;
    class Item_I_BlackOrder_UavTerminal : Item_I_UavTerminal {
        _generalMacro = "Item_Base_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(UavTerminal_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_InventoryItems";
        vehicleClass = "Items";
        model = "a3\Weapons_F\DummyItemHorizontal";
        class TransportItems {
            MACRO_ADDITEM(I_UavTerminal_BlackOrder,1);
        };
    };
};
