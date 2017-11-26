
class CfgVehicles {
    class B_Mortar_01_F;
    class O_blackorder_Mortar_01_F : B_Mortar_01_F {
        _generalMacro = "O_blackorder_Mortar_01_F";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(Mortar_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\O_blackorder_Mortar_01_F.jpg);

        faction = "OPF_BlackOrder_F";
        side = 0;

        crew = "O_BlackOrder_Rifleman_F";
        typicalCargo[] = {"O_BlackOrder_Rifleman_F"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\Mortar_01_BlackOrder_CO.paa)
        };
    };
};
