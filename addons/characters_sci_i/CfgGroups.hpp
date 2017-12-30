class CfgGroups {
    class Indep {
        class IND_BlackOrder_SCI_F {
            name = ECSTRING(common,FactionSCI_DisplayName);
            class Infantry {
                name="$STR_A3_CfgGroups_West_BLU_F_Infantry0";
                class I_BlackOrder_SecTeam {
                    name = ECSTRING(characters_sci_o,Group_SecurityTeam_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_SecurityOfficer_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_Security_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_Security_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_Security_F";
                    };
                };
                class I_BlackOrder_SecSentry {
                    name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_SecurityOfficer_F";
                    };
                    class Unit1 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_Security_F";
                    };
                };
                class I_BlackOrder_SecSentryLight {
                    name = ECSTRING(characters_sci_o,Group_SecSentryLight_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_SecurityOfficer_Light_F";
                    };
                    class Unit1 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_Security_Light_F";
                    };
                };
            };
            class SpecOps {
                name="$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
                class I_BlackOrder_SpecSecurityResponceTeam {
                    name = ECSTRING(characters_sci_o,Group_SpecSecurityResponceTeam_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_SpecialSecurity_TeamLeader_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_SpecialSecurity_Soldier_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_SpecialSecurity_Soldier_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_SpecialSecurity_Soldier_F";
                    };
                };
                class I_BlackOrder_SpecSecuritySentry {
                    name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_SpecialSecurityOfficer_F";
                    };
                    class Unit1 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_SpecialSecurity_01_F";
                    };
                };
                class I_BlackOrder_SpecSecuritySentryLight {
                    name = ECSTRING(characters_sci_o,Group_SecSentryLight_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_SpecialSecurityOfficer_Light_F";
                    };
                    class Unit1 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Sci_SpecialSecurity_Light_01_F";
                    };
                };
            };
        };
    };
};
