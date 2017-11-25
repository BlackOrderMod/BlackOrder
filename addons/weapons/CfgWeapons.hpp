
class CfgWeapons {
    class srifle_DMR_03_khaki_F;
    class srifle_DMR_03_blackorder_F : srifle_DMR_03_khaki_F {
        _generalMacro = "srifle_DMR_03_blackorder_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(DMR_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_X_CA.paa";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\dmr_03_01_blackorder_co.paa),
            QPATHTOF(data\dmr_03_02_blackorder_co.paa)
        };
    };
    class srifle_DMR_03_blackorder_CCO_F : srifle_DMR_03_blackorder_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_eotech_552);
            //MACRO_LINKEDACC();
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };
    class srifle_DMR_03_blackorder_ACOG_F : srifle_DMR_03_blackorder_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_ACOG);
            //MACRO_LINKEDACC();
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };

    class rhs_weap_m4a1;
    class rhs_weap_m4a1_BlackOrder_anpeq15_F : rhs_weap_m4a1 {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            //MACRO_LINKEDOPTIC();
            MACRO_LINKEDACC(rhsusf_acc_anpeq15_bk);
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };
    class rhs_weap_m4a1_BlackOrder_ACOGRMR_anpeq15_F : rhs_weap_m4a1 {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_ACOG_RMR);
            MACRO_LINKEDACC(rhsusf_acc_anpeq15_bk);
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };
    class rhs_weap_m4a1_m320;
    class rhs_weap_m4a1_m320_BlackOrder_ACOGRMR_anpeq15_F : rhs_weap_m4a1_m320 {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_ACOG_RMR);
            MACRO_LINKEDACC(rhsusf_acc_anpeq15_bk);
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };
    class rhs_weap_mk18_bk;
    class rhs_weap_mk18_bk_BlackOrder_ACOG : rhs_weap_mk18_bk {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_ACOG);
            //MACRO_LINKEDACC();
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };

    class rhs_weap_m249_pip_L;
    class rhs_weap_m249_pip_L_blackorder_M2A1 : rhs_weap_m249_pip_L {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_M2A1);
            //MACRO_LINKEDACC();
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };

    class rhs_weap_m40a5;
    class rhs_weap_m40a5_blackorder : rhs_weap_m40a5 {
        _generalMacro = "rhs_weap_m40a5_blackorder";
        baseWeapon = "rhs_weap_m40a5_blackorder";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(m40a5_Display);
        author = ECSTRING(common,BlackOrderTeam);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\rhs_m40a5_blackorder_co.paa)
        };
    };
    class rhs_weap_m40a5_blackorder_acog2 : rhs_weap_m40a5_blackorder {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_ACOG2);
            //MACRO_LINKEDACC();
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };
};
