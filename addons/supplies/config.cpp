#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "blackorder_supplyCrate_F",
            "blackorder_CargoNet_01_ammo_F",

            "Box_blackorder_Ammo_F",
            "Box_blackorder_Wps_F",
            "Box_blackorder_AmmoOrd_F",
            "Box_blackorder_Grenades_F",
            "Box_blackorder_WpsLaunch_F",
            "Box_blackorder_WpsSpecial_F",
            "Box_blackorder_Support_F",

            "Box_blackorder_Uniforms_F",
            "Box_blackorder_Equip_F",

            "Box_blackorder_AmmoVeh_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "blackorder_main",
            "blackorder_common",

            "blackorder_item",

            "blackorder_gear",
            "blackorder_weapons"
        };
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
