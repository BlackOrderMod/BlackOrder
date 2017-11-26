
class CfgVehicles {
    class O_BlackOrder_Rifleman_F;
    class O_BlackOrder_SF_base_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_SF_base_F";
        scope = 1;
        scopeCurator = 1;
        displayName = CSTRING(SpecialForces_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_SF_Rifleman_01_F.jpg);

        editorSubcategory = "EdSubcat_Personnel_SpecialForces";

        role="SpecialOperative";
    };

    class O_BlackOrder_SF_TeamLeader_F : O_BlackOrder_SF_base_F {
        _generalMacro = "O_BlackOrder_SF_TeamLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(TeamLeader_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_SF_TeamLeader_F.jpg);

        icon = "iconManLeader";

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"rhs_weap_m4a1_m320_BlackOrder_ACOGRMR_anpeq15_F","rhsusf_weap_glock17g4","rhsusf_lrf_Vector21","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1_m320_BlackOrder_ACOGRMR_anpeq15_F","rhsusf_weap_glock17g4","rhsusf_lrf_Vector21","Throw","Put"};
        magazines[] = {
            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_6(rhs_mag_M441_HE),
            MULT_OBJ_1(rhs_mag_m713_Red),
            MULT_OBJ_2(rhs_mag_m714_White),

            MULT_OBJ_2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange),
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_6(rhs_mag_M441_HE),
            MULT_OBJ_1(rhs_mag_m713_Red),
            MULT_OBJ_2(rhs_mag_m714_White),

            MULT_OBJ_2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange),
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_2(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_2(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_SF_Rifleman_01_F : O_BlackOrder_SF_base_F {
        _generalMacro = "O_BlackOrder_SF_Rifleman_01_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Rifleman_01_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_SF_Rifleman_01_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"rhs_weap_m4a1_BlackOrder_ACOGRMR_anpeq15_F","rhsusf_weap_glock17g4","rhsusf_lrf_Vector21","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1_BlackOrder_ACOGRMR_anpeq15_F","rhsusf_weap_glock17g4","rhsusf_lrf_Vector21","Throw","Put"};
        magazines[] = {
            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange),
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange),
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_2(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_2(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_SF_Marksmen_F : O_BlackOrder_SF_base_F {
        _generalMacro = "O_BlackOrder_SF_Marksmen_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Marksmen_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_SF_Marksmen_F.jpg);

        role="Marksman";

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"rhs_weap_m40a5_blackorder_acog2","rhsusf_weap_glock17g4","rhsusf_lrf_Vector21","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m40a5_blackorder_acog2","rhsusf_weap_glock17g4","rhsusf_lrf_Vector21","Throw","Put"};
        magazines[] = {
            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_10(rhsusf_10Rnd_762x51_m118_special_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_10(rhsusf_10Rnd_762x51_m118_special_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_2(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_2(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_F";

        linkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_SF_Sapper_F : O_BlackOrder_SF_base_F {
        _generalMacro = "O_BlackOrder_SF_Sapper_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Sapper_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_SF_Sapper_F.jpg);

        role="Sapper";
        icon="iconManExplosive";

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"rhs_weap_m4a1_BlackOrder_ACOGRMR_anpeq15_F","rhsusf_weap_glock17g4","rhsusf_lrf_Vector21","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1_BlackOrder_ACOGRMR_anpeq15_F","rhsusf_weap_glock17g4","rhsusf_lrf_Vector21","Throw","Put"};
        magazines[] = {
            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange),
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange),
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_2(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_2(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_BlackOrder_explosive_F";

        linkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_SF_AR_F : O_BlackOrder_SF_base_F {
        _generalMacro = "O_BlackOrder_SF_AR_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(AR_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_SF_AR_F.jpg);

        role="MachineGunner";
        icon = "iconManMG";

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"rhs_weap_m249_pip_S_blackorder_ACOG2_anpeq15side_F","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m249_pip_S_blackorder_ACOG2_anpeq15side_F","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_1(rhs_200rnd_556x45_M_SAW),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_1(rhs_200rnd_556x45_M_SAW),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_2(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_2(FirstAidKit)
        };

        backpack = "B_LegStrapBag_black_BlackOrder_AR_F";

        linkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_SF_Operator_01_F : O_BlackOrder_SF_base_F {
        _generalMacro = "O_BlackOrder_SF_Operator_01_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Operator_01_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_SF_Operator_01_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"rhs_weap_m4a1_BlackOrder_ACOGRMR_anpeq15_F","rhsusf_weap_glock17g4","rhsusf_lrf_Vector21","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1_BlackOrder_ACOGRMR_anpeq15_F","rhsusf_weap_glock17g4","rhsusf_lrf_Vector21","Throw","Put"};
        magazines[] = {
            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange),
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange),
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
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
            "V_BlackOrder_PlateCarrier",
            "rhsusf_Bowman",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_PlateCarrier",
            "rhsusf_Bowman",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
    };
    class O_BlackOrder_SF_Agent_F : O_BlackOrder_SF_base_F {
        _generalMacro = "O_BlackOrder_SF_Agent_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Agent_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_BlackOrder_SF_Agent_F.jpg);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"rhs_weap_m4a1_BlackOrder_anpeq15_F","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1_BlackOrder_anpeq15_F","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ_3(HandGrenade),
            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange),
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(HandGrenade),
            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange),
            MULT_OBJ_6(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
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
            "V_BlackOrder_TacVest_1",
            "H_WirelessEarpiece_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_1",
            "H_WirelessEarpiece_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
    };
};
