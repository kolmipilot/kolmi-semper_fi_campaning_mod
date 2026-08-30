#define USMC_VEST_MEDIUM(VestClass) \
class VestClass: Vest_NoCamo_Base { \
    picture = "\26th_coal\UI\USMC.paa";\
}\

#define RHS_VEST_MEDIUM(VestClass,BaseClass) \
class VestClass: BaseClass { \
    class ItemInfo: ItemInfo { \
        class HitpointsProtectionInfo \
        { \
            class Neck \
            { \
                hitpointName = "HitNeck"; \
                armor = 2; \
                passThrough = 0.5; \
                simulation = ""; \
            }; \
            class Chest \
            { \
                hitpointName = "HitChest"; \
                armor = 20; \
                passThrough = 0.5; \
                simulation = ""; \
            }; \
            class Arms \
            { \
                hitpointName = "HitArms"; \
                armor = 0; \
                passThrough = 1; \
                simulation = ""; \
            }; \
            class Diaphragm \
            { \
                hitpointName = "HitDiaphragm"; \
                armor = 20; \
                passThrough = 0.5; \
                simulation = ""; \
            }; \
            class Abdomen \
            { \
                hitpointName = "HitAbdomen"; \
                armor = 20; \
                passThrough = 0.4; \
                simulation = ""; \
            }; \
            class Pelvis \
            { \
                hitpointName = "HitPelvis"; \
                armor = 12; \
                passThrough = 0.4; \
                simulation = ""; \
            }; \
            class Body \
            { \
                hitpointName = "HitBody"; \
                passThrough = 0.6; \
                simulation = ""; \
            }; \
        }; \
    }; \
}
	
	class UniformItem: InventoryItem_Base_F {};
	class Uniform_Base: ItemCore {
		class ItemInfo: UniformItem {};
	};
	class VestItem: InventoryItem_Base_F {};

class Vest_Camo_Base: ItemCore
{
    class ItemInfo: VestItem {};
};
class Vest_NoCamo_Base: ItemCore {};

RHS_VEST_MEDIUM(rhsusf_iotv_ocp_base,Vest_Camo_Base);
RHS_VEST_MEDIUM(rhsusf_spc,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_spc_rifleman,rhsusf_spc);
RHS_VEST_MEDIUM(rhsusf_spc_iar,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_corpsman,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_crewman,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_light,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_marksman,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_mg,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_sniper,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_squadleader,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_teamleader,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_patchless,rhsusf_spc_light);
RHS_VEST_MEDIUM(rhsusf_spc_patchless_radio,rhsusf_spc_squadleader);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_squadleader,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_teamleader,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_teamleader_alt,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_saw,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_grenadier,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_rifleman,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_rifleman_alt,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_medic,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_crewman,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_machinegunner,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_sniper,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_squadleader,rhsusf_spcs_ocp_squadleader);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_teamleader,rhsusf_spcs_ocp_teamleader);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_teamleader_alt,rhsusf_spcs_ocp_teamleader_alt);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_saw,rhsusf_spcs_ocp_saw);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_grenadier,rhsusf_spcs_ocp_grenadier);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_rifleman,rhsusf_spcs_ocp_rifleman);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_rifleman_alt,rhsusf_spcs_ocp_rifleman_alt);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_medic,rhsusf_spcs_ocp_medic);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_crewman,rhsusf_spcs_ocp_crewman);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_machinegunner,rhsusf_spcs_ocp_machinegunner);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_sniper,rhsusf_spcs_ocp_sniper);


    USMC_VEST_MEDIUM(USMC_PCG3_1_ATAK);
	USMC_VEST_MEDIUM(USMC_PCG3_1);
	USMC_VEST_MEDIUM(USMC_PCG3_1_ATAK_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_1_NB);
    USMC_VEST_MEDIUM(USMC_PCG3_1_NB_ATAK);
    USMC_VEST_MEDIUM(USMC_PCG3_2_NB_ATAK);
    USMC_VEST_MEDIUM(USMC_PCG3_3_NB_ATAK);
    USMC_VEST_MEDIUM(USMC_PCG3_4_NB_ATAK);
    USMC_VEST_MEDIUM(USMC_PCG3_5_NB_ATAK);
    USMC_VEST_MEDIUM(USMC_PCG3_6_NB_ATAK);
    USMC_VEST_MEDIUM(USMC_PCG3_7_NB_ATAK);
    USMC_VEST_MEDIUM(USMC_PCG3_8_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_PCG3_1_Belt);
    USMC_VEST_MEDIUM(USMC_PCG3_1_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_PCG3_2_ATAK);
	USMC_VEST_MEDIUM(USMC_PCG3_2);
	USMC_VEST_MEDIUM(USMC_PCG3_2_ATAK_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_2_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_2_Belt);
    USMC_VEST_MEDIUM(USMC_PCG3_2_Belt_ATAK);
    USMC_VEST_MEDIUM(USMC_PCG3_3_Belt_ATAK);
    USMC_VEST_MEDIUM(USMC_PCG3_4_Belt_ATAK);
    USMC_VEST_MEDIUM(USMC_PCG3_5_Belt_ATAK);
    USMC_VEST_MEDIUM(USMC_PCG3_6_Belt_ATAK);
    USMC_VEST_MEDIUM(USMC_PCG3_7_Belt_ATAK);
    USMC_VEST_MEDIUM(USMC_PCG3_8_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_PCG3_3_ATAK);
	USMC_VEST_MEDIUM(USMC_PCG3_3);
	USMC_VEST_MEDIUM(USMC_PCG3_3_ATAK_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_3_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_3_Belt);
	USMC_VEST_MEDIUM(USMC_PCG3_4_ATAK);
	USMC_VEST_MEDIUM(USMC_PCG3_4);
	USMC_VEST_MEDIUM(USMC_PCG3_4_ATAK_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_4_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_4_Belt);
	USMC_VEST_MEDIUM(USMC_PCG3_5_ATAK);
	USMC_VEST_MEDIUM(USMC_PCG3_5);
	USMC_VEST_MEDIUM(USMC_PCG3_5_ATAK_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_5_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_5_Belt);
	USMC_VEST_MEDIUM(USMC_PCG3_6_ATAK);
	USMC_VEST_MEDIUM(USMC_PCG3_6);
	USMC_VEST_MEDIUM(USMC_PCG3_6_ATAK_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_6_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_6_Belt);
	USMC_VEST_MEDIUM(USMC_PCG3_7_ATAK);
	USMC_VEST_MEDIUM(USMC_PCG3_7);
	USMC_VEST_MEDIUM(USMC_PCG3_7_ATAK_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_7_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_7_Belt);
	USMC_VEST_MEDIUM(USMC_PCG3_8_ATAK);
	USMC_VEST_MEDIUM(USMC_PCG3_8);
	USMC_VEST_MEDIUM(USMC_PCG3_8_ATAK_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_8_NB);
	USMC_VEST_MEDIUM(USMC_PCG3_8_Belt);
	USMC_VEST_MEDIUM(USMC_JPC_1);
	USMC_VEST_MEDIUM(USMC_JPC_1_NB);
	USMC_VEST_MEDIUM(USMC_JPC_1_P);
	USMC_VEST_MEDIUM(USMC_JPC_1_P_NB);
	USMC_VEST_MEDIUM(USMC_JPC_1_Belt);
	USMC_VEST_MEDIUM(USMC_JPC_1_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_1_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_1_P_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_1_P_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_1_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_2);
    USMC_VEST_MEDIUM(USMC_JPC_2_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_2_NB);
	USMC_VEST_MEDIUM(USMC_JPC_2_P);
	USMC_VEST_MEDIUM(USMC_JPC_2_P_NB);
	USMC_VEST_MEDIUM(USMC_JPC_2_Belt);
	USMC_VEST_MEDIUM(USMC_JPC_2_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_2_P_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_2_P_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_2_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_3);
	USMC_VEST_MEDIUM(USMC_JPC_3_NB);
	USMC_VEST_MEDIUM(USMC_JPC_3_P);
	USMC_VEST_MEDIUM(USMC_JPC_3_P_NB);
	USMC_VEST_MEDIUM(USMC_JPC_3_Belt);
	USMC_VEST_MEDIUM(USMC_JPC_3_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_3_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_3_P_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_3_P_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_3_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_4);
	USMC_VEST_MEDIUM(USMC_JPC_4_NB);
	USMC_VEST_MEDIUM(USMC_JPC_4_P);
	USMC_VEST_MEDIUM(USMC_JPC_4_P_NB);
	USMC_VEST_MEDIUM(USMC_JPC_4_Belt);
	USMC_VEST_MEDIUM(USMC_JPC_4_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_4_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_4_P_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_4_P_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_4_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_5);
	USMC_VEST_MEDIUM(USMC_JPC_5_NB);
	USMC_VEST_MEDIUM(USMC_JPC_5_P);
	USMC_VEST_MEDIUM(USMC_JPC_5_P_NB);
	USMC_VEST_MEDIUM(USMC_JPC_5_Belt);
	USMC_VEST_MEDIUM(USMC_JPC_5_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_5_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_5_P_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_5_P_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_5_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_6);
	USMC_VEST_MEDIUM(USMC_JPC_6_NB);
	USMC_VEST_MEDIUM(USMC_JPC_6_P);
	USMC_VEST_MEDIUM(USMC_JPC_6_P_NB);
	USMC_VEST_MEDIUM(USMC_JPC_6_Belt);
	USMC_VEST_MEDIUM(USMC_JPC_6_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_6_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_6_P_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_6_P_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_6_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_7);
	USMC_VEST_MEDIUM(USMC_JPC_7_NB);
	USMC_VEST_MEDIUM(USMC_JPC_7_P);
	USMC_VEST_MEDIUM(USMC_JPC_7_P_NB);
	USMC_VEST_MEDIUM(USMC_JPC_7_Belt);
	USMC_VEST_MEDIUM(USMC_JPC_7_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_7_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_7_P_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_7_P_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_7_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_8);
	USMC_VEST_MEDIUM(USMC_JPC_8_NB);
	USMC_VEST_MEDIUM(USMC_JPC_8_P);
	USMC_VEST_MEDIUM(USMC_JPC_8_P_NB);
	USMC_VEST_MEDIUM(USMC_JPC_8_Belt);
	USMC_VEST_MEDIUM(USMC_JPC_8_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_8_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_8_P_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_8_P_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_JPC_8_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_1);
	USMC_VEST_MEDIUM(USMC_ARC_1_NB);
	USMC_VEST_MEDIUM(USMC_ARC_1_Belt);
	USMC_VEST_MEDIUM(USMC_ARC_1_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_1_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_1_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_2);
	USMC_VEST_MEDIUM(USMC_ARC_2_NB);
	USMC_VEST_MEDIUM(USMC_ARC_2_Belt);
	USMC_VEST_MEDIUM(USMC_ARC_2_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_2_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_2_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_3);
	USMC_VEST_MEDIUM(USMC_ARC_3_NB);
	USMC_VEST_MEDIUM(USMC_ARC_3_Belt);
	USMC_VEST_MEDIUM(USMC_ARC_3_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_3_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_3_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_4);
	USMC_VEST_MEDIUM(USMC_ARC_4_NB);
	USMC_VEST_MEDIUM(USMC_ARC_4_Belt);
	USMC_VEST_MEDIUM(USMC_ARC_4_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_4_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_4_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_5);
	USMC_VEST_MEDIUM(USMC_ARC_5_NB);
	USMC_VEST_MEDIUM(USMC_ARC_5_Belt);
	USMC_VEST_MEDIUM(USMC_ARC_5_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_5_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_5_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_6);
	USMC_VEST_MEDIUM(USMC_ARC_6_NB);
	USMC_VEST_MEDIUM(USMC_ARC_6_Belt);
	USMC_VEST_MEDIUM(USMC_ARC_6_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_6_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_6_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_7);
	USMC_VEST_MEDIUM(USMC_ARC_7_NB);
	USMC_VEST_MEDIUM(USMC_ARC_7_Belt);
	USMC_VEST_MEDIUM(USMC_ARC_7_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_7_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_7_Belt_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_8);
	USMC_VEST_MEDIUM(USMC_ARC_8_NB);
	USMC_VEST_MEDIUM(USMC_ARC_8_Belt);
	USMC_VEST_MEDIUM(USMC_ARC_8_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_8_NB_ATAK);
	USMC_VEST_MEDIUM(USMC_ARC_8_Belt_ATAK);