#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "I_UAV_01_BlackOrder_F",
            "I_UAV_02_dynamicLoadout_BlackOrder_F",
            "I_UAV_02_BlackOrder_F",
            "I_UAV_02_CAS_BlackOrder_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "blackorder_main",
            "blackorder_common",

            "blackorder_drones_o"
        };
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
