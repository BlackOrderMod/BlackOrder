#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "U_BlackOrder_Uniform_1",
            "U_BlackOrder_Uniform_1_Medic",
            "U_BlackOrder_PilotCoveralls",
            "U_BlackOrder_HeliPilotCoveralls",

            "V_BlackOrder_TacVest_1",
            "V_BlackOrder_Chestrig",
            "V_BlackOrder_PlateCarrier",
            "V_BlackOrder_PlateCarrier_medic",

            "H_BlackOrder_CombatHelmet",
            "H_BlackOrder_CombatHelmet_red",
            "H_BlackOrder_PilotHelmet",

            "H_BlackOrder_Beret",
            "H_BlackOrder_Beret_Red",
            "H_BlackOrder_MilCap"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"blackorder_main","blackorder_common"};
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
