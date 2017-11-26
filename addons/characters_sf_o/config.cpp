#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "O_BlackOrder_SF_base_F",

            "O_BlackOrder_SF_TeamLeader_F",
            "O_BlackOrder_SF_Rifleman_01_F",
            "O_BlackOrder_SF_Marksmen_01_F",
            "O_BlackOrder_SF_Sapper_F",
            "O_BlackOrder_SF_AR_F",
            
            "O_BlackOrder_SF_Operator_01_F",
            "O_BlackOrder_SF_Agent_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "blackorder_main",
            "blackorder_common",

            "blackorder_characters_o",
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
#include "CfgGroups.hpp"
