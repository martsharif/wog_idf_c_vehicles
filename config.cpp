////////////////////////////////////////////////////////////////////
//DeRap: wog_idf_c_vehicles\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Sun Sep 18 16:34:30 2022 : 'file' last modified on Sun Jul 10 18:03:32 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class wog_idf_c_vehicles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Armor_F_Beta_APC_Tracked_01","A3_Data_F","A3_Weapons_F","A3_Armor_F_Gamma_MBT_01","A3_Armor_F_EPC_MBT_01","bwa3_weapons","rhsusf_c_heavyweapons","ace_realisticnames","UK3CB_Factions_Vehicles_Tseries"};
		magazines[] = {};
		ammo[] = {};
	};
};
class cfgMagazines
{
	class rhs_mag_1100Rnd_762x51_M240;
	class wog_idf_mag_1000Rnd_762x51_M240: rhs_mag_1100Rnd_762x51_M240
	{
		count = 1000;
	};
	class BWA3_1Rnd_LAHAT;
	class BWA3_max_LAHAT: BWA3_1Rnd_LAHAT
	{
		count = 48;
	};
	class rhs_mag_M829A4_max;
	class idf_rhs_mag_M829A4_max: rhs_mag_M829A4_max
	{
		count = 48;
	};
	class rhs_mag_M829A3_max;
	class idf_rhs_mag_M829A3_max: rhs_mag_M829A3_max
	{
		count = 48;
	};
	class rhs_mag_M829A2_max;
	class idf_rhs_mag_M829A2_max: rhs_mag_M829A2_max
	{
		count = 48;
	};
	class rhs_mag_M829A1_max;
	class idf_rhs_mag_M829A1_max: rhs_mag_M829A1_max
	{
		count = 48;
	};
	class rhs_mag_M829_max;
	class idf_rhs_mag_M829_max: rhs_mag_M829_max
	{
		count = 48;
	};
	class rhs_mag_M830_max;
	class idf_rhs_mag_M830_max: rhs_mag_M830_max
	{
		count = 48;
	};
	class rhs_mag_M830A1_max;
	class idf_rhs_mag_M830A1_max: rhs_mag_M830A1_max
	{
		count = 48;
	};
	class rhs_mag_M1069_max;
	class idf_rhs_mag_M1069_max: rhs_mag_M1069_max
	{
		count = 48;
	};
	class rhs_mag_M1147_max;
	class idf_rhs_mag_M1147_max: rhs_mag_M1147_max
	{
		count = 48;
	};
	class rhs_mag_M1028_max;
	class idf_rhs_mag_M1028_max: rhs_mag_M1028_max
	{
		count = 48;
	};
	class idf_rhs_mag_M829A4: idf_rhs_mag_M829A4_max
	{
		count = 30;
	};
	class idf_rhs_mag_M830A1: idf_rhs_mag_M830A1_max
	{
		count = 10;
	};
	class BWA3_idf_LAHAT: BWA3_max_LAHAT
	{
		count = 4;
	};
	class UK3CB_20_HE;
	class UK3CB_20_SABOT;
	class UK3CB_20_HEAT;
	class idf_UK3CB_14_HE: UK3CB_20_HE
	{
		count = 14;
		displayNameShort = "HE";
	};
	class idf_UK3CB_14_SABOT: UK3CB_20_SABOT
	{
		count = 14;
		displayNameShort = "SABOT";
	};
	class idf_UK3CB_17_HEAT: UK3CB_20_HEAT
	{
		count = 17;
		displayNameShort = "HEAT";
	};
};
class cfgWeapons
{
	class CannonCore;
	class cannon_120mm: CannonCore
	{
		class player;
		class close;
		class short;
		class medium;
		class far;
		class TopDown;
	};
	class cannon_mg253: cannon_120mm
	{
		displayName = "MG253";
		magazines[] = {"idf_rhs_mag_M829A4","idf_rhs_mag_M830A1","BWA3_idf_LAHAT","rhs_mag_M829A4","rhs_mag_M829A3","rhs_mag_M829A2","rhs_mag_M829A1","rhs_mag_M829","rhs_mag_M830","rhs_mag_M830A1","rhs_mag_M1069","rhs_mag_M1147","rhs_mag_M1028","rhs_mag_M416","idf_rhs_mag_M829A4_max","idf_rhs_mag_M829A3_max","idf_rhs_mag_M829A2_max","idf_rhs_mag_M829A1_max","idf_rhs_mag_M829_max","idf_rhs_mag_M830_max","idf_rhs_mag_M830A1_max","idf_rhs_mag_M1069_max","idf_rhs_mag_M1147_max","idf_rhs_mag_M1028_max","BWA3_max_LAHAT"};
		class player: player
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_120mm_Shot_SoundSet","RHSUSF_120mm_Int_Shot_SoundSet","RHSUSF_cannon_Tail_SoundSet"};
			};
		};
		class close: close
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_120mm_Shot_SoundSet","RHSUSF_120mm_Int_Shot_SoundSet","RHSUSF_cannon_Tail_SoundSet"};
			};
		};
		class short: short
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_120mm_Shot_SoundSet","RHSUSF_120mm_Int_Shot_SoundSet","RHSUSF_cannon_Tail_SoundSet"};
			};
		};
		class medium: medium
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_120mm_Shot_SoundSet","RHSUSF_120mm_Int_Shot_SoundSet","RHSUSF_cannon_Tail_SoundSet"};
			};
		};
		class far: far
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_120mm_Shot_SoundSet","RHSUSF_120mm_Int_Shot_SoundSet","RHSUSF_cannon_Tail_SoundSet"};
			};
		};
		class TopDown: TopDown
		{
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",3.16228,1,1500};
				soundBegin[] = {"begin1",1};
				SoundSetShot[] = {"Cannon120mm_Shot_SoundSet","Cannon120mm_Tail_SoundSet"};
			};
		};
	};
	class LMG_coax;
	class ACE_LMG_coax_MAG58_mem3: LMG_coax
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class rhs_weap_m240_merkava_coax: ACE_LMG_coax_MAG58_mem3
	{
		magazines[] = {"wog_idf_mag_1000Rnd_762x51_M240"};
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_veh_M240_Shot_SoundSet","RHSUSF_veh_M240_int_Shot_SoundSet","RHSUSF_VEH_MMG1_Tail_SoundSet"};
			};
		};
		class close: close
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_veh_M240_Shot_SoundSet","RHSUSF_veh_M240_int_Shot_SoundSet","RHSUSF_VEH_MMG1_Tail_SoundSet"};
			};
		};
		class short: short
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_veh_M240_Shot_SoundSet","RHSUSF_veh_M240_int_Shot_SoundSet","RHSUSF_VEH_MMG1_Tail_SoundSet"};
			};
		};
		class medium: medium
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_veh_M240_Shot_SoundSet","RHSUSF_veh_M240_int_Shot_SoundSet","RHSUSF_VEH_MMG1_Tail_SoundSet"};
			};
		};
		class far: far
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_veh_M240_Shot_SoundSet","RHSUSF_veh_M240_int_Shot_SoundSet","RHSUSF_VEH_MMG1_Tail_SoundSet"};
			};
		};
	};
	class LMG_RCWS;
	class HMG_127: LMG_RCWS
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class HMG_127_APC: HMG_127
	{
		magazineReloadTime = 5;
		magazines[] = {"rhs_mag_100rnd_127x99_mag","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Green","rhs_mag_100rnd_127x99_mag_Tracer_Yellow","rhs_mag_100rnd_127x99_SLAP_mag","rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red","rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green","rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow","rhs_mag_200rnd_127x99_mag","rhs_mag_200rnd_127x99_mag_Tracer_Red","rhs_mag_200rnd_127x99_SLAP_mag","rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red","rhs_mag_400rnd_127x99_mag","rhs_mag_400rnd_127x99_mag_Tracer_Red","rhs_mag_400rnd_127x99_SLAP_mag","rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red","500Rnd_127x99_mag","500Rnd_127x99_mag_Tracer_Red","500Rnd_127x99_mag_Tracer_Green","500Rnd_127x99_mag_Tracer_Yellow","200Rnd_127x99_mag","200Rnd_127x99_mag_Tracer_Red","200Rnd_127x99_mag_Tracer_Green","200Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Green","100Rnd_127x99_mag_Tracer_Yellow"};
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet","RHSUSF_veh_m2_int_Shot_SoundSet","RHSUSF_veh_rifle2_Tail_SoundSet"};
			};
		};
		class close: close
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet","RHSUSF_veh_m2_int_Shot_SoundSet","RHSUSF_veh_rifle2_Tail_SoundSet"};
			};
		};
		class short: short
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet","RHSUSF_veh_m2_int_Shot_SoundSet","RHSUSF_veh_rifle2_Tail_SoundSet"};
			};
		};
		class medium: medium
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet","RHSUSF_veh_m2_int_Shot_SoundSet","RHSUSF_veh_rifle2_Tail_SoundSet"};
			};
		};
		class far: far
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet","RHSUSF_veh_m2_int_Shot_SoundSet","RHSUSF_veh_rifle2_Tail_SoundSet"};
			};
		};
	};
	class GMG_F;
	class GMG_40mm: GMG_F
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class WOG_IDF_RHS_MK19_CROWS_M153: GMG_40mm
	{
		magazineReloadTime = 5;
		magazines[] = {"RHS_48Rnd_40mm_MK19","RHS_48Rnd_40mm_MK19_M430I","RHS_48Rnd_40mm_MK19_M430A1","RHS_48Rnd_40mm_MK19_M1001","RHS_96Rnd_40mm_MK19","RHS_96Rnd_40mm_MK19_M430I","RHS_96Rnd_40mm_MK19_M430A1","RHS_96Rnd_40mm_MK19_M1001"};
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_mk19_Shot_SoundSet","RHSUSF_lmg1_Tail_SoundSet"};
				begin1[] = {"A3\Sounds_F\weapons\GMG\GMG_1",1.12202,1,600};
				begin2[] = {"A3\Sounds_F\weapons\GMG\GMG_2",1.12202,1,600};
				begin3[] = {"A3\Sounds_F\weapons\GMG\GMG_3",1.12202,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class close: close
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_mk19_Shot_SoundSet","RHSUSF_lmg1_Tail_SoundSet"};
				begin1[] = {"A3\Sounds_F\weapons\GMG\GMG_1",1.12202,1,600};
				begin2[] = {"A3\Sounds_F\weapons\GMG\GMG_2",1.12202,1,600};
				begin3[] = {"A3\Sounds_F\weapons\GMG\GMG_3",1.12202,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class short: short
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_mk19_Shot_SoundSet","RHSUSF_lmg1_Tail_SoundSet"};
				begin1[] = {"A3\Sounds_F\weapons\GMG\GMG_1",1.12202,1,600};
				begin2[] = {"A3\Sounds_F\weapons\GMG\GMG_2",1.12202,1,600};
				begin3[] = {"A3\Sounds_F\weapons\GMG\GMG_3",1.12202,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class medium: medium
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_mk19_Shot_SoundSet","RHSUSF_lmg1_Tail_SoundSet"};
				begin1[] = {"A3\Sounds_F\weapons\GMG\GMG_1",1.12202,1,600};
				begin2[] = {"A3\Sounds_F\weapons\GMG\GMG_2",1.12202,1,600};
				begin3[] = {"A3\Sounds_F\weapons\GMG\GMG_3",1.12202,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class far: far
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_mk19_Shot_SoundSet","RHSUSF_lmg1_Tail_SoundSet"};
				begin1[] = {"A3\Sounds_F\weapons\GMG\GMG_1",1.12202,1,600};
				begin2[] = {"A3\Sounds_F\weapons\GMG\GMG_2",1.12202,1,600};
				begin3[] = {"A3\Sounds_F\weapons\GMG\GMG_3",1.12202,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
	};
	class UK3CB_105mm_M68E1a;
	class idf_UK3CB_105mm_M68E1a: UK3CB_105mm_M68E1a
	{
		magazines[] = {"UK3CB_20_SABOT","UK3CB_20_HE","UK3CB_20_HEAT","idf_UK3CB_14_HE","idf_UK3CB_14_SABOT","idf_UK3CB_17_HEAT"};
	};
};
class RCWSOptics;
class DefaultEventHandlers;
class cfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
		class ACE_Actions
		{
			class ACE_MainActions;
		};
		class ACE_SelfActions;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class Reflectors;
		class Components;
		class Wheels;
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions{};
		};
		class ACE_SelfActions: ACE_SelfActions{};
	};
	class MBT_01_base_F: Tank_F
	{
		class EventHandlers;
	};
	class MBT_02_base_F: Tank_F
	{
		class MFD
		{
			class MFD_Gunner_Main_Armament_Ammo_Type
			{
				class Draw
				{
					class Main_Armament_Ammo_Type_1;
				};
			};
		};
		class Reflectors: Reflectors
		{
			class Left;
		};
		class Wheels: Wheels
		{
			class L2;
		};
		class EventHandlers;
		class ViewPilot;
		class ViewOptics;
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions{};
		};
		class ACE_SelfActions: ACE_SelfActions{};
		class Components: Components{};
	};
	class B_MBT_01_base_F: MBT_01_base_F{};
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		armor = 500;
		armorStructural = 4.5;
		minTotalDamageThreshold = 0.5;
		weapons[] = {"rhs_weap_smokegen"};
		magazines[] = {"rhs_mag_smokegen"};
		hullExplosionDelay[] = {1,4};
		driverOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType";
		memoryPointDriverOptics = "driverview_old";
		redRpm = 3500;
		class EventHandlers: DefaultEventHandlers
		{
			class RHS_EventHandlers
			{
				engine = "[_this select 0,_this select 1,2.7] call rhs_fnc_engineStartupDelay";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = {"BWA3_SmokeLauncher"};
						magazines[] = {"BWA3_SmokeLauncherMag"};
						class HitPoints
						{
							class HitComTurret
							{
								armor = 0.1;
								material = -1;
								armorComponent = "";
								name = "hit_com_turret_point";
								visual = "-";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.15;
								isTurret = 1;
							};
							class HitComGun
							{
								armor = 0.1;
								material = -1;
								armorComponent = "";
								name = "hit_com_gun_point";
								visual = "-";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.15;
								isGun = 1;
							};
						};
					};
				};
				weapons[] = {"cannon_mg253","rhs_weap_m240_merkava_coax"};
				magazines[] = {"wog_idf_mag_1000Rnd_762x51_M240","wog_idf_mag_1000Rnd_762x51_M240","wog_idf_mag_1000Rnd_762x51_M240","wog_idf_mag_1000Rnd_762x51_M240","wog_idf_mag_1000Rnd_762x51_M240","wog_idf_mag_1000Rnd_762x51_M240","wog_idf_mag_1000Rnd_762x51_M240","wog_idf_mag_1000Rnd_762x51_M240","wog_idf_mag_1000Rnd_762x51_M240","wog_idf_mag_1000Rnd_762x51_M240","idf_rhs_mag_M829A4","idf_rhs_mag_M830A1","BWA3_idf_LAHAT"};
				startEngine = 0;
				turretInfoType = "RscOptics_MBT_01_gunner";
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.7;
						material = -1;
						armorComponent = "";
						name = "hit_main_turret_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.25;
						explosionShielding = 0.8;
						radius = 0.2;
						isTurret = 1;
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						armorComponent = "";
						name = "hit_main_gun_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.25;
						explosionShielding = 0.9;
						radius = 0.2;
						isGun = 1;
					};
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 0.95;
				material = -1;
				armorComponent = "";
				name = "hit_hull_point";
				visual = "zbytek";
				passThrough = 0.1;
				minimalHit = 0.35;
				explosionShielding = 1;
				radius = 0.3;
			};
			class HitEngine: HitEngine
			{
				armor = 0.5;
				material = -1;
				armorComponent = "";
				name = "hit_engine_point";
				visual = "-";
				passThrough = 0.3;
				minimalHit = 0.3;
				explosionShielding = 0.2;
				radius = 0.35;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = "SmallWreckSmoke";
						position = "exhaust";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type = "SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type = "RHS_FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type = "WeaponWreckSmoke";
						position = "engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke3";
					};
					class RHS_Engine_Smoke_small3: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke4";
					};
				};
			};
			class HitFuel: HitFuel
			{
				armor = 1;
				material = -1;
				armorComponent = "";
				name = "hit_fuel_point";
				visual = "-";
				passThrough = 0.2;
				minimalHit = 0.35;
				explosionShielding = 0.7;
				radius = 0.3;
			};
			class HitLTrack: HitLTrack
			{
				material = -1;
				armorComponent = "hit_trackL";
				name = "hit_trackL_point";
				visual = "-";
				radius = 0.2;
				armor = -150;
				minimalHit = 0.25;
				explosionShielding = 0.5;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack
			{
				material = -1;
				armorComponent = "hit_trackR";
				name = "hit_trackR_point";
				visual = "-";
				radius = 0.2;
				armor = -150;
				minimalHit = 0.25;
				explosionShielding = 0.5;
				passThrough = 0;
			};
		};
		class DriverOpticsIn
		{
			class Wide
			{
				camPos = "view_driver";
				opticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType";
				visionMode[] = {"Normal"};
				thermalMode[] = {2,3};
				initFov = 0.7;
				minFov = 0.7;
				maxFov = 0.7;
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
				speedZoomMaxSpeed = 1e+10;
				speedZoomMaxFOV = 0;
			};
			class DVE_Wide
			{
				opticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
				visionMode[] = {"Normal","NVG"};
				initFov = 1.07692;
				minFov = 1.07692;
				maxFov = 1.07692;
				camPos = "view_driver";
				thermalMode[] = {2,3};
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
				speedZoomMaxSpeed = 1e+10;
				speedZoomMaxFOV = 0;
			};
			class DVS_Rear
			{
				opticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE2_4x3";
				camPos = "pip0_pos";
				camDir = "pip0_dir";
				visionMode[] = {"Normal","NVG"};
				initFov = 1.07692;
				minFov = 1.07692;
				maxFov = 1.07692;
				thermalMode[] = {2,3};
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
				speedZoomMaxSpeed = 1e+10;
				speedZoomMaxFOV = 0;
			};
		};
		class Attributes
		{
			class rhs_ammoslot_1_type
			{
				displayName = "Ammo slot #1 type";
				tooltip = "Define type of shell for #1 slot [AP rounds]";
				property = "rhs_ammoslot_1_type";
				control = "Combo";
				expression = "_this setVariable ['%s', _value];";
				defaultValue = 0;
				typeName = "STRING";
				class values
				{
					class rhs_mag_M829A4
					{
						name = "M829A4 APFSDS-T";
						value = "idf_rhs_mag_M829A4_max";
						defaultValue = "idf_rhs_mag_M829A4_max";
					};
					class rhs_mag_M829A3
					{
						name = "M829A3 APFSDS-T";
						value = "rhs_mag_M829A3";
						defaultValue = "idf_rhs_mag_M829A3_max";
					};
					class rhs_mag_M829A2
					{
						name = "M829A2 APFSDS-T";
						value = "idf_rhs_mag_M829A2_max";
						defaultValue = "idf_rhs_mag_M829A2_max";
					};
					class rhs_mag_M829A1
					{
						name = "M829A1 APFSDS-T";
						value = "idf_rhs_mag_M829A1_max";
						defaultValue = "idf_rhs_mag_M829A1_max";
					};
					class rhs_mag_M829
					{
						name = "M829 APFSDS-T";
						value = "idf_rhs_mag_M829_max";
						defaultvalue = "idf_rhs_mag_M829_max";
					};
				};
			};
			class rhs_ammoslot_1
			{
				displayName = "Ammo slot #1 count";
				tooltip = "Define number of rounds stored inside of type #1. Max 48. Leave -1 for default loadout.";
				property = "rhs_ammoslot_1";
				control = "Edit";
				expression = "if(_value >= 0)then{[_this,_value,'%s',48] spawn wog_fnc_merkava_defineLoadout};";
				defaultValue = "-1";
				validate = "NUMBER";
				typeName = "NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type
			{
				displayName = "Ammo slot #2 type";
				tooltip = "Define type of shell for #2 slot [HEAT rounds]";
				property = "rhs_ammoslot_2_type";
				class values
				{
					class rhs_mag_M830A1
					{
						name = "M830A1 MPAT";
						value = "idf_rhs_mag_M830A1_max";
						defaultvalue = "idf_rhs_mag_M830A1_max";
					};
					class rhs_mag_M830
					{
						name = "M830 HEAT-FS";
						value = "idf_rhs_mag_M830_max";
						defaultvalue = "idf_rhs_mag_M830_max";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_1
			{
				displayName = "Ammo slot #2 count";
				property = "rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type
			{
				displayName = "Ammo slot #3 type";
				tooltip = "Define type of shell for #3 slot";
				property = "rhs_ammoslot_3_type";
				class values
				{
					class rhs_mag_M1028
					{
						name = "M1028 Canister";
						value = "idf_rhs_mag_M1028_max";
						defaultvalue = "idf_rhs_mag_M1028_max";
					};
					class rhs_mag_M1147
					{
						name = "M1147 HE-FRAG";
						value = "idf_rhs_mag_M1147_max";
						defaultvalue = "idf_rhs_mag_M1147_max";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1
			{
				displayName = "Ammo slot #3 count";
				property = "rhs_ammoslot_3";
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_1_type
			{
				displayName = "Ammo slot #4 type";
				tooltip = "Define type of shell for #4 slot [ATGM]";
				property = "rhs_ammoslot_4_type";
				class values
				{
					class BWA3_mag_LAHAT
					{
						name = "LAHAT ATGM";
						value = "BWA3_max_LAHAT";
						defaultvalue = "BWA3_max_LAHAT";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_1
			{
				displayName = "Ammo slot #4 count";
				property = "rhs_ammoslot_4";
			};
		};
		soundengineonint[] = {"\wog_idf_c_vehicles\sounds\land_vehicles\engines\mbt_01\mbt_01_start_int.ogg",0.5,1};
		soundengineonext[] = {"\wog_idf_c_vehicles\sounds\land_vehicles\engines\mbt_01\mbt_01_start_ext.ogg",0.5,1,125};
		soundengineoffint[] = {"\wog_idf_c_vehicles\sounds\land_vehicles\engines\mbt_01\mbt_01_shut_int.ogg",0.5,1};
		soundengineoffext[] = {"\wog_idf_c_vehicles\sounds\land_vehicles\engines\mbt_01\mbt_01_shut_ext.ogg",0.5,1,100};
		class sounds
		{
			soundsetsint[] = {"jsrs_mbt_01_idle_interior_soundset","jsrs_mbt_01_low_interior_soundset","jsrs_mbt_01_high_interior_soundset","jsrs_mbt_01_start_interior_soundset","jsrs_tracked_rolling_int_soundset","jsrs_tracked_offroad_rolling_int_soundset","jsrs_vehicle_interior_silent_soundset","jsrs_heavy_vehicle_rain_int_soundset","jsrs_tracked_rattle_int_soundset","jsrs_tracks_slow_int_soundset","jsrs_tracks_fast_int_soundset","jsrs_tracks_grass_int_soundset","jsrs_tracks_dirt_int_soundset","jsrs_gear_interior_04_soundset","jsrs_heavy_vehicle_water_moving_ext_soundset"};
			soundsetsext[] = {"jsrs_mbt_01_idle_exterior_soundset","jsrs_mbt_01_low_exterior_soundset","jsrs_mbt_01_high_exterior_soundset","jsrs_mbt_01_start_exterior_soundset","jsrs_mbt_01_distance_soundset","jsrs_heavy_vehicle_rain_ext_soundset","jsrs_tracked_rattle_ext_soundset","jsrs_tracks_slow_ext_soundset","jsrs_tracks_fast_ext_soundset","jsrs_tracks_grass_ext_soundset","jsrs_tracks_dirt_ext_soundset","jsrs_gear_exterior_04_soundset","jsrs_heavy_vehicle_water_moving_ext_soundset"};
		};
	};
	class APC_Tracked_01_base_F: Tank_F {};
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F
	{
		armor = 500;
		armorStructural = 4.5;
		weapons[] = {"rhs_weap_smokegen"};
		magazines[] = {"rhs_mag_smokegen"};
		hullExplosionDelay[] = {2,6};
		driverOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType";
		memoryPointDriverOptics = "driverview_old";
		redRPM = 2640;
		class EventHandlers: DefaultEventHandlers
		{
			class RHS_EventHandlers
			{
				engine = "[_this select 0,_this select 1,2.7] call rhs_fnc_engineStartupDelay";
			};
		};
		class DriverOpticsIn
		{
			class Wide
			{
				camPos = "view_driver";
				opticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType";
				visionMode[] = {"Normal"};
				thermalMode[] = {2,3};
				initFov = 0.7;
				minFov = 0.7;
				maxFov = 0.7;
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
				speedZoomMaxSpeed = 1e+10;
				speedZoomMaxFOV = 0;
			};
			class DVE_Wide
			{
				opticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
				visionMode[] = {"Normal","NVG"};
				initFov = 1.07692;
				minFov = 1.07692;
				maxFov = 1.07692;
				camPos = "view_driver";
				thermalMode[] = {2,3};
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
				speedZoomMaxSpeed = 1e+10;
				speedZoomMaxFOV = 0;
			};
			class DVS_Rear
			{
				opticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE2_4x3";
				camPos = "pip0_pos";
				camDir = "pip0_dir";
				visionMode[] = {"Normal","NVG"};
				initFov = 1.07692;
				minFov = 1.07692;
				maxFov = 1.07692;
				thermalMode[] = {2,3};
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
				speedZoomMaxSpeed = 1e+10;
				speedZoomMaxFOV = 0;
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 1;
				material = -1;
				armorComponent = "";
				name = "hit_hull_point";
				visual = "zbytek";
				passThrough = 0.1;
				minimalHit = 0.35;
				explosionShielding = 1;
				radius = 0.3;
			};
			class HitEngine: HitEngine
			{
				armor = 0.5;
				material = -1;
				armorComponent = "";
				name = "hit_engine_point";
				visual = "-";
				passThrough = 0.3;
				minimalHit = 0.3;
				explosionShielding = 0.2;
				radius = 0.35;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = "SmallWreckSmoke";
						position = "exhaust";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type = "SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type = "RHS_FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type = "WeaponWreckSmoke";
						position = "engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke3";
					};
					class RHS_Engine_Smoke_small3: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke4";
					};
				};
			};
			class HitFuel: HitFuel
			{
				armor = 1;
				material = -1;
				armorComponent = "";
				name = "hit_fuel_point";
				visual = "-";
				passThrough = 0.2;
				minimalHit = 0.35;
				explosionShielding = 0.7;
				radius = 0.3;
			};
			class HitLTrack: HitLTrack
			{
				material = -1;
				armorComponent = "hit_trackL";
				name = "hit_trackL_point";
				visual = "-";
				radius = 0.2;
				armor = -150;
				minimalHit = 0.25;
				explosionShielding = 0.5;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack
			{
				material = -1;
				armorComponent = "hit_trackR";
				name = "hit_trackR_point";
				visual = "-";
				radius = 0.2;
				armor = -150;
				minimalHit = 0.25;
				explosionShielding = 0.5;
				passThrough = 0;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets{};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscOptics_crows";
				class ViewOptics: RCWSOptics
				{
					visionMode[] = {"Normal","NVG","TI"};
				};
				class OpticsIn
				{
					class zoom1: ViewOptics
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov = 0.162791;
						minFov = 0.162791;
						maxFov = 0.162791;
						visionMode[] = {"Normal","NVG","TI"};
					};
					class zoom2: zoom1
					{
						initFov = 0.0875;
						minFov = 0.0875;
						maxFov = 0.0875;
					};
					class zoom3: zoom1
					{
						initFov = 0.0583333;
						minFov = 0.0583333;
						maxFov = 0.0583333;
					};
					class zoom4: zoom1
					{
						initFov = 0.0291667;
						minFov = 0.0291667;
						maxFov = 0.0291667;
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = -260;
						material = -1;
						armorComponent = "hit_main_turret";
						name = "hit_main_turret_point";
						visual = "otocvez";
						passThrough = 0;
						minimalHit = 0.03;
						explosionShielding = 0.4;
						radius = 0.25;
						isTurret = 1;
					};
					class HitGun
					{
						armor = -260;
						material = -1;
						armorComponent = "hit_main_gun";
						name = "hit_main_gun_point";
						visual = "otochlaven";
						passThrough = 0;
						minimalHit = 0.03;
						explosionShielding = 0.2;
						radius = 0.2;
						isGun = 1;
					};
				};
			};
			class CommanderOptics: CommanderOptics
			{
				weapons[] = {};
				magazines[] = {};
				class HitPoints
				{
					class HitComTurret
					{
						armor = 0.1;
						material = -1;
						armorComponent = "hit_com_turret";
						name = "hit_com_turret_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.15;
						isTurret = 1;
					};
					class HitComGun
					{
						armor = 0.1;
						material = -1;
						armorComponent = "hit_com_gun";
						name = "hit_com_gun_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.15;
						isGun = 1;
					};
				};
			};
		};
		soundengineonint[] = {"\wog_idf_c_vehicles\sounds\land_vehicles\engines\tracked_apc_01\tracked_apc_01_start_int.ogg",0.5,1};
		soundengineonext[] = {"\wog_idf_c_vehicles\sounds\land_vehicles\engines\tracked_apc_01\tracked_apc_01_start_ext.ogg",0.5,1,125};
		soundengineoffint[] = {"\wog_idf_c_vehicles\sounds\land_vehicles\engines\tracked_apc_01\tracked_apc_01_shut_int.ogg",0.5,1};
		soundengineoffext[] = {"\wog_idf_c_vehicles\sounds\land_vehicles\engines\tracked_apc_01\tracked_apc_01_shut_ext.ogg",0.5,1,100};
		class sounds
		{
			soundsetsint[] = {"jsrs_tracked_apc_01_idle_interior_soundset","jsrs_tracked_apc_01_low_interior_soundset","jsrs_tracked_apc_01_high_interior_soundset","jsrs_tracked_apc_01_start_interior_soundset","jsrs_tracked_rolling_int_soundset","jsrs_tracked_offroad_rolling_int_soundset","jsrs_vehicle_interior_silent_soundset","jsrs_heavy_vehicle_rain_int_soundset","jsrs_tracked_rattle_int_soundset","jsrs_light_tracks_slow_int_soundset","jsrs_light_tracks_fast_int_soundset","jsrs_light_tracks_grass_int_soundset","jsrs_light_tracks_dirt_int_soundset","jsrs_gear_interior_01_soundset","jsrs_heavy_vehicle_water_moving_ext_soundset"};
			soundsetsext[] = {"jsrs_tracked_apc_01_idle_exterior_soundset","jsrs_tracked_apc_01_low_exterior_soundset","jsrs_tracked_apc_01_high_exterior_soundset","jsrs_tracked_apc_01_start_exterior_soundset","jsrs_tracked_apc_01_distance_soundset","jsrs_heavy_vehicle_rain_ext_soundset","jsrs_tracked_rattle_ext_soundset","jsrs_light_tracks_slow_ext_soundset","jsrs_light_tracks_fast_ext_soundset","jsrs_light_tracks_grass_ext_soundset","jsrs_light_tracks_dirt_ext_soundset","jsrs_gear_exterior_01_soundset","jsrs_heavy_vehicle_water_moving_ext_soundset"};
		};
	};

	class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"HMG_127_APC","WOG_IDF_RHS_MK19_CROWS_M153","BWA3_SmokeLauncher"};
				magazines[] = {"BWA3_SmokeLauncherMag"};
			};
			class CommanderOptics: CommanderOptics{};
		};
		class TransportMagazines
		{
			class _xx_ace_csw_rhs_mag_100rnd_127x99_mag_Tracer_Red
			{
				magazine = "ace_csw_rhs_mag_100rnd_127x99_mag_Tracer_Red";
				count = 5;
			};
			class _xx_ace_csw_RHS_48Rnd_40mm_MK19
			{
				magazine = "ace_csw_RHS_48Rnd_40mm_MK19";
				count = 5;
			};
		};
	};
	class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscOptics_crows";
				weapons[] = {"HMG_127_APC","BWA3_SmokeLauncher"};
				magazines[] = {"BWA3_SmokeLauncherMag"};
				selectionFireAnim = "zasleh";
			};
			class CommanderOptics: CommanderOptics{};
		};
		class TransportMagazines
		{
			class _xx_ace_csw_rhs_mag_100rnd_127x99_mag_Tracer_Red
			{
				magazine = "ace_csw_rhs_mag_100rnd_127x99_mag_Tracer_Red";
				count = 5;
			};
		};
	};
	class UK3CB_T55: MBT_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
	};
	class idf_tiran5sh_base: UK3CB_T55
	{
		displayName = "Tiran 5Sh";
		side = 1;
		crew = "B_soldier_F";
		scope = 0;
		cargoProxyIndexes[] = {};
		getInProxyOrder[] = {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscOptics_M60A3";
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.155;
						minFov = 0.155;
						maxFov = 0.155;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M60\uk3cb_gunneroptics_m1a1.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Narrow
					{
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1_2";
						initFov = "0.7/8";
						minFov = "0.7/8";
						maxFov = "0.7/8";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsEffect[] = {};
					};
				};
				ace_fcs_enabled = 1;
				ace_fcs_minDistance = 300;
				ace_fcs_maxDistance = 4000;
				ace_fcs_distanceInterval = 10;
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				weapons[] = {"idf_UK3CB_105mm_M68E1a","wog_weap_m240_mgs_coax"};
				magazines[] = {"idf_UK3CB_14_SABOT","idf_UK3CB_17_HEAT","idf_UK3CB_14_HE","rhs_mag_762x51_M240_1200","rhs_mag_762x51_M240_1200","rhs_mag_762x51_M240_1200"};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
	};
};
class Extended_InitPost_EventHandlers
{
	class B_MBT_01_cannon_F
	{
		class merkava_blockcargo
		{
			init = "[(_this select 0)] spawn wog_fnc_merkava_countAmmo;";
		};
	};
};
class CfgFunctions
{
	class wog
	{
		class idf
		{
			class merkava_defineLoadout
			{
				file = "\wog_idf_c_vehicles\scripts\defineLoadout.sqf";
				description = "Merkava  Init";
			};
			class merkava_countAmmo
			{
				file = "\wog_idf_c_vehicles\scripts\countAmmo.sqf";
				description = "Block Merkava passengers";
			};
		};
	};
};
