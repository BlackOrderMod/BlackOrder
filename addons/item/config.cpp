#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "blackorder_Land_File1_F",
            "blackorder_Land_File2_F",

            "blackorder_Land_PlasticCase_01_large_F",
            "blackorder_Land_PlasticCase_01_medium_F",
            "blackorder_Land_PlasticCase_01_small_F",

            "blackorder_Land_Laptop_01_screen_01_F",
            "blackorder_Land_Laptop_01_screen_02_F",

            "blackorder_Land_Laptop_02_screen_01_F",

            "blackorder_Land_MobilePhone_smart_F",
            "blackorder_Land_MobilePhone_old_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"blackorder_main","blackorder_common"};
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
