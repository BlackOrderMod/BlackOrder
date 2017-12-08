#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "B_ViperLightHarness_blk_BlackOrder_Medic_F",
            "B_ViperHarness_blk_BlackOrder_AA_F",
            "B_ViperHarness_blk_BlackOrder_AT_F"
        };
        weapons[] = {
            "U_BlackOrder_Uniform_1",
            "U_BlackOrder_Uniform_1_Medic",

            "U_BlackOrder_Uniform_MP_1",

            "U_BlackOrder_PilotCoveralls",
            "U_BlackOrder_HeliPilotCoveralls",

            "U_BlackOrder_ScienceCoveralls_01",
            "U_BlackOrder_ScienceCombatCoveralls_01",
            "U_BlackOrder_ScienceCombatCoveralls_02",

            "V_BlackOrder_TacVest_1",
            "V_BlackOrder_TacVest_Security",
            "V_BlackOrder_TacVest_ScienceSecurity",
            "V_BlackOrder_TacVest_SpecialSecurity",
            "V_BlackOrder_TacVest_MilitaryPolice",
            "V_BlackOrder_Chestrig",
            "V_BlackOrder_PlateCarrier",
            "V_BlackOrder_PlateCarrier_medic",

            "H_BlackOrder_CombatHelmet",
            "H_BlackOrder_CombatHelmet_red",

            "H_BlackOrder_mich_bare",
            "H_BlackOrder_mich_bare_headset",

            "H_BlackOrder_PilotHelmet",

            "H_BlackOrder_Beret",
            "H_BlackOrder_Beret_Red",
            "H_BlackOrder_MilCap",

            "H_BlackOrder_Cap_01"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"blackorder_main","blackorder_common"};
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
