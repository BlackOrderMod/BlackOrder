class CfgGroups {
    class East {
        class OPF_BlackOrder_MP_F {
            name = ECSTRING(common,FactionMP_DisplayName);
            class Infantry {
                name="$STR_A3_CfgGroups_West_BLU_F_Infantry0";
                class O_BlackOrder_InfTeam {
                    name= CSTRING(Group_InfPatrolTeam_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 0;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_Sergeant_03_Armored_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_03_Armored_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_02_Armored_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_02_Armored_F";
                    };
                };
                class O_BlackOrder_InfPatrol {
                    name = CSTRING(Group_InfPatrol_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 0;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_Sergeant_01_F";
                    };
                    class Unit1 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_01_F";
                    };
                };
                class O_BlackOrder_InfPatrolArmored {
                    name = CSTRING(Group_InfPatrolArmored_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 0;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_Sergeant_01_Armored_F";
                    };
                    class Unit1 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_01_Armored_F";
                    };
                };
                class O_BlackOrder_InfPatrolArmedArmored {
                    name = CSTRING(Group_InfPatrolArmedArmored_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 0;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_Sergeant_03_Armored_F";
                    };
                    class Unit1 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_02_Armored_F";
                    };
                };
            };
            class SpecOps {
                name="$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
                class O_BlackOrder_AssaultTeam_MP {
                    name = CSTRING(Group_AssaultTeam_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 0;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_Soldier_TeamLeader_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_Soldier_Rifleman_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_Soldier_Rifleman_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_Soldier_Rifleman_F";
                    };
                };
                class O_BlackOrder_InfiltrationTeam_MP {
                    name = CSTRING(Group_InfiltrationTeam_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 0;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_Soldier_TeamLeader_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_Soldier_Rifleman_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_Soldier_Rifleman_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_MP_Soldier_Medic_F";
                    };
                };
            };
        };
    };
};
