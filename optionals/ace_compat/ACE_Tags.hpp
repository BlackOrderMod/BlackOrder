class ACE_Tags {
    class blackorder_progaganda_tagging_black {
        displayName = CSTRING(propaganda_black);
        requiredItem = "ACE_SpraypaintBlack";
        condition = QUOTE(faction player in [ARR_6('OPF_BlackOrder_F','OPF_BlackOrder_SCI_F','OPF_BlackOrder_MP_F','IND_BlackOrder_F','IND_BlackOrder_SCI_F','IND_BlackOrder_MP_F')]);
        textures[] = {
            QPATHTOF(data\tagging\progaganda_tagging_black_00_ca.paa),
            QPATHTOF(data\tagging\progaganda_tagging_black_01_ca.paa),
            QPATHTOF(data\tagging\progaganda_tagging_black_02_ca.paa)
        };
        icon = QPATHTOF(UI\icon_progaganda_tagging_black_ca.paa);
    };
    class blackorder_progaganda_tagging_blue {
        displayName = CSTRING(propaganda_blue);
        requiredItem = "ACE_SpraypaintBlue";
        condition = QUOTE(faction player in [ARR_6('OPF_BlackOrder_F','OPF_BlackOrder_SCI_F','OPF_BlackOrder_MP_F','IND_BlackOrder_F','IND_BlackOrder_SCI_F','IND_BlackOrder_MP_F')]);
        textures[] = {
            QPATHTOF(data\tagging\progaganda_tagging_blue_00_ca.paa),
            QPATHTOF(data\tagging\progaganda_tagging_blue_01_ca.paa),
            QPATHTOF(data\tagging\progaganda_tagging_blue_02_ca.paa)
        };
        icon = QPATHTOF(UI\icon_progaganda_tagging_blue_ca.paa);
    };
    class blackorder_progaganda_tagging_green {
        displayName = CSTRING(propaganda_green);
        requiredItem = "ACE_SpraypaintGreen";
        condition = QUOTE(faction player in [ARR_6('OPF_BlackOrder_F','OPF_BlackOrder_SCI_F','OPF_BlackOrder_MP_F','IND_BlackOrder_F','IND_BlackOrder_SCI_F','IND_BlackOrder_MP_F')]);
        textures[] = {
            QPATHTOF(data\tagging\progaganda_tagging_green_00_ca.paa),
            QPATHTOF(data\tagging\progaganda_tagging_green_01_ca.paa),
            QPATHTOF(data\tagging\progaganda_tagging_green_02_ca.paa)
        };
        icon = QPATHTOF(UI\icon_progaganda_tagging_green_ca.paa);
    };
    class blackorder_progaganda_tagging_red {
        displayName = CSTRING(propaganda_red);
        requiredItem = "ACE_SpraypaintRed";
        condition = QUOTE(faction player in [ARR_6('OPF_BlackOrder_F','OPF_BlackOrder_SCI_F','OPF_BlackOrder_MP_F','IND_BlackOrder_F','IND_BlackOrder_SCI_F','IND_BlackOrder_MP_F')]);
        textures[] = {
            QPATHTOF(data\tagging\progaganda_tagging_red_00_ca.paa),
            QPATHTOF(data\tagging\progaganda_tagging_red_01_ca.paa),
            QPATHTOF(data\tagging\progaganda_tagging_red_02_ca.paa)
        };
        icon = QPATHTOF(UI\icon_progaganda_tagging_red_ca.paa);
    };
};
