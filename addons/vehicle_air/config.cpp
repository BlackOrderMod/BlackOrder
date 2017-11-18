#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "O_BlackOrder_VTOL_infantry_F"
        };
        weapons[] = {
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
