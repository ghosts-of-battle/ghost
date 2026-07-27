class CfgGroups {
    class East {
        class ghost_o_tec_csat {
            name = "[Ghost] CSAT (Iran, Arid)";
            class TEC_Infantry {
                name = "Infantry";
                class TEC_InfSquad {
					faction = "ghost_o_tec_csat";
					name="Rifle Squad";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_SL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AR_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AR_F";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAR_F";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_LAT_F";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_F";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_F";
					};
				};
                class TEC_WeapSquad {
					faction = "ghost_o_tec_csat";
					name="Weapons Squad";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_SL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AR_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAR_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AT_F";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAT_F";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_F";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_A_F";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_F";
					};
				};
                class TEC_InfTeam {
					faction = "ghost_o_tec_csat";
					name="Fire Team";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AR_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_GL_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_LAT_F";
					};
				};
                class TEC_ATTeam {
					faction = "ghost_o_tec_csat";
					name="Anti-Armor Team";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AT_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AT_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAT_F";
					};
				};
                class TEC_AATeam {
					faction = "ghost_o_tec_csat";
					name="Anti-Air Team";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AA_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AA_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAA_F";
					};
				};
                class TEC_InfSentry {
					faction = "ghost_o_tec_csat";
					name="Sentry";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_GL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_F";
					};
				};
                class TEC_AssaultSquad {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Assault Squad";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_SL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AR_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_HG_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAR_F";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_M_F";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_SS_F";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_LAT_F";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_F";
					};
				};
            };
            class TEC_Infantry_SA {
                name = "Infantry (Semiarid)";
                class TEC_InfSquad_SA {
					faction = "ghost_o_tec_csat";
					name="Rifle Squad";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					scope=2;
					scopeCurator=2;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_SL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_TL_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AR_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AR_F";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AAR_F";
						scope=2;
						scopeCurator=2;
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_LAT_F";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_Semiarid_F";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_F";
					};
				};
                class TEC_WeapSquad_SA {
					faction = "ghost_o_tec_csat";
					name="Weapons Squad";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					scope=2;
					scopeCurator=2;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_SL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AR_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AAR_F";
						scope=2;
						scopeCurator=2;
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AT_F";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AAT_F";
						scope=2;
						scopeCurator=2;
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_F";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_A_F";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_Semiarid_F";
					};
				};
                class TEC_InfTeam_SA {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Fire Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AR_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_GL_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_LAT_F";
					};
				};
                class TEC_ATTeam_SA {
					faction = "ghost_o_tec_csat";
					name="Anti-Armor Team";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					scope=2;
					scopeCurator=2;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AT_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AT_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AAT_F";
						scope=2;
						scopeCurator=2;
					};
				};
                class TEC_AATeam_SA {
					faction = "ghost_o_tec_csat";
					name="Anti-Air Team";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					scope=2;
					scopeCurator=2;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AA_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AA_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AAA_F";
						scope=2;
						scopeCurator=2;
					};
				};
                class TEC_InfSentry_SA {
					faction = "ghost_o_tec_csat";
					name="Sentry";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_GL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_F";
					};
				};
                class TEC_AssaultSquad_SA {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Assault Squad";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_SL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AR_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_HG_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_AAR_F";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_M_F";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_SS_F";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Semiarid_LAT_F";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_Semiarid_F";
					};
				};
            };
            class TEC_Infantry_U {
                name = "Infantry (Urban)";
                class TEC_InfSquad_U {
					faction = "ghost_o_tec_csat";
					name="Rifle Squad";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					scope=2;
					scopeCurator=2;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_SL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_TL_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AR_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AR_F";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AAR_F";
						scope=2;
						scopeCurator=2;
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_LAT_F";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_Urban_F";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_F";
					};
				};
                class TEC_WeapSquad_U {
					faction = "ghost_o_tec_csat";
					name="Weapons Squad";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					scope=2;
					scopeCurator=2;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_SL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AR_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AAR_F";
						scope=2;
						scopeCurator=2;
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AT_F";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AAT_F";
						scope=2;
						scopeCurator=2;
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_F";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_A_F";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_Urban_F";
					};
				};
                class TEC_InfTeam_U {
					faction = "ghost_o_tec_csat";
					name="Fire Team";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AR_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_GL_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_LAT_F";
					};
				};
                class TEC_ATTeam_U {
					faction = "ghost_o_tec_csat";
					name="Anti-Armor Team";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					scope=2;
					scopeCurator=2;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AT_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AT_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AAT_F";
						scope=2;
						scopeCurator=2;
					};
				};
                class TEC_AATeam_U {
					faction = "ghost_o_tec_csat";
					name="Anti-Air Team";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					scope=2;
					scopeCurator=2;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AA_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AA_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AAA_F";
						scope=2;
						scopeCurator=2;
					};
				};
                class TEC_InfSentry_U {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Sentry";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_GL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_F";
					};
				};
                class TEC_AssaultSquad_U {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Assault Squad";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_SL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AR_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_HG_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_AAR_F";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_M_F";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_SS_F";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Urban_LAT_F";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_Urban_F";
					};
				};
            };
            class TEC_InfantryRecon {
                name = "Infantry (Recon)";
                class TEC_ReconTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name="Recon Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Recon_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="Corporal";
						side=0;
						vehicle="ghost_TEC_O_Recon_M_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Recon_Medic_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Recon_F";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Recon_LAT_F";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Recon_JTAC_F";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Recon_EXP_F";
					};
				};
                class TEC_ReconPatrol {
					faction = "ghost_o_tec_csat";
					name="Recon Patrol";
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Recon_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="Corporal";
						side=0;
						vehicle="ghost_TEC_O_Recon_M_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Recon_Medic_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Recon_F";
					};
				};
                class TEC_ReconSentry {
					faction = "ghost_o_tec_csat";
					name="Recon Sentry";
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Recon_M_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Recon_F";
					};
				};
                class TEC_ReconSquad {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name="Recon Squad";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Recon_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Recon_M_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Recon_Medic_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Recon_F";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Recon_LAT_F";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Recon_JTAC_F";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Recon_EXP_F";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Recon_PT_F";
					};
				};
            };
            class TEC_UAV {
                name = "UAV Operators";
                class TEC_MAVTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Quadcopter UAV Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_UAV_F";
					};
					class Unit2
					{
						position[]={0,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_UAV_01_F";
					};
				};
                class TEC_MAVTeam_AL6 {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Hexacopter UAV Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_UAV_AL6_F";
					};
					class Unit2
					{
						position[]={0,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_UAV_06_F";
					};
				};
                class TEC_MAVTeam_AL6_Medical {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Hexacopter UAV Team (Medical)";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_UAV_AL6_Medical_F";
					};
					class Unit2
					{
						position[]={0,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_UAV_06_Medical_F";
					};
				};
                class TEC_MAVTeam_AL6_EOD {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Hexacopter UAV Team (EOD)";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_UAV_AL6_Antimine_F";
					};
					class Unit2
					{
						position[]={0,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_UAV_06_Antimine_F";
					};
				};
                class TEC_UGVTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Recon UGV Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_UAV_F";
					};
					class Unit2
					{
						position[]={0,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_UGV_01_F";
					};
				};
                class TEC_UGVTeam_RCWS {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Attack UGV Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_UAV_F";
					};
					class Unit2
					{
						position[]={0,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_UGV_01_RCWS_F";
					};
				};
                class TEC_UAVTeam_Helo {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Helicopter UAV Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_UAV_F";
					};
					class Unit2
					{
						position[]={0,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_VH_UAV_03_F";
					};
				};
                class TEC_UAVTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Recon UAV Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_UAV_F";
					};
					class Unit2
					{
						position[]={0,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_VH_UAV_04_F";
					};
				};
                class TEC_UAVTeam_CAS {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Attack UAV Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_UAV_F";
					};
					class Unit2
					{
						position[]={0,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_UAV_02_F";
					};
				};
            };
            class TEC_Support {
                name = "Support Infantry";
                class TEC_CLSTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Support Team (CLS)";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AR_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_F";
					};
				};
                class TEC_EODTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Support Team (EOD)";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_EXP_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_EXP_F";
					};
				};
                class TEC_ENGTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Support Team (Engineer)";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Engineer_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Engineer_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Repair_F";
					};
				};
                class TEC_HMGTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="HMG Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Support_HMG_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Support_Asst_F";
					};
				};
                class TEC_GMGTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="GMG Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Support_GMG_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Support_Asst_F";
					};
				};
                class TEC_AHMGTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Autonomous HMG Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Support_AHMG_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Support_Asst_F";
					};
				};
                class TEC_AGMGTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Autonomous GMG Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Support_AGMG_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Support_Asst_F";
					};
				};
                class TEC_MortTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_mortar.paa";
					name="Mortar Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Support_Mortar_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Support_Mortar_Asst_F";
					};
				};
                class TEC_CBRNTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Support Team (CBRN)";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_CS_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Engineer_F";
					};
				};
                class TEC_EWTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Support Team (EW)";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_RTO_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_EW_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_UAV_F";
					};
				};
            };
            class TEC_Motorized {
                name = "Motorized Infantry";
                class TEC_MInfTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name="Motorized Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_MRAP_Shir_GMG";
					};
					class Unit1
					{
						position[]={-10,-10,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AR_F";
					};
					class Unit2
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AT_F";
					};
				};
                class TEC_MATTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name="Motorized Anti-Armor Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_MRAP_Abda";
					};
					class Unit1
					{
						position[]={-10,-10,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AT_F";
					};
					class Unit2
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AT_F";
					};
					class Unit3
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAT_F";
					};
				};
                class TEC_MMedTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name="Motorized Medical Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_MRAP_Abda_Ambulance";
					};
					class Unit1
					{
						position[]={-10,-10,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit2
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_F";
					};
					class Unit3
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_F";
					};
				};
                class TEC_MAATeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name="Motorized Anti-Air Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_MRAP_Abda";
					};
					class Unit1
					{
						position[]={-10,-10,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AA_F";
					};
					class Unit2
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AA_F";
					};
					class Unit3
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAA_F";
					};
				};
                class TEC_MHMGTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name="Motorized HMG Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_MRAP_Abda";
					};
					class Unit1
					{
						position[]={-10,-10,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit2
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Support_HMG_F";
					};
					class Unit3
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Support_Asst_F";
					};
				};
                class TEC_MGMGTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name="Motorized GMG Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_MRAP_Abda";
					};
					class Unit1
					{
						position[]={-10,-10,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit2
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Support_GMG_F";
					};
					class Unit3
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Support_Asst_F";
					};
				};
                class TEC_MAHMGTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name="Motorized Autonomous HMG Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_MRAP_Abda";
					};
					class Unit1
					{
						position[]={-10,-10,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit2
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Support_AHMG_F";
					};
					class Unit3
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Support_Asst_F";
					};
				};
                class TEC_MAGMGTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name="Motorized Autonomous GMG Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_MRAP_Abda";
					};
					class Unit1
					{
						position[]={-10,-10,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit2
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Support_AGMG_F";
					};
					class Unit3
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Support_Asst_F";
					};
				};
                class TEC_MMortTeam {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name="Motorized Mortar Team";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_MRAP_Abda";
					};
					class Unit1
					{
						position[]={-10,-10,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit2
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Support_Mortar_F";
					};
					class Unit3
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Support_Mortar_Asst_F";
					};
				};
                class TEC_MReinforcement {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name="Motorized Reinforcements";
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Truck_Tempest";
					};
					class Unit1
					{
						position[]={5,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_SL_F";
					};
					class Unit2
					{
						position[]={5,-2,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_F";
					};
					class Unit3
					{
						position[]={5,-4,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_LAT_F";
					};
					class Unit4
					{
						position[]={5,-6,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_M_F";
					};
					class Unit5
					{
						position[]={5,-8,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit6
					{
						position[]={5,-10,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AR_F";
					};
					class Unit7
					{
						position[]={-5,-8,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_A_F";
					};
					class Unit8
					{
						position[]={-5,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_F";
					};
					class Unit9
					{
						position[]={-5,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit10
					{
						position[]={-5,-2,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AR_F";
					};
					class Unit11
					{
						position[]={-5,-4,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_GL_F";
					};
					class Unit12
					{
						position[]={-5,-6,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_LAT_F";
					};
				};
                class TEC_MReconViperTeam {
					name="Motorized Viper Recon Team";
					side=0;
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="ghost_TEC_VH_LSV_Qilin_Viper";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="ghost_TEC_O_Viper_TL_F";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="ghost_TEC_O_Viper_JTAC_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="ghost_TEC_O_Viper_M_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=0;
						vehicle="ghost_TEC_O_Viper_EXP_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=0;
						vehicle="ghost_TEC_O_Viper_LAT_F";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=0;
						vehicle="ghost_TEC_O_Viper_Medic_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
				};
                class TEC_MAssaultViperTeam {
					name="Motorized Viper Assault Team";
					side=0;
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="ghost_TEC_VH_LSV_Qilin_Armed_Viper";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="ghost_TEC_O_Viper_TL_F";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="ghost_TEC_O_Viper_JTAC_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="ghost_TEC_O_Viper_M_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=0;
						vehicle="ghost_TEC_O_Viper_EXP_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=0;
						vehicle="ghost_TEC_O_Viper_LAT_F";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=0;
						vehicle="ghost_TEC_O_Viper_Medic_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
				};
            };
            class TEC_Mechanized {
                name = "Mechanized Infantry";
                class TEC_MEInfSquad {
					faction = "ghost_o_tec_csat";
					name="Mechanized Rifle Squad";
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_APC_Marid_F";
					};
					class Unit1
					{
						position[]={5,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_SL_F";
					};
					class Unit2
					{
						position[]={-5,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit3
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AR_F";
					};
					class Unit4
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AR_F";
					};
					class Unit5
					{
						position[]={5,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAR_F";
					};
					class Unit6
					{
						position[]={-5,-10,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_LAT_F";
					};
					class Unit7
					{
						position[]={0,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_F";
					};
					class Unit8
					{
						position[]={0,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_F";
					};
				};
                class TEC_MEATSquad {
					faction = "ghost_o_tec_csat";
					name="Mechanized Anti-Armor Squad";
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_APC_Kamysh_F";
					};
					class Unit1
					{
						position[]={5,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_SL_F";
					};
					class Unit2
					{
						position[]={-5,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AR_F";
					};
					class Unit3
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AT_F";
					};
					class Unit4
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AT_F";
					};
					class Unit5
					{
						position[]={5,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AT_F";
					};
					class Unit6
					{
						position[]={-5,-10,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAT_F";
					};
					class Unit7
					{
						position[]={0,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAT_F";
					};
					class Unit8
					{
						position[]={0,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAT_F";
					};
				};
                class TEC_MEAASquad {
					faction = "ghost_o_tec_csat";
					name="Mechanized Anti-Air Squad";
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_APC_Kamysh_F";
					};
					class Unit1
					{
						position[]={5,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_SL_F";
					};
					class Unit2
					{
						position[]={-5,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AR_F";
					};
					class Unit3
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AA_F";
					};
					class Unit4
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AA_F";
					};
					class Unit5
					{
						position[]={5,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AA_F";
					};
					class Unit6
					{
						position[]={-5,-10,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAA_F";
					};
					class Unit7
					{
						position[]={0,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAA_F";
					};
					class Unit8
					{
						position[]={0,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AAA_F";
					};
				};
                class TEC_MESupSquad {
					faction = "ghost_o_tec_csat";
					name="Mechanized Support Squad";
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_APC_Marid_F";
					};
					class Unit1
					{
						position[]={5,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_TL_F";
					};
					class Unit2
					{
						position[]={-5,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_Soldier_Repair_F";
					};
					class Unit3
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Engineer_F";
					};
					class Unit4
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_F";
					};
					class Unit5
					{
						position[]={5,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_AR_F";
					};
					class Unit6
					{
						position[]={-5,-10,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_EXP_F";
					};
					class Unit7
					{
						position[]={0,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_F";
					};
					class Unit8
					{
						position[]={0,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_A_F";
					};
				};
            };
            class TEC_Armor {
                name = "Armor";
                class TEC_TankPlatoon {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name="Tank Platoon";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_F";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_F";
					};
					class Unit2
					{
						position[]={20,-30,3};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_F";
					};
					class Unit3
					{
						position[]={40,-60,3};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_F";
					};
				};
                class TEC_TankPlatoonHeavy {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name="Tank Platoon (Heavy)";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Angara_Command";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Angara";
					};
					class Unit2
					{
						position[]={20,-30,3};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Angara";
					};
					class Unit3
					{
						position[]={40,-60,3};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Angara";
					};
				};
                class TEC_TankPlatoon_AA {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name="Tank Platoon (Combined)";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_F";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_F";
					};
					class Unit2
					{
						position[]={20,-30,3};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_F";
					};
					class Unit3
					{
						position[]={40,-60,3};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_F";
					};
				};
                class TEC_TankSection {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name="Tank Section";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_F";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_F";
					};
				};
                class TEC_TankSectionHeavy {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name="Tank Section (Heavy)";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Angara";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Angara";
					};
				};
            };
            class TEC_Artillery {
                name = "Artillery";
                class TEC_MLRSPlatoon {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_art.paa";
					name="Artillery MLRS Platoon";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Truck_Zamak_MLRS";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Truck_Zamak_MLRS";
					};
					class Unit2
					{
						position[]={20,-30,3};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Truck_Zamak_MLRS";
					};
					class Unit3
					{
						position[]={40,-60,3};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_VH_Truck_Zamak_MLRS";
					};
				};
                class TEC_MLRSSection {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_art.paa";
					name="Artillery MLRS Section";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Truck_Zamak_MLRS";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Truck_Zamak_MLRS";
					};
				};
                class TEC_SPGPlatoon {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_art.paa";
					name="Artillery SPG Platoon";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_SPG_F";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_SPG_F";
					};
					class Unit2
					{
						position[]={20,-30,3};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_SPG_F";
					};
					class Unit3
					{
						position[]={40,-60,3};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_SPG_F";
					};
				};
                class TEC_SPGSection {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_art.paa";
					name="Artillery SPG Section";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_SPG_F";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_VH_Tank_Varsuk_SPG_F";
					};
				};
            };
            class TEC_Helicopters {
                name = "Helicopters";
                class TEC_AttackTeam {
					faction = "ghost_o_tec_csat";
					name="Attack Team";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="CAPTAIN";
						side=0;
						vehicle="ghost_TEC_VH_Helicopter_Keftar_F";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Helicopter_Keftar_F";
					};
				};
                class TEC_HAttackTeam {
					faction = "ghost_o_tec_csat";
					name="Heavy Attack Team";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="CAPTAIN";
						side=0;
						vehicle="ghost_TEC_VH_Helicopter_Kajman_F";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Helicopter_Kajman_F";
					};
				};
                class TEC_HunterKillerTeam {
					faction = "ghost_o_tec_csat";
					name="Hunter Killer Team";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="CAPTAIN";
						side=0;
						vehicle="ghost_TEC_VH_Helicopter_Kajman_F";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Helicopter_Keftar_F";
					};
				};
                class TEC_MEDEVACTeam {
					faction = "ghost_o_tec_csat";
					name="MEDEVAC Team";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="CAPTAIN";
						side=0;
						vehicle="ghost_TEC_VH_Helicopter_Orca_MEDEVAC_F";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Helicopter_Keftar_F";
					};
				};
                class TEC_AASLTTeam {
					faction = "ghost_o_tec_csat";
					name="Air Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="CAPTAIN";
						side=0;
						vehicle="ghost_TEC_VH_Helicopter_Keftar_F";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Helicopter_Orca_F";
					};
					class Unit2
					{
						position[]={20,-30,3};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Helicopter_Orca_F";
					};
				};
                class TEC_HAASLTTeam {
					faction = "ghost_o_tec_csat";
					name="Heavy Air Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="CAPTAIN";
						side=0;
						vehicle="ghost_TEC_VH_Helicopter_Kajman_F";
					};
					class Unit1
					{
						position[]={-20,-30,3};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Helicopter_Taru_Transport_F";
					};
					class Unit2
					{
						position[]={20,-30,3};
						rank="LIEUTENANT";
						side=0;
						vehicle="ghost_TEC_VH_Helicopter_Taru_Transport_F";
					};
				};
            };
            class TEC_CBRN_Infantry {
                name = "Infantry (CBRN)";
                class TEC_CBRN_InfSquad {
					faction = "ghost_o_tec_csat";
					name="Rifle Squad";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_SL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_TL_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AR_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AR_F";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AAR_F";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_CBRN_LAT_F";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_CBRN_F";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_CBRN_F";
					};
				};
                class TEC_CBRN_WeapSquad {
					faction = "ghost_o_tec_csat";
					name="Weapons Squad";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_SL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AR_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AAR_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AT_F";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AAT_F";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_Soldier_CBRN_F";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_CBRN_A_F";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_CBRN_F";
					};
				};
                class TEC_CBRN_InfTeam {
					faction = "ghost_o_tec_csat";
					name="Fire Team";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AR_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_GL_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_CBRN_LAT_F";
					};
				};
                class TEC_CBRN_ATTeam {
					faction = "ghost_o_tec_csat";
					name="Anti-Armor Team";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AT_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AT_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AAT_F";
					};
				};
                class TEC_CBRN_AATeam {
					faction = "ghost_o_tec_csat";
					name="Anti-Air Team";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_TL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AA_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AA_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AAA_F";
					};
				};
                class TEC_CBRN_InfSentry {
					faction = "ghost_o_tec_csat";
					name="Sentry";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_GL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_CBRN_F";
					};
				};
                class TEC_CBRN_AssaultSquad {
					faction = "ghost_o_tec_csat";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name="Assault Squad";
					side=0;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_SL_F";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AR_F";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_HG_F";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_AAR_F";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_M_F";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=0;
						vehicle="ghost_TEC_O_soldier_CBRN_SS_F";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Soldier_CBRN_LAT_F";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="ghost_TEC_O_Medic_CBRN_F";
					};
				};
            };
        };
    };
};
