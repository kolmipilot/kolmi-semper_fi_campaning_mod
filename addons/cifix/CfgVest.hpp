#define USMC_VEST_MEDIUM(VestClass,BaseClass) \
class VestClass: BaseClass { \
    class ItemInfo: VestItem { \
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
