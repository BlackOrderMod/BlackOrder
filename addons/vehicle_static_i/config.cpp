#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "I_BlackOrder_veh_Quadbike_F",
            "I_BlackOrder_veh_SUV_F",
            "I_BlackOrder_veh_Offroad_F",
            "I_BlackOrder_veh_Offroad_armed_F",
            "I_BlackOrder_veh_Van_02_F",
            "I_BlackOrder_veh_Van_02_transport_F",
            "I_BlackOrder_veh_Truck_Covered_F",
            "I_BlackOrder_veh_Truck_Transport_F",

            "I_BlackOrder_veh_m1025_m2_F",
            "I_BlackOrder_veh_m1025_mk19_F",
            "I_BlackOrder_veh_m1025_F",

            "I_BlackOrder_veh_m998_2dr_fulltop_F",
            "I_BlackOrder_veh_m998_2dr_halftop_F",
            "I_BlackOrder_veh_m998_2dr_F",

            "I_BlackOrder_veh_m998_4dr_fulltop_F",
            "I_BlackOrder_veh_m998_4dr_halftop_F",
            "I_BlackOrder_veh_m998_4dr_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "blackorder_main",
            "blackorder_common",

            "blackorder_characters_i",
            "blackorder_vehicle_car_o"
        };
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
