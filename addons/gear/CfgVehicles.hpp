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
            MACRO_ADDMAGAZINE(rhs_200rnd_556x45_M_SAW,2);
        };
        class TransportWeapons {
        };
    };
};
