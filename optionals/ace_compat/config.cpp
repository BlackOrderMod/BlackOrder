#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_main",
            "blackorder_main",

            "blackorder_characters_o",
            "blackorder_characters_mp_o",
            "blackorder_characters_sci_o",
            "blackorder_characters_sf_o",
            
            "blackorder_vehicle_air_o",

            "blackorder_weapons"
        };
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
