
class CfgVehicles {
    class O_UAV_01_BlackOrder_F;
    class I_UAV_01_BlackOrder_F : O_UAV_01_BlackOrder_F {
        _generalMacro = "O_UAV_01_BlackOrder_F";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(common,BlackOrderTeam);

        faction = "IND_BlackOrder_F";
        side = 2;

        crew = "I_UAV_AI";
        typicalCargo[] = {"I_UAV_AI"};

        class assembleInfo {
            primary = 1;
            base = "";
            assembleTo = "";
            displayName = "";
            dissasembleTo[] = {"I_UAV_01_backpack_BlackOrder_F"};
        };
    };
    class O_UAV_02_dynamicLoadout_BlackOrder_F;
    class I_UAV_02_dynamicLoadout_BlackOrder_F : O_UAV_02_dynamicLoadout_BlackOrder_F {
        _generalMacro = "O_UAV_02_dynamicLoadout_BlackOrder_F";
        scope = 2;
        scopeCurator = 0;
        author = ECSTRING(common,BlackOrderTeam);

        faction = "IND_BlackOrder_F";
        side = 2;

        crew = "I_UAV_AI";
        typicalCargo[] = {"I_UAV_AI"};

    };
    class O_UAV_02_BlackOrder_F;
    class I_UAV_02_BlackOrder_F : O_UAV_02_BlackOrder_F {
        _generalMacro = "B_UAV_02_BlackOrder_F";
        scope = 1;
        scopeCurator = 2;
        author = ECSTRING(common,BlackOrderTeam);

        faction = "IND_BlackOrder_F";
        side = 2;

        crew = "I_UAV_AI";
        typicalCargo[] = {"I_UAV_AI"};

    };
    class O_UAV_02_CAS_BlackOrder_F;
    class I_UAV_02_CAS_BlackOrder_F : O_UAV_02_CAS_BlackOrder_F {
        _generalMacro = "B_UAV_02_CAS_BlackOrder_F";
        scope = 1;
        scopeCurator = 2;
        author = ECSTRING(common,BlackOrderTeam);

        faction = "IND_BlackOrder_F";
        side = 2;

        crew = "I_UAV_AI";
        typicalCargo[] = {"I_UAV_AI"};
    };
};
