
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

    // Used Weapons
    class rhsusf_weap_glock17g4;
    class rhsusf_weap_glock17g4_blackorder_Flashlight : rhsusf_weap_glock17g4 {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            //MACRO_LINKEDOPTIC();
            MACRO_LINKEDACC(acc_flashlight_pistol);
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
    class rhs_weap_m249_pip_S;
    class rhs_weap_m249_pip_S_blackorder_ACOG2_anpeq15side_F : rhs_weap_m249_pip_S {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_ACOG2_USMC);
            MACRO_LINKEDACC(rhsusf_acc_anpeq15side_bk);
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };

    class rhsusf_weap_MP7A2;
    class rhsusf_weap_MP7A2_blackorder_ACO_anpeq15_grip3 : rhsusf_weap_MP7A2 {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(optic_ACO_grn_smg);
            MACRO_LINKEDACC(rhsusf_acc_anpeq15_bk_light);
            MACRO_LINKEDMUZZLE(rhsusf_acc_grip3);
            //MACRO_LINKEDBARREL();
        };
    };

    class rhs_weap_m27iar_grip;
    class rhs_weap_m27iar_grip_blackorder_ACOG2_anpeq15A : rhs_weap_m27iar_grip {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_ACOG2_USMC);
            MACRO_LINKEDACC(rhsusf_acc_anpeq15A);
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };

    class rhs_weap_hk416d10;
    class rhs_weap_hk416d10_blackorder_eotech552 : rhs_weap_hk416d10 {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_eotech_552);
            //MACRO_LINKEDACC();
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };
    class rhs_weap_hk416d10_blackorder_eotech552_Flashlight : rhs_weap_hk416d10 {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_eotech_552);
            MACRO_LINKEDACC(acc_flashlight);
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };

};
