
class CfgVehicles {

    class B_Soldier_base_F;
    class O_BlackOrder_Sci_base_F : B_Soldier_base_F {
        _generalMacro = "O_BlackOrder_Sci_base_F";
        scope = 1;
        scopeCurator = 1;
        displayName = CSTRING(Scientist_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_Scientist_01_F.jpg);

        role="Unarmed";

        genericNames = "EnglishMen";
        icon = "iconMan";
        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        side = 0;
        faction = "OPF_BlackOrder_SCI_F";

        model = "\A3\characters_F\common\coveralls";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(gear,data\uniform\U_BlackOrder_ScienceCoveralls_01.paa)
        };
        uniformClass = "U_BlackOrder_ScienceCoveralls_01";
    };

    class O_BlackOrder_Sci_Scientist_01_F : O_BlackOrder_Sci_base_F {
        _generalMacro = "O_BlackOrder_Sci_Scientist_01_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Scientist_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_Scientist_01_F.jpg);

        uniformClass = "U_BlackOrder_ScienceCoveralls_01";

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        magazines[] = {
        };
        respawnMagazines[] = {
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "H_WirelessEarpiece_F",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "H_WirelessEarpiece_F",
            "ItemWatch"
        };
    };
    class O_BlackOrder_Sci_Scientist_01_Armed_F : O_BlackOrder_Sci_base_F {
        _generalMacro = "O_BlackOrder_Sci_Scientist_01_Armed_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Scientist_Armed_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_Scientist_01_Armed_F.jpg);

        uniformClass = "U_BlackOrder_ScienceCoveralls_01";

        weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "H_WirelessEarpiece_F",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "H_WirelessEarpiece_F",
            "ItemWatch"
        };
    };

    class O_BlackOrder_Sci_Scientist_02_F : O_BlackOrder_Sci_base_F {
        _generalMacro = "O_BlackOrder_Sci_Scientist_02_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Scientist_Protected_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_Scientist_02_F.jpg);

        uniformClass = "U_BlackOrder_ScienceCoveralls_01";

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        magazines[] = {
        };
        respawnMagazines[] = {
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "H_Construction_basic_white_F",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "H_Construction_basic_white_F",
            "ItemWatch"
        };
    };
    class O_BlackOrder_Sci_Scientist_02_Armed_F : O_BlackOrder_Sci_base_F {
        _generalMacro = "O_BlackOrder_Sci_Scientist_02_Armed_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Scientist_Protected_Armed_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_Scientist_02_Armed_F.jpg);

        uniformClass = "U_BlackOrder_ScienceCoveralls_01";

        weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "H_Construction_basic_white_F",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "H_Construction_basic_white_F",
            "ItemWatch"
        };
    };

    class O_BlackOrder_Sci_Scientist_03_F : O_BlackOrder_Sci_base_F {
        _generalMacro = "O_BlackOrder_Sci_Scientist_02_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Scientist_ProtectedHeadset_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_Scientist_03_F.jpg);

        uniformClass = "U_BlackOrder_ScienceCoveralls_01";

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        magazines[] = {
        };
        respawnMagazines[] = {
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "H_Construction_headset_white_F",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "H_Construction_headset_white_F",
            "ItemWatch"
        };
    };
    class O_BlackOrder_Sci_Scientist_03_Armed_F : O_BlackOrder_Sci_base_F {
        _generalMacro = "O_BlackOrder_Sci_Scientist_03_Armed_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Scientist_ProtectedHeadset_Armed_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_Scientist_03_Armed_F.jpg);

        uniformClass = "U_BlackOrder_ScienceCoveralls_01";

        weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "H_Construction_headset_white_F",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "H_Construction_headset_white_F",
            "ItemWatch"
        };
    };



    class O_BlackOrder_Sci_Security_base_F : B_Soldier_base_F {
        _generalMacro = "O_BlackOrder_Sci_Security_base_F";
        scope = 1;
        scopeCurator = 1;
        displayName = CSTRING(Scientist_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_Security_F.jpg);

        role="Rifleman";

        genericNames = "EnglishMen";
        icon = "iconMan";
        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        side = 0;
        faction = "OPF_BlackOrder_SCI_F";

        model = "\A3\characters_F\common\coveralls";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(gear,data\uniform\U_BlackOrder_ScienceCombatCoveralls_01.paa)
        };
        uniformClass = "U_BlackOrder_ScienceCombatCoveralls_01";
    };

    class O_BlackOrder_Sci_SecurityOfficer_F : O_BlackOrder_Sci_Security_base_F {
        _generalMacro = "O_BlackOrder_Sci_SecurityOfficer_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SecurityOfficer_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_SecurityOfficer_F.jpg);

        icon = "iconManLeader";

        uniformClass = "U_BlackOrder_ScienceCombatCoveralls_01";

        weapons[] = {"rhsusf_weap_MP7A2_blackorder_ACO_anpeq15_grip3","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_MP7A2_blackorder_ACO_anpeq15_grip3","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_6(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        respawnMagazines[] = {
            MULT_OBJ_6(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_TacVest_ScienceSecurity",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_TacVest_ScienceSecurity",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
    };
    class O_BlackOrder_Sci_SecurityOfficer_Light_F : O_BlackOrder_Sci_Security_base_F {
        _generalMacro = "O_BlackOrder_Sci_SecurityOfficer_Light_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SecurityOfficer_Light_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_SecurityOfficer_Light_F.jpg);

        icon = "iconManLeader";

        uniformClass = "U_BlackOrder_ScienceCombatCoveralls_01";

        weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class O_BlackOrder_Sci_Security_F : O_BlackOrder_Sci_Security_base_F {
        _generalMacro = "O_BlackOrder_Sci_Security_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Security_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_Security_F.jpg);

        uniformClass = "U_BlackOrder_ScienceCombatCoveralls_01";

        weapons[] = {"rhsusf_weap_MP7A2_blackorder_ACO_anpeq15_grip3","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_MP7A2_blackorder_ACO_anpeq15_grip3","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_6(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        respawnMagazines[] = {
            MULT_OBJ_6(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_TacVest_ScienceSecurity",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_TacVest_ScienceSecurity",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
    };
    class O_BlackOrder_Sci_Security_Light_F : O_BlackOrder_Sci_Security_base_F {
        _generalMacro = "O_BlackOrder_Sci_Security_Light_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Security_Light_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_Security_Light_F.jpg);

        uniformClass = "U_BlackOrder_ScienceCombatCoveralls_01";

        weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_LegStrapBag_black_F",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_LegStrapBag_black_F",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };




    class O_BlackOrder_Sci_SpecialSecurity_base_F : B_Soldier_base_F {
        _generalMacro = "O_BlackOrder_Sci_SpecialSecurity_base_F";
        scope = 1;
        scopeCurator = 1;
        displayName = CSTRING(Scientist_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_SpecialSecurity_Soldier_F.jpg);

        role="SpecialOperative";

        editorSubcategory = "EdSubcat_Personnel_SpecialForces";

        genericNames = "EnglishMen";
        icon = "iconMan";
        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        side = 0;
        faction = "OPF_BlackOrder_SCI_F";

        model = "\A3\characters_F\common\coveralls";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(gear,data\uniform\U_BlackOrder_ScienceCombatCoveralls_02.paa)
        };
        uniformClass = "U_BlackOrder_ScienceCombatCoveralls_02";
    };

    class O_BlackOrder_Sci_SpecialSecurityOfficer_F : O_BlackOrder_Sci_SpecialSecurity_base_F {
        _generalMacro = "O_BlackOrder_Sci_SpecialSecurityOfficer_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SpecialSecurityOfficer_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_SpecialSecurityOfficer_F.jpg);

        icon = "iconManLeader";

        uniformClass = "U_BlackOrder_ScienceCombatCoveralls_02";

        weapons[] = {"rhsusf_weap_MP7A2_blackorder_ACO_anpeq15_grip3","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_MP7A2_blackorder_ACO_anpeq15_grip3","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_2(rhs_mag_an_m14_th3)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_2(rhs_mag_an_m14_th3)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_Beret_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_Beret_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
    };
    class O_BlackOrder_Sci_SpecialSecurity_01_F : O_BlackOrder_Sci_SpecialSecurity_base_F {
        _generalMacro = "O_BlackOrder_Sci_SpecialSecurity_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SpecialSecurity_01_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_SpecialSecurity_01_F.jpg);

        uniformClass = "U_BlackOrder_ScienceCombatCoveralls_02";

        weapons[] = {"rhsusf_weap_MP7A2_blackorder_ACO_anpeq15_grip3","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_MP7A2_blackorder_ACO_anpeq15_grip3","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_2(rhs_mag_an_m14_th3)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_2(rhs_mag_an_m14_th3)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
    };
    class O_BlackOrder_Sci_SpecialSecurity_02_F : O_BlackOrder_Sci_SpecialSecurity_base_F {
        _generalMacro = "O_BlackOrder_Sci_SpecialSecurity_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SpecialSecurity_02_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_SpecialSecurity_02_F.jpg);

        uniformClass = "U_BlackOrder_ScienceCombatCoveralls_02";

        weapons[] = {"rhsusf_weap_MP7A2_blackorder_ACO_anpeq15_grip3","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_MP7A2_blackorder_ACO_anpeq15_grip3","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_2(rhs_mag_an_m14_th3)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_2(rhs_mag_an_m14_th3)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
    };

    class O_BlackOrder_Sci_SpecialSecurity_TeamLeader_F : O_BlackOrder_Sci_SpecialSecurity_base_F {
        _generalMacro = "O_BlackOrder_Sci_SpecialSecurity_TeamLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SpecialSecurity_TeamLeader_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_SpecialSecurity_TeamLeader_F.jpg);

        icon = "iconManLeader";

        uniformClass = "U_BlackOrder_ScienceCombatCoveralls_02";

        weapons[] = {"rhs_weap_m27iar_grip_blackorder_g33xps3","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m27iar_grip_blackorder_g33xps3","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_4(HandGrenade)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_4(HandGrenade)
        };
        items[] = {
            MULT_OBJ_2(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_2(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_Sci_SpecialSecurity_Soldier_F : O_BlackOrder_Sci_SpecialSecurity_base_F {
        _generalMacro = "O_BlackOrder_Sci_SpecialSecurity_Soldier_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SpecialSecurity_Soldier_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_Sci_SpecialSecurity_Soldier_F.jpg);

        uniformClass = "U_BlackOrder_ScienceCombatCoveralls_02";

        weapons[] = {"rhs_weap_m27iar_grip_blackorder_g33xps3","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m27iar_grip_blackorder_g33xps3","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_4(HandGrenade)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_4(HandGrenade)
        };
        items[] = {
            MULT_OBJ_2(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_2(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_mich_bare",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_mich_bare",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
    };
};
