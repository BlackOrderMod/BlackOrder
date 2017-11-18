
class CfgVehicles {
    class Land_File2_F;
    
    class blackorder_Land_File1_F : Land_File2_F {
        _generalMacro = "blackorder_Land_File1_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(File1_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
        
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\blackorder_Land_File1_co.paa)
        };
    };    
    class blackorder_Land_File2_F : Land_File2_F {
        _generalMacro = "blackorder_Land_File2_F";
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(File2_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
        
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\blackorder_Land_File2_co.paa)
        };
    };
};
