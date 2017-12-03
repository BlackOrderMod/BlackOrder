
class CfgWeapons {

    class UniformItem;
    class U_B_CTRG_1;
    class U_B_PilotCoveralls;
    class U_B_HeliPilotCoveralls;

    class U_BlackOrder_Uniform_1 : U_B_CTRG_1 {
        _generalMacro = "U_BlackOrder_Uniform_1";
        scope = 2;
        displayName = CSTRING(Uniform_1_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\uniform\icon\Icon_U_BlackOrder_Uniform_1_co.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        modelSides[] = {3,2,1,0};
        class ItemInfo : UniformItem {
            modelSides[] = {3,2,1,0};
            uniformModel = "-";
            uniformClass = "O_BlackOrder_base_F";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {
                QPATHTOF(data\uniform\U_BlackOrder_Uniform_1_co.paa)
            };
            containerClass = "Supply40";
        };
    };
    class U_BlackOrder_Uniform_1_Medic : U_B_CTRG_1 {
        _generalMacro = "U_BlackOrder_Uniform_1_Medic";
        scope = 2;
        displayName = CSTRING(Uniform_1_Medic_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\uniform\icon\Icon_U_BlackOrder_Uniform_1_medic_co.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        modelSides[] = {3,2,1,0};
        class ItemInfo : UniformItem {
            modelSides[] = {3,2,1,0};
            uniformModel = "-";
            uniformClass = "O_BlackOrder_CombatLifeSaver_F";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {
                QPATHTOF(data\uniform\U_BlackOrder_Uniform_1_medic_co.paa)
            };
            containerClass = "Supply40";
        };
    };
    class U_BlackOrder_PilotCoveralls : U_B_PilotCoveralls {
        _generalMacro = "U_BlackOrder_PilotCoveralls";
        scope = 2;
        displayName = CSTRING(PilotCoveralls_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = "\A3\characters_f\data\ui\icon_U_B_PilotCoveralls_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        modelSides[] = {3,2,1,0};
        class ItemInfo : UniformItem {
            modelSides[] = {3,2,1,0};
            uniformModel = "-";
            uniformClass = "O_BlackOrder_FighterPilot_F";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {
                QPATHTOF(data\uniform\U_BlackOrder_PilotCoveralls_co.paa)
            };
            containerClass = "Supply40";
        };
    };
    class U_BlackOrder_HeliPilotCoveralls : U_B_HeliPilotCoveralls {
        _generalMacro = "U_BlackOrder_HeliPilotCoveralls";
        scope = 2;
        displayName = CSTRING(PilotCoveralls_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = "\A3\characters_f\data\ui\icon_U_B_PilotCoveralls_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        modelSides[] = {3,2,1,0};
        class ItemInfo : UniformItem {
            modelSides[] = {3,2,1,0};
            uniformModel = "-";
            uniformClass = "O_BlackOrder_HeliPilot_F";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {
                QPATHTOF(data\uniform\U_BlackOrder_HeliPilotCoveralls_co.paa)
            };
            containerClass = "Supply40";
        };
    };

    class U_C_Scientist;
    class U_BlackOrder_ScienceCoveralls_01 : U_C_Scientist {
        _generalMacro = "U_BlackOrder_ScienceCoveralls_01";
        scope = 2;
        displayName = CSTRING(ScienceCoveralls_01_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\uniform\icon\Icon_U_BlackOrder_ScienceCoveralls_01.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        modelSides[] = {3,2,1,0};
        class ItemInfo : UniformItem {
            modelSides[] = {3,2,1,0};
            uniformModel = "-";
            uniformClass = "O_BlackOrder_Sci_base_F";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {
                QPATHTOF(data\uniform\U_BlackOrder_Uniform_1_co.paa)
            };
            containerClass = "Supply40";
        };
    };
    class U_BlackOrder_ScienceCombatCoveralls_01 : U_C_Scientist {
        _generalMacro = "U_BlackOrder_ScienceCoveralls_01";
        scope = 2;
        displayName = CSTRING(ScienceCombatCoveralls_01_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\uniform\icon\Icon_U_BlackOrder_ScienceCoveralls_01.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        modelSides[] = {3,2,1,0};
        class ItemInfo : UniformItem {
            modelSides[] = {3,2,1,0};
            uniformModel = "-";
            uniformClass = "O_BlackOrder_Sci_Security_base_F";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {
                QPATHTOF(data\uniform\U_BlackOrder_ScienceCombatCoveralls_01.paa)
            };
            containerClass = "Supply40";
        };
    };
    class U_BlackOrder_ScienceCombatCoveralls_02 : U_C_Scientist {
        _generalMacro = "U_BlackOrder_ScienceCombatCoveralls_02";
        scope = 2;
        displayName = CSTRING(ScienceCombatCoveralls_02_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\uniform\icon\Icon_U_BlackOrder_ScienceCoveralls_02.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        modelSides[] = {3,2,1,0};
        class ItemInfo : UniformItem {
            modelSides[] = {3,2,1,0};
            uniformModel = "-";
            uniformClass = "O_BlackOrder_Sci_SpecialSecurity_base_F";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {
                QPATHTOF(data\uniform\U_BlackOrder_ScienceCombatCoveralls_02.paa)
            };
            containerClass = "Supply40";
        };
    };

    class V_TacVest_blk_POLICE;
    class V_Chestrig_blk;
    class V_PlateCarrier1_blk;

    class V_BlackOrder_TacVest_1 : V_TacVest_blk_POLICE {
        _generalMacro = "V_BlackOrder_TacVest_1";
        scope = 2;
        displayName = CSTRING(Vest_TacVest_1_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\vest\icon\icon_V_BlackOrder_TacVest_co.paa);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vest\V_BlackOrder_TacVest_co.paa)
        };
    };
    class V_BlackOrder_TacVest_ScienceSecurity : V_TacVest_blk_POLICE {
        _generalMacro = "V_BlackOrder_TacVest_ScienceSecurity";
        scope = 2;
        displayName = CSTRING(Vest_TacVest_ScienceSecurity_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\vest\icon\icon_V_BlackOrder_TacVest_ScienceSecurity_co.paa);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vest\V_BlackOrder_TacVest_ScienceSecurity_co.paa)
        };
    };
    class V_BlackOrder_TacVest_SpecialSecurity : V_TacVest_blk_POLICE {
        _generalMacro = "V_BlackOrder_TacVest_SpecialSecurity";
        scope = 2;
        displayName = CSTRING(Vest_TacVest_SpecialSecurity_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\vest\icon\icon_V_BlackOrder_TacVest_SpecialSecurity_co.paa);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vest\V_BlackOrder_TacVest_SpecialSecurity_co.paa)
        };
    };
    class V_BlackOrder_Chestrig : V_Chestrig_blk {
        _generalMacro = "V_BlackOrder_Chestrig";
        scope = 2;
        displayName = CSTRING(Vest_Chestrig_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\vest\icon\icon_V_BlackOrder_Chestrig_co.paa);
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vest\V_BlackOrder_ChestrigEquipment_co.paa),
            QPATHTOF(data\vest\V_BlackOrder_Chestrig_co.paa)
        };
    };
    class V_BlackOrder_PlateCarrier : V_PlateCarrier1_blk {
        _generalMacro = "V_BlackOrder_PlateCarrier";
        scope = 2;
        displayName = CSTRING(Vest_PlateCarrier_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\vest\icon\icon_V_BlackOrder_PlateCarrier_co.paa);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vest\V_BlackOrder_PlateCarrier_co.paa)
        };
    };
    class V_BlackOrder_PlateCarrier_medic : V_PlateCarrier1_blk {
        _generalMacro = "V_BlackOrder_PlateCarrier_medic";
        scope = 2;
        displayName = CSTRING(Vest_PlateCarrier_medic_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\vest\icon\icon_V_BlackOrder_PlateCarrier_medic_co.paa);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vest\V_BlackOrder_PlateCarrier_medic_co.paa)
        };
    };


    class HeadgearItem;
    class H_HelmetB;
    class rhsusf_mich_bare_tan;
    class rhsusf_mich_bare_tan_headset;
    class RHS_jetpilot_usaf;
    class H_Beret_02;
    class H_MilCap_gry;

    class H_BlackOrder_CombatHelmet : H_HelmetB {
        _generalMacro = "H_BlackOrder_CombatHelmet";
        scope = 2;
        displayName = CSTRING(Headgear_CombatHelmet_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\headgear\H_BlackOrder_CombatHelmet_co.paa)
        };
    };
    class H_BlackOrder_CombatHelmet_red : H_HelmetB {
        _generalMacro = "H_BlackOrder_CombatHelmet_red";
        scope = 2;
        displayName = CSTRING(Headgear_CombatHelmet_red_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\headgear\H_BlackOrder_CombatHelmet_red_co.paa)
        };
    };

    class H_BlackOrder_mich_bare : rhsusf_mich_bare_tan {
        _generalMacro = "H_BlackOrder_mich_bare";
        scope = 2;
        displayName = CSTRING(Headgear_mich_bare_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelectionsTextures[] = {
            PATHTOF(data\headgear\H_BlackOrder_CombatHelmet_02_bare_mich_rhino_co.paa),
            PATHTOF(data\headgear\H_BlackOrder_CombatHelmet_02_mich_acc_co.paa),
            PATHTOF(data\headgear\H_BlackOrder_CombatHelmet_02_ach_acc_co.paa)
        };
    };
    class H_BlackOrder_mich_bare_headset : rhsusf_mich_bare_tan_headset {
        _generalMacro = "H_BlackOrder_mich_bare_headset";
        scope = 2;
        displayName = CSTRING(Headgear_mich_bare_headset_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelectionsTextures[] = {
            PATHTOF(data\headgear\H_BlackOrder_CombatHelmet_02_bare_mich_rhino_co.paa),
            PATHTOF(data\headgear\H_BlackOrder_CombatHelmet_02_mich_acc_co.paa),
            PATHTOF(data\headgear\H_BlackOrder_CombatHelmet_02_ach_acc_co.paa),
            "\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
        };
    };

    class H_BlackOrder_PilotHelmet : RHS_jetpilot_usaf {
        _generalMacro = "H_BlackOrder_PilotHelmet";
        scope = 2;
        displayName = CSTRING(Headgear_BlackOrder_PilotHelmet_Display);
        author = ECSTRING(common,BlackOrderTeam);
        //picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\headgear\H_BlackOrder_PilotHelmet_co.paa)
        };
    };

    class H_BlackOrder_Beret : H_Beret_02 {
        _generalMacro = "H_BlackOrder_Beret";
        scope = 2;
        displayName = CSTRING(Headgear_Beret_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\headgear\icon\icon_H_BlackOrder_Beret_co.paa);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\headgear\H_BlackOrder_Beret_co.paa)
        };
    };
    class H_BlackOrder_Beret_Red : H_Beret_02 {
        _generalMacro = "H_BlackOrder_Beret_Red";
        scope = 2;
        displayName = CSTRING(Headgear_Beret_red_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\headgear\icon\icon_H_BlackOrder_Beret_co.paa);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\headgear\H_BlackOrder_Beret_Red_co.paa)
        };
    };

    class H_BlackOrder_MilCap : H_MilCap_gry {
        _generalMacro = "H_BlackOrder_MilCap";
        scope = 2;
        displayName = CSTRING(Headgear_MilCap_Display);
        author = ECSTRING(common,BlackOrderTeam);
        picture = QPATHTOF(data\headgear\icon\icon_H_BlackOrder_MilCap_co.paa);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\headgear\H_BlackOrder_MilCap_co.paa)
        };
    };
};
