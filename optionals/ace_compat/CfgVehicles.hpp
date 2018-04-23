class CfgVehicles {
    class Weapon_Base_F;
    class Weapon_srifle_DMR_03_blackorder_F : Weapon_Base_F {
        displayName = CSTRING(DMR_Display);
    };

    //Characters
    class O_BlackOrder_base_F;
    class O_BlackOrder_Rifleman_F : O_BlackOrder_base_F {
        magazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
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
        magazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
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
        magazines[] = {
            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
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
    };
    class O_BlackOrder_Rifleman_Light_2_F : O_BlackOrder_Rifleman_F {
        magazines[] = {
            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
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
    };
    class O_BlackOrder_SquadLeader_F : O_BlackOrder_Rifleman_F {
        magazines[] = {
            MULT_OBJ_2(rhs_mag_m67),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhs_mag_m67),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "G_Tactical_Clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
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
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_TeamLeader_F : O_BlackOrder_Rifleman_F {
        magazines[] = {
            MULT_OBJ_2(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
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
            "ItemGPS",
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_Rifleman_LAT_F : O_BlackOrder_Rifleman_F {
        magazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
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
        magazines[] = {
            MULT_OBJ_2(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),

            MULT_OBJ_4(rhs_200rnd_556x45_M_SAW),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),

            MULT_OBJ_4(rhs_200rnd_556x45_M_SAW),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
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
        magazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_10(rhsusf_10Rnd_762x51_m118_special_Mag),
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_10(rhsusf_10Rnd_762x51_m118_special_Mag),
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
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
        magazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(Chemlight_blue),
            MULT_OBJ_1(Chemlight_green),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier_medic",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier_medic",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "rhsusf_ANPVS_14"
        };
    };

    class O_BlackOrder_Officer_F : O_BlackOrder_Rifleman_F {
        magazines[] = {
            MULT_OBJ_4(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
    };

    class O_BlackOrder_Commissar_01_F : O_BlackOrder_Rifleman_F {
        magazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),

            MULT_OBJ_2(rhs_mag_mk3a2),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),

            MULT_OBJ_2(rhs_mag_mk3a2),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_Beret_Red",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_Beret_Red",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
    };
    class O_BlackOrder_Commissar_02_F : O_BlackOrder_Rifleman_F {
        magazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),

            MULT_OBJ_2(rhs_mag_mk3a2),

            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),

            MULT_OBJ_2(rhs_mag_mk3a2),

            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };

        linkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_Beret_Red",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_Beret_Red",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
    };

    class O_BlackOrder_Soldier_AA_F : O_BlackOrder_Rifleman_F {
        magazines[] = {
            MULT_OBJ_2(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),

            MULT_OBJ_6(ACE_10Rnd_762x51_M993_AP_Mag)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),

            MULT_OBJ_6(ACE_10Rnd_762x51_M993_AP_Mag)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
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
    class O_BlackOrder_Soldier_AT_F : O_BlackOrder_Rifleman_F {
        magazines[] = {
            MULT_OBJ_2(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),

            MULT_OBJ_6(ACE_10Rnd_762x51_M993_AP_Mag)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),

            MULT_OBJ_6(ACE_10Rnd_762x51_M993_AP_Mag)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "B_ViperHarness_blk_F",
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
        magazines[] = {
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
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
    };
    class O_BlackOrder_FighterPilot_F : O_BlackOrder_base_F {
        magazines[] = {
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
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
    };
    class O_BlackOrder_HeliPilot_F : O_BlackOrder_base_F {
        magazines[] = {
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
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
    };
    class O_BlackOrder_HeliCrew_F : O_BlackOrder_HeliPilot_F {
        magazines[] = {
            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };

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
    };

    class O_BlackOrder_Survivor_F : O_BlackOrder_Rifleman_F {
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {};
        respawnItems[] = {};
        linkedItems[] = {};
        respawnLinkedItems[] = {};
    };
    class O_BlackOrder_Unarmed_00_F : O_BlackOrder_base_F {
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_CombatHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_Unarmed_01_F : O_BlackOrder_base_F {
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "V_BlackOrder_PlateCarrier",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_PlateCarrier",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_Unarmed_02_F : O_BlackOrder_base_F {
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit)
        };
        linkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
};
