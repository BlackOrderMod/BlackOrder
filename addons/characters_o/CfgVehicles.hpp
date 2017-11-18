
class CfgVehicles {
    class B_Soldier_base_F;
    class O_BlackOrder_base_F : B_Soldier_base_F {
        _generalMacro = "O_BlackOrder_base_F";
        scope = 1;
        scopeCurator = 1;
        displayName = CSTRING(Rifleman_Display);
        author = ECSTRING(common,BlackOrderTeam);

        genericNames = "EnglishMen";
        icon = "iconMan";
        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        side = 0;
        faction = "OPF_BlackOrder_F";

        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(gear,data\uniform\U_BlackOrder_Uniform_1_co.paa)
        };
        uniformClass = "U_BlackOrder_Uniform_1";
    };
    class O_BlackOrder_Rifleman_F : O_BlackOrder_base_F {
        _generalMacro = "O_BlackOrder_Rifleman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Rifleman_Display);
        author = ECSTRING(common,BlackOrderTeam);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ(HandGrenade,3),
            MULT_OBJ(SmokeShell,1),
            MULT_OBJ(Chemlight_red,1),
            MULT_OBJ(Chemlight_blue,1),
            MULT_OBJ(Chemlight_green,1),

            MULT_OBJ(20Rnd_762x51_Mag,8),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,2)
        };
        respawnMagazines[] = {
            MULT_OBJ(HandGrenade,3),
            MULT_OBJ(SmokeShell,1),
            MULT_OBJ(Chemlight_red,1),
            MULT_OBJ(Chemlight_blue,1),
            MULT_OBJ(Chemlight_green,1),

            MULT_OBJ(20Rnd_762x51_Mag,8),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,2)
        };
        items[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        respawnItems[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_Rifleman_2_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_Rifleman_2_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Rifleman_2_Display);
        author = ECSTRING(common,BlackOrderTeam);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_ACOG_F","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_ACOG_F","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ(HandGrenade,3),
            MULT_OBJ(SmokeShell,1),
            MULT_OBJ(SmokeShellGreen,1),
            MULT_OBJ(Chemlight_red,1),
            MULT_OBJ(Chemlight_blue,1),
            MULT_OBJ(Chemlight_green,1),

            MULT_OBJ(20Rnd_762x51_Mag,8),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,2)
        };
        respawnMagazines[] = {
            MULT_OBJ(HandGrenade,3),
            MULT_OBJ(SmokeShell,1),
            MULT_OBJ(SmokeShellGreen,1),
            MULT_OBJ(Chemlight_red,1),
            MULT_OBJ(Chemlight_blue,1),
            MULT_OBJ(Chemlight_green,1),

            MULT_OBJ(20Rnd_762x51_Mag,8),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,2)
        };
        items[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        respawnItems[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_Rifleman_Light_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_Rifleman_Light_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Rifleman_Light_Display);
        author = ECSTRING(common,BlackOrderTeam);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_F","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_F","Throw","Put"};
        magazines[] = {
            MULT_OBJ(20Rnd_762x51_Mag,8)
        };
        respawnMagazines[] = {
            MULT_OBJ(20Rnd_762x51_Mag,8)
        };
        items[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        respawnItems[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        linkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        glassesEnabled = 0;
    };
    class O_BlackOrder_Rifleman_Light_2_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_Rifleman_Light_2_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Rifleman_Light_2_Display);
        author = ECSTRING(common,BlackOrderTeam);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_F","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_F","Throw","Put"};
        magazines[] = {
            MULT_OBJ(20Rnd_762x51_Mag,8)
        };
        respawnMagazines[] = {
            MULT_OBJ(20Rnd_762x51_Mag,8)
        };
        items[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        respawnItems[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        linkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        glassesEnabled = 0;
    };
    class O_BlackOrder_SquadLeader_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_SquadLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SquadLeader_Display);
        author = ECSTRING(common,BlackOrderTeam);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_ACOG_F","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_ACOG_F","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ(HandGrenade,2),
            MULT_OBJ(SmokeShell,1),
            MULT_OBJ(SmokeShellGreen,1),
            MULT_OBJ(Chemlight_red,1),
            MULT_OBJ(Chemlight_blue,1),
            MULT_OBJ(Chemlight_green,1),

            MULT_OBJ(20Rnd_762x51_Mag,8),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,2)
        };
        respawnMagazines[] = {
            MULT_OBJ(HandGrenade,2),
            MULT_OBJ(SmokeShell,1),
            MULT_OBJ(SmokeShellGreen,1),
            MULT_OBJ(Chemlight_red,1),
            MULT_OBJ(Chemlight_blue,1),
            MULT_OBJ(Chemlight_green,1),

            MULT_OBJ(20Rnd_762x51_Mag,8),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,2)
        };
        items[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        respawnItems[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        linkedItems[] = {
            "G_Tactical_Clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "G_Tactical_Clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_TeamLeader_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_TeamLeader_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(TeamLeader_Display);
        author = ECSTRING(common,BlackOrderTeam);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_ACOG_F","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_ACOG_F","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ(HandGrenade,2),
            MULT_OBJ(SmokeShell,1),
            MULT_OBJ(SmokeShellGreen,1),
            MULT_OBJ(Chemlight_red,1),
            MULT_OBJ(Chemlight_blue,1),
            MULT_OBJ(Chemlight_green,1),

            MULT_OBJ(20Rnd_762x51_Mag,8),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,2)
        };
        respawnMagazines[] = {
            MULT_OBJ(HandGrenade,2),
            MULT_OBJ(SmokeShell,1),
            MULT_OBJ(SmokeShellGreen,1),
            MULT_OBJ(Chemlight_red,1),
            MULT_OBJ(Chemlight_blue,1),
            MULT_OBJ(Chemlight_green,1),

            MULT_OBJ(20Rnd_762x51_Mag,8),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,2)
        };
        items[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        respawnItems[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_Rifleman_LAT_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_Rifleman_LAT_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Rifleman_LAT_Display);
        author = ECSTRING(common,BlackOrderTeam);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhs_weap_M136","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhs_weap_M136","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ(HandGrenade,3),
            MULT_OBJ(SmokeShell,1),
            MULT_OBJ(SmokeShellGreen,1),
            MULT_OBJ(Chemlight_red,1),
            MULT_OBJ(Chemlight_blue,1),
            MULT_OBJ(Chemlight_green,1),

            MULT_OBJ(20Rnd_762x51_Mag,8),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,2)
        };
        respawnMagazines[] = {
            MULT_OBJ(HandGrenade,3),
            MULT_OBJ(SmokeShell,1),
            MULT_OBJ(SmokeShellGreen,1),
            MULT_OBJ(Chemlight_red,1),
            MULT_OBJ(Chemlight_blue,1),
            MULT_OBJ(Chemlight_green,1),

            MULT_OBJ(20Rnd_762x51_Mag,8),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,2)
        };
        items[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        respawnItems[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_Autorifleman_F : O_BlackOrder_base_F {
        _generalMacro = "O_BlackOrder_Autorifleman_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Autorifleman_Display);
        author = ECSTRING(common,BlackOrderTeam);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"rhs_weap_m249_pip_L_blackorder_M2A1","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m249_pip_L_blackorder_M2A1","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ(HandGrenade,2),
            MULT_OBJ(SmokeShell,1),

            MULT_OBJ(rhs_200rnd_556x45_M_SAW,4),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,2)
        };
        respawnMagazines[] = {
            MULT_OBJ(HandGrenade,2),
            MULT_OBJ(SmokeShell,1),

            MULT_OBJ(rhs_200rnd_556x45_M_SAW,4),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,2)
        };
        items[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        respawnItems[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_Marksmen_F : O_BlackOrder_Rifleman_F {
        _generalMacro = "O_BlackOrder_Marksmen_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Marksmen_Display);
        author = ECSTRING(common,BlackOrderTeam);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"rhs_weap_m40a5_blackorder_acog2","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m40a5_blackorder_acog2","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ(HandGrenade,3),
            MULT_OBJ(SmokeShell,2),
            MULT_OBJ(SmokeShellGreen,1),
            MULT_OBJ(Chemlight_red,1),
            MULT_OBJ(Chemlight_blue,1),
            MULT_OBJ(Chemlight_green,1),

            MULT_OBJ(rhsusf_10Rnd_762x51_m118_special_Mag,10),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,4)
        };
        respawnMagazines[] = {
            MULT_OBJ(HandGrenade,3),
            MULT_OBJ(SmokeShell,2),
            MULT_OBJ(SmokeShellGreen,1),
            MULT_OBJ(Chemlight_red,1),
            MULT_OBJ(Chemlight_blue,1),
            MULT_OBJ(Chemlight_green,1),

            MULT_OBJ(rhsusf_10Rnd_762x51_m118_special_Mag,10),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,4)
        };
        items[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        respawnItems[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_CombatLifeSaver_F : O_BlackOrder_base_F {
        _generalMacro = "O_BlackOrder_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(CombatLifeSaver_Display);
        author = ECSTRING(common,BlackOrderTeam);

        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(gear,data\uniform\U_BlackOrder_Uniform_1_medic_co.paa)
        };

        uniformClass = "U_BlackOrder_Uniform_1_Medic";

        weapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_03_blackorder_CCO_F","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ(HandGrenade,3),
            MULT_OBJ(SmokeShell,1),
            MULT_OBJ(Chemlight_red,1),
            MULT_OBJ(Chemlight_blue,1),
            MULT_OBJ(Chemlight_green,1),

            MULT_OBJ(20Rnd_762x51_Mag,8),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,2)
        };
        respawnMagazines[] = {
            MULT_OBJ(HandGrenade,3),
            MULT_OBJ(SmokeShell,1),
            MULT_OBJ(Chemlight_red,1),
            MULT_OBJ(Chemlight_blue,1),
            MULT_OBJ(Chemlight_green,1),

            MULT_OBJ(20Rnd_762x51_Mag,8),
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,2)
        };
        items[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        respawnItems[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class O_BlackOrder_Pilot_F : O_BlackOrder_base_F {
        _generalMacro = "O_BlackOrder_Pilot_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Pilot_Display);
        author = ECSTRING(common,BlackOrderTeam);

        uniformClass = "U_BlackOrder_Uniform_1";

        weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,4)
        };
        respawnMagazines[] = {
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,4)
        };
        items[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        respawnItems[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        linkedItems[] = {
            "H_HeadSet_black_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "H_HeadSet_black_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        glassesEnabled = 1;
    };
    class O_BlackOrder_FighterPilot_F : O_BlackOrder_base_F {
        _generalMacro = "O_BlackOrder_FighterPilot_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(FighterPilot_Display);
        author = ECSTRING(common,BlackOrderTeam);

        model = "\A3\characters_F\Common\pilot_f.p3d";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(gear,data\uniform\U_BlackOrder_PilotCoveralls_co.paa)
        };

        uniformClass = "U_BlackOrder_PilotCoveralls";

        weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,4)
        };
        respawnMagazines[] = {
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,4)
        };
        items[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        respawnItems[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        linkedItems[] = {
            "H_BlackOrder_PilotHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "H_BlackOrder_PilotHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        glassesEnabled = 0;
    };
    class O_BlackOrder_HeliPilot_F : O_BlackOrder_base_F {
        _generalMacro = "O_BlackOrder_CombatLifeSaver_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(HeliPilot_Display);
        author = ECSTRING(common,BlackOrderTeam);

        model = "\A3\Characters_F\Common\coveralls.p3d";
        modelSides[] = {3,2,1,0};

        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(gear,data\uniform\U_BlackOrder_HeliPilotCoveralls_co.paa)
        };

        uniformClass = "U_BlackOrder_HeliPilotCoveralls";
        //uniformClass = "U_BlackOrder_Uniform_1_Medic";

        weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,4)
        };
        respawnMagazines[] = {
            MULT_OBJ(rhsusf_mag_17Rnd_9x19_FMJ,4)
        };
        items[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        respawnItems[] = {
            MULT_OBJ(FirstAidKit,1)
        };
        linkedItems[] = {
            "rhsusf_hgu56p_black",
            "V_BlackOrder_TacVest_1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
        respawnLinkedItems[] = {
            "rhsusf_hgu56p_black",
            "V_BlackOrder_TacVest_1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
        glassesEnabled = 0;
    };
    class O_BlackOrder_HeliCrew_F : O_BlackOrder_HeliPilot_F {
        _generalMacro = "O_BlackOrder_HeliCrew_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(HeliCrew_Display);
        author = ECSTRING(common,BlackOrderTeam);

        linkedItems[] = {
            "rhsusf_hgu56p_mask_black",
            "V_BlackOrder_TacVest_1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
        respawnLinkedItems[] = {
            "rhsusf_hgu56p_mask_black",
            "V_BlackOrder_TacVest_1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_15"
        };
        glassesEnabled = 0;
    };
};
