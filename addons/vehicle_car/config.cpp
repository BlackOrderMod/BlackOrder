#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "O_blackorder_veh_Quadbike_F",
            "O_blackorder_veh_SUV_F",
            "O_blackorder_veh_Offroad_F",
            "O_blackorder_veh_Offroad_armed_F",
            "O_blackorder_veh_Truck_Covered_F",
            "O_blackorder_veh_Truck_Transport_F",

            "O_blackorder_veh_m1025_m2_F",
            "O_blackorder_veh_m1025_mk19_F",
            "O_blackorder_veh_m1025_F",

            "O_blackorder_veh_m998_2dr_fulltop_F",
            "O_blackorder_veh_m998_2dr_halftop_F",
            "O_blackorder_veh_m998_2dr_F",

            "O_blackorder_veh_m998_4dr_fulltop_F",
            "O_blackorder_veh_m998_4dr_halftop_F",
            "O_blackorder_veh_m998_4dr_F"
        };
        weapons[] = {
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "blackorder_main",
            "blackorder_common",

            "blackorder_characters_o"
        };
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
