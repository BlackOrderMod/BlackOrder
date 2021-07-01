class CfgGroups {
    class Indep {
        class IND_BlackOrder_F {
            name = ECSTRING(common,Faction_DisplayName);
            class Motorized_MTP {
                name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP0";
                class I_BlackOrder_MotInf_Team {
                    name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInfTeam0";
                    side = 2;
                    faction = "IND_BlackOrder_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    class Unit0 {
                        side = 2;
                        vehicle = "I_blackorder_tigr_m_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        side = 2;
                        vehicle = "I_BlackOrder_Autorifleman_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2 {
                        side = 2;
                        vehicle = "I_BlackOrder_Soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3 {
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_2_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit4 {
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_2_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_BlackOrder_MotInf_AT {
                    name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_AT0";
                    side = 2;
                    faction = "IND_BlackOrder_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    class Unit0 {
                        side = 2;
                        vehicle = "I_blackorder_veh_m1045_w";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        side = 2;
                        vehicle = "I_BlackOrder_Soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2     {
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3 {
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_2_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class I_BlackOrder_MotInf_AA {
                    name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_AA0";
                    side = 2;
                    faction = "IND_BlackOrder_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    class Unit0 {
                        side = 2;
                        vehicle = "I_blackorder_veh_m998_2dr_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        side = 2;
                        vehicle = "I_BlackOrder_Soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2 {
                        side = 2;
                        vehicle = "I_BlackOrder_Soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3 {
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_2_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class I_BlackOrder_MotInf_MGTeam {
                    name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_MGTeam0";
                    side = 2;
                    faction = "IND_BlackOrder_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    class Unit0 {
                        side = 2;
                        vehicle = "I_blackorder_veh_m1025_m2_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        side = 2;
                        vehicle = "I_BlackOrder_TeamLeader_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };
                    class Unit2 {
                        side = 2;
                        vehicle = "I_BlackOrder_Autorifleman_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3 {
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_LAT_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class I_BlackOrder_MotInf_GMGTeam {
                    name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_GMGTeam0";
                    side = 2;
                    faction = "IND_BlackOrder_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    class Unit0 {
                        side = 2;
                        vehicle = "I_blackorder_veh_m1025_mk19_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        side = 2;
                        vehicle = "I_BlackOrder_TeamLeader_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };
                    class Unit2 {
                        side = 2;
                        vehicle = "I_BlackOrder_Autorifleman_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3 {
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_LAT_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class I_BlackOrder_MotInf_Reinforce {
                    name="$STR_A3_CFGGROUPS_WEST_BLU_F_MOTORIZED_BUS_MOTINF_REINFORCE0";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    faction = "IND_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_blackorder_veh_Truck_Transport_F";
                    };
                    class Unit1 {
                        position[] = {5,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_BlackOrder_SquadLeader_F";
                    };
                    class Unit2 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_F";
                    };
                    class Unit3 {
                        position[] = {5,-4,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_LAT_F";
                    };
                    class Unit4 {
                        position[] = {5,-6,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Marksmen_F";
                    };
                    class Unit5 {
                        position[] = {5,-8,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_BlackOrder_TeamLeader_F";
                    };
                    class Unit6 {
                        position[] = {5,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Autorifleman_F";
                    };
                    class Unit7 {
                        position[] = {-5,-8,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_F";
                    };
                    class Unit8 {
                        position[] = {-5,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_CombatLifeSaver_F";
                    };
                    class Unit9 {
                        position[] = {-5,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_BlackOrder_TeamLeader_F";
                    };
                    class Unit10 {
                        position[] = {-5,-2,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Autorifleman_F";
                    };
                    class Unit11 {
                        position[] = {-5,-4,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_2_F";
                    };
                    class Unit12 {
                        position[] = {-5,-6,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_LAT_F";
                    };
                };
            };
        };
    };
};
