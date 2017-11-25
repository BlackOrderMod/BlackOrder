#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Weapon_srifle_DMR_03_blackorder_F",
            "Weapon_rhs_weap_m40a5_blackorder"
        };
        weapons[] = {
            "srifle_DMR_03_blackorder_F",
            "srifle_DMR_03_blackorder_CCO_F",
            "srifle_DMR_03_blackorder_ACOG_F",

            "rhs_weap_m4a1_BlackOrder_anpeq15_F",
            "rhs_weap_m4a1_BlackOrder_ACOGRMR_anpeq15_F",
            "rhs_weap_m4a1_m320_BlackOrder_ACOGRMR_anpeq15_F",

            "rhs_weap_mk18_bk_BlackOrder_ACOG",

            "rhs_weap_m249_pip_L_blackorder_M2A1",

            "rhs_weap_m40a5_blackorder",
            "rhs_weap_m40a5_blackorder_acog2",

            "rhsusf_weap_MP7A2_blackorder_ACO_anpeq15_grip3"
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
