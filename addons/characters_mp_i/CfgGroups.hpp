class CfgGroups {
    class Indep {
        class IND_BlackOrder_MP_F {
            name = ECSTRING(common,FactionMP_DisplayName);
            class Infantry {
                name="$STR_A3_CfgGroups_West_BLU_F_Infantry0";
                class I_BlackOrder_InfTeam {
                    name= ECSTRING(characters_mp_o,Group_InfPatrolTeam_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "IND_BlackOrder_MP_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_Sergeant_03_Armored_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_03_Armored_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_02_Armored_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_02_Armored_F";
                    };
                };
                class I_BlackOrder_InfPatrol {
                    name = ECSTRING(characters_mp_o,Group_InfPatrol_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "IND_BlackOrder_MP_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_Sergeant_01_F";
                    };
                    class Unit1 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_01_F";
                    };
                };
                class I_BlackOrder_InfPatrolArmored {
                    name = ECSTRING(characters_mp_o,Group_InfPatrolArmored_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "IND_BlackOrder_MP_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_Sergeant_01_Armored_F";
                    };
                    class Unit1 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_01_Armored_F";
                    };
                };
                class I_BlackOrder_InfPatrolArmedArmored {
                    name = ECSTRING(characters_mp_o,Group_InfPatrolArmedArmored_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "IND_BlackOrder_MP_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_Sergeant_03_Armored_F";
                    };
                    class Unit1 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_PatrolOfficer_02_Armored_F";
                    };
                };
            };
            class SpecOps {
                name="$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
                class I_BlackOrder_ResponceTeam_MP {
                    name = ECSTRING(characters_mp_o,Group_ResponceTeam_MP_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
                    faction = "IND_BlackOrder_MP_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_Soldier_TeamLeader_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_Soldier_Rifleman_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_Soldier_Rifleman_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_Soldier_Rifleman_F";
                    };
                };
                class I_BlackOrder_InfiltrationTeam_MP {
                    name = ECSTRING(characters_mp_o,Group_InfiltrationTeam_MP_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
                    faction = "IND_BlackOrder_MP_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_Soldier_TeamLeader_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_Soldier_Rifleman_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_Soldier_Rifleman_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_BlackOrder_MP_Soldier_Medic_F";
                    };
                };
            };
        };
    };
};
