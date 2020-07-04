class CfgGroups {
    class Indep {
        class IND_BlackOrder_MP_F {
            name = ECSTRING(common,FactionMP_DisplayName);
            class Motorized_MTP {
                name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP0";
                class I_BlackOrder_MP_MotInf_Team {
                    name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInfTeam0";
                    side = 2;
                    faction = "IND_BlackOrder_MP_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    class Unit0 {
                        side = 2;
                        vehicle = "I_blackorder_veh_mp_m1025_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        side = 2;
                        vehicle = "I_BlackOrder_MP_Soldier_TeamLeader_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };
                    class Unit2 {
                        side = 2;
                        vehicle = "I_BlackOrder_MP_Soldier_Rifleman_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3 {
                        side = 2;
                        vehicle = "I_BlackOrder_MP_Soldier_Rifleman_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class I_BlackOrder_MP_MotInf_MGTeam {
                    name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_MGTeam0";
                    side = 2;
                    faction = "IND_BlackOrder_MP_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    class Unit0 {
                        side = 2;
                        vehicle = "I_blackorder_veh_mp_m1025_m2_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        side = 2;
                        vehicle = "I_BlackOrder_MP_Soldier_TeamLeader_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };
                    class Unit2 {
                        side = 2;
                        vehicle = "I_BlackOrder_MP_Soldier_Rifleman_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3 {
                        side = 2;
                        vehicle = "I_BlackOrder_MP_Soldier_Rifleman_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class I_BlackOrder_MP_MotInf_GMGTeam {
                    name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_GMGTeam0";
                    side = 2;
                    faction = "IND_BlackOrder_MP_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    class Unit0 {
                        side = 2;
                        vehicle = "I_blackorder_veh_mp_m1025_mk19_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        side = 2;
                        vehicle = "I_BlackOrder_MP_Soldier_TeamLeader_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };
                    class Unit2 {
                        side = 2;
                        vehicle = "I_BlackOrder_MP_Soldier_Rifleman_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3 {
                        side = 2;
                        vehicle = "I_BlackOrder_MP_Soldier_Rifleman_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
            };
        };
    };
};
