#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"blackorder_flag_F","blackorder_flagsmall_F","blackorder_banner_F"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"blackorder_main"};
        author = CSTRING(BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgUnitInsignia.hpp"
#include "CfgVehicles.hpp"
