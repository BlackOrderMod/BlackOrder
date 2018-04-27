class CfgVehicles {
    class Weapon_Base_F;
    class Weapon_srifle_DMR_03_blackorder_F : Weapon_Base_F {
        displayName = CSTRING(DMR_Display);
    };

    // Army Characters
    class O_BlackOrder_base_F;
    class O_BlackOrder_Rifleman_F : O_BlackOrder_base_F {
        magazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(ACE_Chemlight_HiWhite),
            MULT_OBJ_1(ACE_Chemlight_IR),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(ACE_Chemlight_HiWhite),
            MULT_OBJ_1(ACE_Chemlight_IR),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50)
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
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(ACE_Chemlight_HiWhite),
            MULT_OBJ_1(ACE_Chemlight_IR),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(ACE_Chemlight_HiWhite),
            MULT_OBJ_1(ACE_Chemlight_IR),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50)
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
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Flashlight_XL50)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Flashlight_XL50)
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
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Flashlight_XL50)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Flashlight_XL50)
        };
    };
    class O_BlackOrder_SquadLeader_F : O_BlackOrder_Rifleman_F {
        magazines[] = {
            MULT_OBJ_2(rhs_mag_m67),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(ACE_Chemlight_HiWhite),
            MULT_OBJ_1(ACE_Chemlight_IR),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhs_mag_m67),
            MULT_OBJ_1(B_IR_Grenade),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(ACE_Chemlight_HiWhite),
            MULT_OBJ_1(ACE_Chemlight_IR),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
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
        magazines[] = {
            MULT_OBJ_2(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(ACE_Chemlight_HiWhite),
            MULT_OBJ_1(ACE_Chemlight_IR),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(ACE_Chemlight_HiWhite),
            MULT_OBJ_1(ACE_Chemlight_IR),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_DAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_DAGR)
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
        magazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(ACE_Chemlight_HiWhite),
            MULT_OBJ_1(ACE_Chemlight_IR),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(ACE_Chemlight_HiWhite),
            MULT_OBJ_1(ACE_Chemlight_IR),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50)
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
                MULT_OBJ_1(FirstAidKit),

                MULT_OBJ_1(ACE_MapTools),

                MULT_OBJ_1(ACE_Flashlight_XL50)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50)
        };
    };
    class O_BlackOrder_Marksmen_F : O_BlackOrder_Rifleman_F {
        magazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(ACE_Chemlight_HiWhite),
            MULT_OBJ_1(ACE_Chemlight_IR),

            MULT_OBJ_10(rhsusf_10Rnd_762x51_m118_special_Mag),
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(SmokeShellGreen),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(ACE_Chemlight_HiWhite),
            MULT_OBJ_1(ACE_Chemlight_IR),

            MULT_OBJ_10(rhsusf_10Rnd_762x51_m118_special_Mag),
            MULT_OBJ_4(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50)
        };
    };
    class O_BlackOrder_CombatLifeSaver_F : O_BlackOrder_base_F {
        magazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(ACE_Chemlight_HiWhite),
            MULT_OBJ_1(ACE_Chemlight_IR),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MULT_OBJ_3(rhs_mag_m67),
            MULT_OBJ_1(SmokeShell),
            MULT_OBJ_1(Chemlight_red),
            MULT_OBJ_1(ACE_Chemlight_HiWhite),
            MULT_OBJ_1(ACE_Chemlight_IR),

            MULT_OBJ_8(ACE_10Rnd_762x51_M993_AP_Mag),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50)
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
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
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
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_2(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_2(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };
        linkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_Beret_Red",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_Beret_Red",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
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
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_2(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)

        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_2(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };

        linkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_Beret_Red",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_Chestrig",
            "H_BlackOrder_Beret_Red",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
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
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50)
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
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50)
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

    // Police Characters
    class O_BlackOrder_MP_base_F;
    class O_BlackOrder_MP_PatrolOfficer_01_F : O_BlackOrder_MP_base_F {
        magazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        items[] = {
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_Beret_blk",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_Beret_blk",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_PatrolOfficer_01_Armored_F : O_BlackOrder_MP_PatrolOfficer_01_F {
        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_Beret_blk",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_PASGT_basic_black_F",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_PatrolOfficer_02_F : O_BlackOrder_MP_base_F {
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
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_Beret_blk",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_Beret_blk",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_PatrolOfficer_02_Armored_F : O_BlackOrder_MP_PatrolOfficer_02_F {
        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_PASGT_basic_black_F",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_PASGT_basic_black_F",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_PatrolOfficer_03_F : O_BlackOrder_MP_base_F {
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
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_Beret_blk",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_Beret_blk",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_PatrolOfficer_03_Armored_F : O_BlackOrder_MP_PatrolOfficer_03_F {
        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_PASGT_basic_black_F",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_PASGT_basic_black_F",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class O_BlackOrder_MP_PatrolOfficer_Sergeant_01_F : O_BlackOrder_MP_base_F {
        magazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_JHP)
        };
        items[] = {
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_PatrolOfficer_Sergeant_01_Armored_F : O_BlackOrder_MP_PatrolOfficer_Sergeant_01_F {
        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        glassesEnabled = 0;
    };
    class O_BlackOrder_MP_PatrolOfficer_Sergeant_02_F : O_BlackOrder_MP_base_F {
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
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_PatrolOfficer_Sergeant_02_Armored_F : O_BlackOrder_MP_PatrolOfficer_Sergeant_02_F {
        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_PatrolOfficer_Sergeant_03_F : O_BlackOrder_MP_base_F {
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
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };
        linkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_PatrolOfficer_Sergeant_03_Armored_F : O_BlackOrder_MP_PatrolOfficer_Sergeant_03_F {
        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class O_BlackOrder_MP_Soldier_base_F;
    class O_BlackOrder_MP_Soldier_Rifleman_F : O_BlackOrder_MP_Soldier_base_F {
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
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };

        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_CombatHelmet_MP",
            "rhs_googles_clear",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_CombatHelmet_MP",
            "rhs_googles_clear",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_Soldier_TeamLeader_F : O_BlackOrder_MP_Soldier_base_F {
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
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };

        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_CombatHelmet_MP",
            "G_Tactical_Clear",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_CombatHelmet_MP",
            "G_Tactical_Clear",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_Soldier_Medic_F : O_BlackOrder_MP_Soldier_base_F {
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
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };

        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_CombatHelmet_MP",
            "G_Tactical_Clear",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_CombatHelmet_MP",
            "G_Tactical_Clear",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_MP_Soldier_Officer_F : O_BlackOrder_MP_Soldier_base_F {
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
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_3(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };

        linkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret_Red",
            "G_Tactical_Clear",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BlackOrder_TacVest_MilitaryPolice",
            "H_BlackOrder_Beret_Red",
            "G_Tactical_Clear",
            "ItemMap",
            "ItemWatch",
            "ItemRadio"
        };
    };

    // Science Characters
    class O_BlackOrder_Sci_Security_base_F;
    class O_BlackOrder_Sci_SecurityOfficer_F : O_BlackOrder_Sci_Security_base_F {
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
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };

        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_TacVest_ScienceSecurity",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_TacVest_ScienceSecurity",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_Sci_SecurityOfficer_Light_F : O_BlackOrder_Sci_Security_base_F {
        magazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50)
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
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };

        linkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_TacVest_ScienceSecurity",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhs_googles_clear",
            "V_BlackOrder_TacVest_ScienceSecurity",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_Sci_Security_Light_F : O_BlackOrder_Sci_Security_base_F {
        magazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50)
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

    class O_BlackOrder_Sci_SpecialSecurity_base_F;
    class O_BlackOrder_Sci_SpecialSecurityOfficer_F : O_BlackOrder_Sci_SpecialSecurity_base_F {
        magazines[] = {
            MULT_OBJ_8(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_4(rhs_mag_m67),
            MULT_OBJ_2(rhs_mag_an_m14_th3)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_4(rhs_mag_m67),
            MULT_OBJ_2(rhs_mag_an_m14_th3)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };

        linkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_Beret_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_Beret_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_Sci_SpecialSecurity_01_F : O_BlackOrder_Sci_SpecialSecurity_base_F {
        magazines[] = {
            MULT_OBJ_8(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_4(rhs_mag_m67),
            MULT_OBJ_2(rhs_mag_an_m14_th3)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_4(rhs_mag_m67),
            MULT_OBJ_2(rhs_mag_an_m14_th3)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };

        linkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_Sci_SpecialSecurity_02_F : O_BlackOrder_Sci_SpecialSecurity_base_F {
        magazines[] = {
            MULT_OBJ_8(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_4(rhs_mag_m67),
            MULT_OBJ_2(rhs_mag_an_m14_th3)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhsusf_mag_40Rnd_46x30_FMJ),
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_4(rhs_mag_m67),
            MULT_OBJ_2(rhs_mag_an_m14_th3)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };

        linkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class O_BlackOrder_Sci_SpecialSecurityOfficer_Light_F : O_BlackOrder_Sci_SpecialSecurity_base_F {
        magazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };
        linkedItems[] = {
            "rhs_googles_black",
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_Sci_SpecialSecurity_Light_01_F : O_BlackOrder_Sci_SpecialSecurity_base_F {
        magazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        linkedItems[] = {
            "rhs_googles_black",
            "V_LegStrapBag_black_F",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_LegStrapBag_black_F",
            "H_BlackOrder_MilCap",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_Sci_SpecialSecurity_Light_02_F : O_BlackOrder_Sci_SpecialSecurity_base_F {
        magazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        respawnMagazines[] = {
            MULT_OBJ_2(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(rhs_mag_mk84)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        linkedItems[] = {
            "rhs_googles_black",
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_LegStrapBag_black_F",
            "H_BlackOrder_Beret",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class O_BlackOrder_Sci_SpecialSecurity_TeamLeader_F : O_BlackOrder_Sci_SpecialSecurity_base_F {
        magazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_4(rhs_mag_m67)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_4(rhs_mag_m67)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_microDAGR)
        };

        linkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
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
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_Sci_SpecialSecurity_Soldier_F : O_BlackOrder_Sci_SpecialSecurity_base_F {
        magazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_4(rhs_mag_m67)
        };
        respawnMagazines[] = {
            MULT_OBJ_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
            MULT_OBJ_3(rhsusf_mag_17Rnd_9x19_FMJ),

            MULT_OBJ_2(SmokeShell),
            MULT_OBJ_4(rhs_mag_m67)
        };
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_CableTie),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_DAGR)
        };

        linkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "H_BlackOrder_mich_bare",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
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
            "rhsusf_ANPVS_14"
        };
    };

    // Special Forces Chracters

    class O_BlackOrder_SF_base_F;
    class O_BlackOrder_SF_TeamLeader_F : O_BlackOrder_SF_base_F {
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };

        linkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
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
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_SF_Rifleman_01_F : O_BlackOrder_SF_base_F {
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };

        linkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
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
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_SF_Marksmen_F : O_BlackOrder_SF_base_F {
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };
        linkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
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
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_SF_Sapper_F : O_BlackOrder_SF_base_F {
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_Clacker),
            MULT_OBJ_1(ACE_DefusalKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_Clacker),
            MULT_OBJ_1(ACE_DefusalKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };

        linkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
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
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_SF_AR_F : O_BlackOrder_SF_base_F {
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };

        linkedItems[] = {
            "G_Balaclava_blk",
            "V_BlackOrder_PlateCarrier",
            "H_BlackOrder_mich_bare_headset",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
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
            "rhsusf_ANPVS_14"
        };
    };
    class O_BlackOrder_SF_Operator_01_F : O_BlackOrder_SF_base_F {
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };

        linkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_PlateCarrier",
            "rhsusf_Bowman",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_PlateCarrier",
            "rhsusf_Bowman",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class O_BlackOrder_SF_Agent_F : O_BlackOrder_SF_base_F {
        items[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };
        respawnItems[] = {
            MULT_OBJ_1(FirstAidKit),

            MULT_OBJ_1(ACE_MapTools),
            MULT_OBJ_1(ACE_Chemlight_Shield),

            MULT_OBJ_1(ACE_Flashlight_XL50),
            MULT_OBJ_1(ACE_IR_Strobe_Item),
            MULT_OBJ_1(ACE_microDAGR)
        };

        linkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_1",
            "H_WirelessEarpiece_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhs_googles_black",
            "V_BlackOrder_TacVest_1",
            "H_WirelessEarpiece_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    // Aircraft
    class O_BlackOrder_Plane_Fighter_04_Cluster_F;
    class O_BlackOrder_Plane_Fighter_04_AA_F : O_BlackOrder_Plane_Fighter_04_Cluster_F {
        displayName = CSTRING(Plane_Fighter_04_AA_Display);
    };
    class O_BlackOrder_Plane_Fighter_04_CAS_F : O_BlackOrder_Plane_Fighter_04_Cluster_F {
        displayName = CSTRING(Plane_Fighter_04_CAS_Display);
    };
};
