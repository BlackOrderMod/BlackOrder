#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "O_blackorder_veh_Quadbike",
            "O_blackorder_veh_SUV",
            "O_blackorder_veh_Truck_Covered",
            "O_blackorder_veh_Truck_Transport",

            "O_blackorder_veh_m1025_m2",
            "O_blackorder_veh_m1025_mk19",
            "O_blackorder_veh_m1025",
            
            "O_blackorder_veh_m998_2dr_fulltop",
            "O_blackorder_veh_m998_2dr_halftop",
            "O_blackorder_veh_m998_2dr",

            "O_blackorder_veh_m998_4dr_fulltop",
            "O_blackorder_veh_m998_4dr_halftop",
            "O_blackorder_veh_m998_4dr"
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
