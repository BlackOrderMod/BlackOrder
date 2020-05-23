#define MACRO_MILITIABASE \
    role="Rifleman"; \
    \
    genericNames = "EnglishMen"; \
    icon = "iconMan"; \
    identityTypes[] = {"LanguageENG_F","Head_NATO","G_BlackOrder_Militia"}; \
    \
    side = 0; \
    faction = "OPF_BlackOrder_F"; \
    \
    modelSides[] = {6}; \
    \
    editorSubcategory = "EdSubcat_Personnel_Bandits"; \
    \
    headgearList[] = { \
        "",2, \
        "H_FakeHeadgear_Syndikat_F",5, \
        "H_Bandanna_gry",1, \
        "H_Bandanna_blu",1, \
        "H_Bandanna_cbr",1, \
        "H_Bandanna_khk",1, \
        "H_Bandanna_sgg",1, \
        "H_Bandanna_sand",1, \
        "H_Bandanna_surfer_blk",1, \
        "H_Bandanna_camo",1, \
        "H_Booniehat_khk",1, \
        "H_Booniehat_oli",1, \
        "H_Booniehat_tan",1, \
        "H_Cap_blk_Syndikat_F",1, \
        "H_Cap_grn_Syndikat_F",1, \
        "H_Cap_oli_Syndikat_F",1, \
        "H_Cap_tan_Syndikat_F",1, \
        "H_PASGT_basic_black_F",1, \
        "H_PASGT_basic_olive_F",1, \
        "H_Construction_basic_black_F",1, \
        "H_BlackOrder_Cap_01",1, \
        "H_Cap_blk",1, \
        "H_Cap_blk_CMMG",1, \
        "H_Cap_grn",1, \
        "H_Cap_oli",1, \
        "H_Cap_red",1, \
        "H_Cap_tan",1, \
        "H_RacingHelmet_1_black_F",1, \
        "H_RacingHelmet_3_F",1, \
        "H_RacingHelmet_4_F",1, \
        "H_ShemagOpen_tan",1, \
        "H_Shemag_olive",1, \
        "H_Helmet_Skate",1, \
        "H_ShemagOpen_khk",1, \
        "H_ShemagOpen_khk",1, \
        "H_ShemagOpen_khk",1 \
    }

class CfgVehicles {
 
    class SoldierGB;
    class I_G_Soldier_base_F : SoldierGB {
        modelSides[] = {6};
    };
    class I_Soldier_base_F : SoldierGB {
        modelSides[] = {6};
    };

    class I_L_Criminal_SMG_F;
    class O_BlackOrder_Mil_Militia_01_F : I_L_Criminal_SMG_F {
        MACRO_MILITIABASE;

        _generalMacro = "O_BlackOrder_Mil_Militia_01_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Militia_01_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\I_L_Looter_Pistol_F.jpg";

        backpack = "B_Messenger_Black_F";

        weapons[] = {"srifle_DMR_03_blackorder_F","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(20Rnd_762x51_Mag)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(20Rnd_762x51_Mag)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_BlackOrder_PlainVest_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_PlainVest_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class I_L_Looter_Rifle_F;
    class O_BlackOrder_Mil_Militia_02_F : I_L_Looter_Rifle_F {
        MACRO_MILITIABASE;

        _generalMacro = "O_BlackOrder_Mil_Militia_02_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Militia_02_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\I_L_Looter_Pistol_F.jpg";

        backpack = "B_Messenger_Gray_F";

        weapons[] = {"srifle_DMR_03_blackorder_F","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(20Rnd_762x51_Mag)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(20Rnd_762x51_Mag)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_BlackOrder_PlainVest_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_PlainVest_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class I_C_Soldier_Bandit_3_F;
    class O_BlackOrder_Mil_Militia_03_F : I_C_Soldier_Bandit_3_F {
        MACRO_MILITIABASE;

        _generalMacro = "O_BlackOrder_Mil_Militia_03_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Militia_03_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\I_L_Looter_Pistol_F.jpg";

        backpack = "B_Messenger_Olive_F";

        weapons[] = {"srifle_DMR_03_blackorder_F","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(20Rnd_762x51_Mag)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(20Rnd_762x51_Mag)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_BlackOrder_PlainVest_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_PlainVest_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class I_C_Soldier_Bandit_2_F;
    class O_BlackOrder_Mil_Militia_04_F : I_C_Soldier_Bandit_2_F {
        MACRO_MILITIABASE;

        _generalMacro = "O_BlackOrder_Mil_Militia_04_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Militia_04_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\I_L_Looter_Pistol_F.jpg";

        backpack = "B_Messenger_Gray_F";

        weapons[] = {"srifle_DMR_03_blackorder_F","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(20Rnd_762x51_Mag)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(20Rnd_762x51_Mag)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_BlackOrder_PlainVest_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_PlainVest_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
};
