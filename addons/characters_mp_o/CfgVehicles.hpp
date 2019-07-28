
class CfgVehicles {
    class B_Soldier_base_F;
    class O_BlackOrder_MP_base_F : B_Soldier_base_F {
        _generalMacro = "O_BlackOrder_Sci_base_F";
        scope = 1;
        scopeCurator = 1;
        displayName = CSTRING(MilitaryPolice_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_PatrolOfficer_01_F.jpg);

        role="Rifleman";

        genericNames = "EnglishMen";
        icon = "iconMan";
        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        side = 0;
        faction = "OPF_BlackOrder_MP_F";

        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(gear,data\uniform\U_BlackOrder_Uniform_MP_1_co.paa)
        };
        uniformClass = "U_BlackOrder_Uniform_MP_1";
    };

    class O_BlackOrder_MP_PatrolOfficer_01_F : O_BlackOrder_MP_base_F {
        _generalMacro = "O_BlackOrder_MP_PatrolOfficer_01_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(PatrolOfficer_01_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_PatrolOfficer_01_F.jpg);

        role="Rifleman";

        uniformClass = "U_BlackOrder_Uniform_MP_1";

        weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_Beret_blk",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_Beret_blk",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };

    };
    class O_BlackOrder_MP_PatrolOfficer_01_Armored_F : O_BlackOrder_MP_PatrolOfficer_01_F {
        _generalMacro = "O_BlackOrder_MP_PatrolOfficer_01_Armored_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(PatrolOfficer_01_Armored_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_PatrolOfficer_01_Armored_F.jpg);

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_Beret_blk",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_PASGT_basic_black_F",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };

    };
    class O_BlackOrder_MP_PatrolOfficer_02_F : O_BlackOrder_MP_base_F {
        _generalMacro = "O_BlackOrder_MP_PatrolOfficer_02_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(PatrolOfficer_02_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_PatrolOfficer_02_F.jpg);

        role="Rifleman";

        uniformClass = "U_BlackOrder_Uniform_MP_1";

        weapons[] = {"rhs_weap_M590_5RD","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_M590_5RD","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_2(rhsusf_5Rnd_00Buck),
            MULT_OBJ_4(rhsusf_5Rnd_Slug),

            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_5Rnd_00Buck),
            MULT_OBJ_4(rhsusf_5Rnd_Slug),

            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_Beret_blk",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_Beret_blk",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };

    };
    class O_BlackOrder_MP_PatrolOfficer_02_Armored_F : O_BlackOrder_MP_PatrolOfficer_02_F {
        _generalMacro = "O_BlackOrder_MP_PatrolOfficer_02_Armored_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(PatrolOfficer_02_Armored_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_PatrolOfficer_02_Armored_F.jpg);

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_PASGT_basic_black_F",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_PASGT_basic_black_F",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };

    };
    class O_BlackOrder_MP_PatrolOfficer_03_F : O_BlackOrder_MP_base_F {
        _generalMacro = "O_BlackOrder_MP_PatrolOfficer_03_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(PatrolOfficer_03_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_PatrolOfficer_03_F.jpg);

        role="Rifleman";

        uniformClass = "U_BlackOrder_Uniform_MP_1";

        weapons[] = {"rhs_weap_m16a4_carryhandle","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_5(rhs_mag_30Rnd_556x45_M855_Stanag),

            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        respawnMagazines[] = {
            MULT_OBJ_5(rhs_mag_30Rnd_556x45_M855_Stanag),

            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_Beret_blk",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_Beret_blk",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };

    };
    class O_BlackOrder_MP_PatrolOfficer_03_Armored_F : O_BlackOrder_MP_PatrolOfficer_03_F {
        _generalMacro = "O_BlackOrder_MP_PatrolOfficer_03_Armored_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(PatrolOfficer_03_Armored_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_PatrolOfficer_03_Armored_F.jpg);

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_PASGT_basic_black_F",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_PASGT_basic_black_F",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };

    };

    class O_BlackOrder_MP_PatrolOfficer_Sergeant_01_F : O_BlackOrder_MP_base_F {
        _generalMacro = "O_BlackOrder_MP_PatrolOfficer_Sergeant_01_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(PatrolOfficer_Sergant_01_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_PatrolOfficer_Sergeant_01_F.jpg);

        role="Rifleman";

        uniformClass = "U_BlackOrder_Uniform_MP_1";

        weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };

    };
    class O_BlackOrder_MP_PatrolOfficer_Sergeant_01_Armored_F : O_BlackOrder_MP_PatrolOfficer_Sergeant_01_F {
        _generalMacro = "O_BlackOrder_MP_PatrolOfficer_Sergeant_01_Armored_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(PatrolOfficer_Sergant_01_Armored_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_PatrolOfficer_Sergeant_01_Armored_F.jpg);

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };

    };
    class O_BlackOrder_MP_PatrolOfficer_Sergeant_02_F : O_BlackOrder_MP_base_F {
        _generalMacro = "O_BlackOrder_MP_PatrolOfficer_Sergeant_02_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(PatrolOfficer_Sergant_02_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_PatrolOfficer_Sergeant_02_F.jpg);

        role="Rifleman";

        uniformClass = "U_BlackOrder_Uniform_MP_1";

        weapons[] = {"rhs_weap_M590_5RD","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_M590_5RD","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_2(rhsusf_5Rnd_00Buck),
            MULT_OBJ_4(rhsusf_5Rnd_Slug),

            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_5Rnd_00Buck),
            MULT_OBJ_4(rhsusf_5Rnd_Slug),

            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };

    };
    class O_BlackOrder_MP_PatrolOfficer_Sergeant_02_Armored_F : O_BlackOrder_MP_PatrolOfficer_Sergeant_02_F {
        _generalMacro = "O_BlackOrder_MP_PatrolOfficer_Sergeant_02_Armored_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(PatrolOfficer_Sergant_02_Armored_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_PatrolOfficer_Sergeant_02_Armored_F.jpg);

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };

    };
    class O_BlackOrder_MP_PatrolOfficer_Sergeant_03_F : O_BlackOrder_MP_base_F {
        _generalMacro = "O_BlackOrder_MP_PatrolOfficer_Sergeant_03_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(PatrolOfficer_Sergant_03_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_PatrolOfficer_Sergeant_03_F.jpg);

        role="Rifleman";

        uniformClass = "U_BlackOrder_Uniform_MP_1";

        weapons[] = {"rhs_weap_m16a4_carryhandle","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_5(rhs_mag_30Rnd_556x45_M855_Stanag),

            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        respawnMagazines[] = {
            MULT_OBJ_5(rhs_mag_30Rnd_556x45_M855_Stanag),

            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };

    };
    class O_BlackOrder_MP_PatrolOfficer_Sergeant_03_Armored_F : O_BlackOrder_MP_PatrolOfficer_Sergeant_03_F {
        _generalMacro = "O_BlackOrder_MP_PatrolOfficer_Sergeant_03_Armored_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(PatrolOfficer_Sergant_03_Armored_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_PatrolOfficer_Sergeant_03_Armored_F.jpg);

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };

    };



    class O_BlackOrder_MP_Soldier_base_F : O_BlackOrder_MP_base_F {
        _generalMacro = "O_BlackOrder_MP_Soldier_base_F";
        scope = 1;
        scopeCurator = 1;
        displayName = CSTRING(MilitaryPolice_Display);
        author = ECSTRING(common,BlackOrderTeam);

        editorSubcategory = "EdSubcat_Personnel_SpecialForces";
    };

    class O_BlackOrder_MP_Soldier_Rifleman_F : O_BlackOrder_MP_Soldier_base_F {
        _generalMacro = "O_BlackOrder_MP_Soldier_Rifleman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Soldier_Rifleman_01_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_Soldier_Rifleman_F.jpg);

        role="Rifleman";

        uniformClass = "U_BlackOrder_Uniform_MP_1";

        weapons[] = {"rhs_weap_hk416d10_blackorder_eotech552_Flashlight","rhsusf_weap_glock17g4_blackorder_Flashlight","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_hk416d10_blackorder_eotech552_Flashlight","rhsusf_weap_glock17g4_blackorder_Flashlight","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855_Stanag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_1(rhs_mag_mk3a2),
            MULT_OBJ_1(SmokeShell)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855_Stanag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_1(rhs_mag_mk3a2),
            MULT_OBJ_1(SmokeShell)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_CombatHelmet_MP",
            "rhs_googles_clear",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_CombatHelmet_MP",
            "rhs_googles_clear",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_Soldier_TeamLeader_F : O_BlackOrder_MP_Soldier_base_F {
        _generalMacro = "O_BlackOrder_MP_Soldier_TeamLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Soldier_TeamLeader_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_Soldier_TeamLeader_F.jpg);

        role="Rifleman";

        uniformClass = "U_BlackOrder_Uniform_MP_1";

        weapons[] = {"rhs_weap_hk416d10_blackorder_eotech552_Flashlight","rhsusf_weap_glock17g4_blackorder_Flashlight","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_hk416d10_blackorder_eotech552_Flashlight","rhsusf_weap_glock17g4_blackorder_Flashlight","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855_Stanag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_m7a3_cs),
            MULT_OBJ_1(rhs_mag_mk3a2),
            MULT_OBJ_1(SmokeShell)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855_Stanag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_m7a3_cs),
            MULT_OBJ_1(rhs_mag_mk3a2),
            MULT_OBJ_1(SmokeShell)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_CombatHelmet_MP",
            "G_Tactical_Clear",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_CombatHelmet_MP",
            "G_Tactical_Clear",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_Soldier_Medic_F : O_BlackOrder_MP_Soldier_base_F {
        _generalMacro = "O_BlackOrder_MP_Soldier_Medic_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Soldier_Medic_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_Soldier_Medic_F.jpg);

        role="CombatLifeSaver";
        icon = "iconManMedic";

        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(gear,data\uniform\U_BlackOrder_Uniform_MP_1_Medic_co.paa)
        };

        uniformClass = "U_BlackOrder_Uniform_MP_1_Medic";

        weapons[] = {"rhs_weap_hk416d10_blackorder_eotech552_Flashlight","rhsusf_weap_glock17g4_blackorder_Flashlight","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_hk416d10_blackorder_eotech552_Flashlight","rhsusf_weap_glock17g4_blackorder_Flashlight","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855_Stanag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_2(SmokeShellBlue),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(SmokeShellOrange)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855_Stanag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_2(SmokeShellBlue),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(SmokeShellOrange)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };

        backpack = "B_AssaultPack_blk_BlackOrder_Medic_F";

        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_CombatHelmet_MP",
            "G_Tactical_Clear",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_CombatHelmet_MP",
            "G_Tactical_Clear",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_Soldier_Officer_F : O_BlackOrder_MP_Soldier_base_F {
        _generalMacro = "O_BlackOrder_MP_Soldier_Officer_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Soldier_Officer_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_MP_Soldier_Officer_F.jpg);

        role="Rifleman";

        uniformClass = "U_BlackOrder_Uniform_MP_1";

        weapons[] = {"rhs_weap_hk416d10_blackorder_eotech552_Flashlight","rhsusf_weap_glock17g4_blackorder_Flashlight","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_hk416d10_blackorder_eotech552_Flashlight","rhsusf_weap_glock17g4_blackorder_Flashlight","Throw","Put"};
        magazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855_Stanag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_m7a3_cs),
            MULT_OBJ_1(rhs_mag_mk3a2),
            MULT_OBJ_1(SmokeShell)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855_Stanag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_m7a3_cs),
            MULT_OBJ_1(rhs_mag_mk3a2),
            MULT_OBJ_1(SmokeShell)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret_Red",
            "G_Tactical_Clear",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret_Red",
            "G_Tactical_Clear",
            "ItemMap",
            "ItemGPS",
            "ItemWatch",
            "ItemRadio"
        };
    };
};
