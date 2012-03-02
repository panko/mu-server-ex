//**********************************************************************//
// Project:	HaRiBO MU GameServer - Season 6								//
// Company: RealCoderZ MU Development � 2010							//
// Description: MU Class Magic Damage Information & Structures			//
// Coded & Modified By:	WolF & M.E.S									//
//**********************************************************************//
#ifndef MAGICDAMAGE_H
#define MAGICDAMAGE_H

#include "CharacterInfo.h"

#define MAX_SKILL				271
#define MAX_REQ_SKILL_STATUS	3

enum eSkillType
{
	AT_SKILL_POISON					= 1,
	AT_SKILL_METEORITE				= 2,
	AT_SKILL_THUNDER				= 3,
	AT_SKILL_FIREBALL				= 4,
	AT_SKILL_FLAME					= 5,
	AT_SKILL_TELEPORT				= 6,
	AT_SKILL_ICE					= 7,
	AT_SKILL_TWISTER				= 8,
	AT_SKILL_EVIL					= 9,
	AT_SKILL_HELL_FIRE				= 10,
	AT_SKILL_POWERWAVE				= 11,
	AT_SKILL_AQUA_BEAM				= 12,
	AT_SKILL_BLAST					= 13,
	AT_SKILL_INFERNO				= 14,
	AT_SKILL_TARGET_TELEPORT		= 15,
	AT_SKILL_MAGICDEFENSE			= 16,
	AT_SKILL_ENERGYBALL				= 17,
	AT_SKILL_BLOCKING				= 18,
	AT_SKILL_SWORD1					= 19,
	AT_SKILL_SWORD2					= 20,
	AT_SKILL_SWORD3					= 21,
	AT_SKILL_SWORD4					= 22,
	AT_SKILL_SWORD5					= 23,
	AT_SKILL_CROSSBOW				= 24,
	AT_SKILL_BOW					= 25,
	AT_SKILL_HEALING				= 26,
	AT_SKILL_DEFENSE				= 27,
	AT_SKILL_ATTACK					= 28,
	AT_SKILL_CALLMON1				= 30,
	AT_SKILL_CALLMON2				= 31,
	AT_SKILL_CALLMON3				= 32,
	AT_SKILL_CALLMON4				= 33,
	AT_SKILL_CALLMON5				= 34,
	AT_SKILL_CALLMON6				= 35,
	AT_SKILL_CALLMON7				= 36,
	AT_SKILL_DECAY					= 38,
	AT_SKILL_ICE_STORM				= 39,
	AT_SKILL_NOVA					= 40,
	AT_SKILL_TWISTING_SLASH			= 41,
	AT_SKILL_RAGEFUL_BLOW			= 42,
	AT_SKILL_DEATH_STAB				= 43,
	AT_SKILL_RUSH					= 44,
	AT_SKILL_JAVALIN				= 45,
	AT_SKILL_DEEPIMPACT				= 46,
	AT_SKILL_KNIGHTSPEAR			= 47,
	AT_SKILL_KNIGHTADDLIFE			= 48,
	AT_SKILL_KNIGHTDINORANT			= 49,
	AT_SKILL_DEVILFIRE				= 50,
	AT_SKILL_ELFHARDEN				= 51,
	AT_SKILL_PENETRATION			= 52,
	AT_SKILL_IMPROVE_AG_REFILL		= 53,
	AT_SKILL_5CROSSBOW				= 54,
	AT_SKILL_DEFENSEDOWN			= 55,
	AT_SKILL_POWER_SLASH			= 56,
	AT_SKILL_ONE_FLASH				= 57,
	AT_SKILL_EXPHELL_START			= 58,
	AT_SKILL_COMBO					= 59,
	AT_SKILL_SPEAR					= 60,
	AT_SKILL_FIREBURST				= 61,
	AT_SKILL_DARKHORSE_ATTACK		= 62,
	AT_SKILL_RECALL_PARTY			= 63,
	AT_SKILL_ADD_CRITICALDAMAGE		= 64,
	AT_SKILL_ELECTRICSPARK			= 65,
	AT_SKILL_LONGSPEAR				= 66,
	AT_SKILL_STUN					= 67,
	AT_SKILL_REMOVAL_STUN			= 68,
	AT_SKILL_ADD_MANA				= 69,
	AT_SKILL_INVISIBLE				= 70,
	AT_SKILL_REMOVAL_INVISIBLE		= 71,
	AT_SKILL_REMOVAL_MAGIC			= 72,
	AT_SKILL_DEATH_CANNON			= 73,
	AT_SKILL_SPACE_SPLIT			= 74,
	AT_SKILL_BRAND_OF_SKILL			= 75,
	AT_SKILL_FENRIR_ATTACK			= 76,
	AT_SKILL_INFINITY_ARROW			= 77,
	AT_SKILL_FIRESCREAM				= 78,
	AT_SKILL_EXPLOSION				= 79,
	AT_SKILL_SUMMON					= 200,
	AT_SKILL_IMMUNE_TO_MAGIC		= 201,
	AT_SKILL_IMMUNE_TO_HARM			= 202,
	AT_SKILL_ITSHIELD				= 210,
	AT_SKILL_ITRESIST				= 211,
	AT_SKILL_ITTRACK				= 212,
	AT_SKILL_ITFREEZE				= 213,
	AT_SKILL_DRAIN_LIFE				= 214,
	AT_SKILL_CHAIN_LIGHTING			= 215,
	AT_SKILL_ELECTRIC_SURGE			= 216,
	AT_SKILL_REFLEX					= 217,
	AT_SKILL_SWORD_POWER			= 218,
	AT_SKILL_SLEEP					= 219,
	AT_SKILL_NIGHT					= 220,
	AT_SKILL_WEAKNESS				= 221,
	AT_SKILL_INNOVATION				= 222,
	AT_SKILL_SAHAMUTT				= 223,
	AT_SKILL_NEIL					= 224,
	AT_SKILL_GHOST_PHANTOM			= 225,
	AT_SKILL_RED_STORM				= 230,
	AT_SKILL_EXPLOTION				= 232,
	AT_SKILL_MAGIC_CIRCLE			= 233,
	AT_SKILL_REDUCE_DAMAGE_SHIELD	= 234,
	AT_SKILL_FIVE_SHOT				= 235,
	AT_SKILL_SWORD_SLASH			= 236,
	AT_SKILL_LIGHTING_STORM			= 237,
	AT_SKILL_BIRDS					= 238,
	AT_SKILL_LARGE_RING_BLOWER		= 260,
	AT_SKILL_UPPER_BEAST			= 261,
	AT_SKILL_CHAIN_DRIVER			= 262,
	AT_SKILL_DARK_SIDE				= 263,
	AT_SKILL_DRAGON_LORE			= 264,
	AT_SKILL_DRAGON_SLAYER			= 265,
	AT_SKILL_RED_ARMOR_IGNORE		= 266,
	AT_SKILL_FITNESS				= 267,
	AT_SKILL_DEFENSE_RATE_INCREASE	= 268,
	AT_SKILL_CHARGE					= 269,
	AT_SKILL_NEW					= 270,

	// Grand Master
	MASTER_SKILL_SOUL_BARRIER_LVL1 = 435,
	MASTER_SKILL_SOUL_BARRIER_LVL2 = 436,
	MASTER_SKILL_SOUL_BARRIER_LVL3 = 437,
	MASTER_SKILL_SOUL_BARRIER_LVL4 = 438,
	MASTER_SKILL_SOUL_BARRIER_LVL5 = 439,
	MASTER_SKILL_HELLFIRE_LVL1 = 440,
	MASTER_SKILL_HELLFIRE_LVL2 = 441,
	MASTER_SKILL_HELLFIRE_LVL3 = 442,
	MASTER_SKILL_HELLFIRE_LVL4 = 443,
	MASTER_SKILL_HELLFIRE_LVL5 = 444,
	MASTER_SKILL_EVIL_SPIRIT_SM_LVL1 = 445,
	MASTER_SKILL_EVIL_SPIRIT_SM_LVL2 = 446,
	MASTER_SKILL_EVIL_SPIRIT_SM_LVL3 = 447,
	MASTER_SKILL_EVIL_SPIRIT_SM_LVL4 = 448,
	MASTER_SKILL_EVIL_SPIRIT_SM_LVL5 = 449,
	MASTER_SKILL_ICE_STORM_LVL1 = 450,
	MASTER_SKILL_ICE_STORM_LVL2 = 451,
	MASTER_SKILL_ICE_STORM_LVL3 = 452,
	MASTER_SKILL_ICE_STORM_LVL4 = 453,
	MASTER_SKILL_ICE_STORM_LVL5 = 454,

	// Blade Master
	MASTER_SKILL_TWISTING_SLASH_BM_LVL1 = 455,
	MASTER_SKILL_TWISTING_SLASH_BM_LVL2 = 456,
	MASTER_SKILL_TWISTING_SLASH_BM_LVL3 = 457,
	MASTER_SKILL_TWISTING_SLASH_BM_LVL4 = 458,
	MASTER_SKILL_TWISTING_SLASH_BM_LVL5 = 459,
	MASTER_SKILL_DEATH_STAB_LVL1 = 460,
	MASTER_SKILL_DEATH_STAB_LVL2 = 461,
	MASTER_SKILL_DEATH_STAB_LVL3 = 462,
	MASTER_SKILL_DEATH_STAB_LVL4 = 463,
	MASTER_SKILL_DEATH_STAB_LVL5 = 464,
	MASTER_SKILL_RAGEFUL_BLOW_LVL1 = 465,
	MASTER_SKILL_RAGEFUL_BLOW_LVL2 = 466,
	MASTER_SKILL_RAGEFUL_BLOW_LVL3 = 467,
	MASTER_SKILL_RAGEFUL_BLOW_LVL4 = 468,
	MASTER_SKILL_RAGEFUL_BLOW_LVL5 = 469,
	MASTER_SKILL_GREATER_FORTITUDE_LVL1 = 470,
	MASTER_SKILL_GREATER_FORTITUDE_LVL2 = 471,
	MASTER_SKILL_GREATER_FORTITUDE_LVL3 = 472,
	MASTER_SKILL_GREATER_FORTITUDE_LVL4 = 473,
	MASTER_SKILL_GREATER_FORTITUDE_LVL5 = 474,

	// High Elf
	MASTER_SKILL_HEAL_LVL1 = 475,
	MASTER_SKILL_HEAL_LVL2 = 476,
	MASTER_SKILL_HEAL_LVL3 = 477,
	MASTER_SKILL_HEAL_LVL4 = 478,
	MASTER_SKILL_HEAL_LVL5 = 479,
	MASTER_SKILL_GREATER_DEFENSE_LVL1 = 480,
	MASTER_SKILL_GREATER_DEFENSE_LVL2 = 481,
	MASTER_SKILL_GREATER_DEFENSE_LVL3 = 482,
	MASTER_SKILL_GREATER_DEFENSE_LVL4 = 483,
	MASTER_SKILL_GREATER_DEFENSE_LVL5 = 484,
	MASTER_SKILL_GREATER_DAMAGE_LVL1 = 485,
	MASTER_SKILL_GREATER_DAMAGE_LVL2 = 486,
	MASTER_SKILL_GREATER_DAMAGE_LVL3 = 487,
	MASTER_SKILL_GREATER_DAMAGE_LVL4 = 488,
	MASTER_SKILL_GREATER_DAMAGE_LVL5 = 489,
	MASTER_SKILL_TRIPLE_SHOT_LVL1 = 490,
	MASTER_SKILL_TRIPLE_SHOT_LVL2 = 491,
	MASTER_SKILL_TRIPLE_SHOT_LVL3 = 492,
	MASTER_SKILL_TRIPLE_SHOT_LVL4 = 493,
	MASTER_SKILL_TRIPLE_SHOT_LVL5 = 494,

	// Duel Master
	MASTER_SKILL_TWISTING_SLASH_MG_LVL1 = 495,
	MASTER_SKILL_TWISTING_SLASH_MG_LVL2 = 496,
	MASTER_SKILL_TWISTING_SLASH_MG_LVL3 = 497,
	MASTER_SKILL_TWISTING_SLASH_MG_LVL4 = 498,
	MASTER_SKILL_TWISTING_SLASH_MG_LVL5 = 499,
	MASTER_SKILL_BLOOD_ATTACK_LVL1 = 500,
	MASTER_SKILL_BLOOD_ATTACK_LVL2 = 501,
	MASTER_SKILL_BLOOD_ATTACK_LVL3 = 502,
	MASTER_SKILL_BLOOD_ATTACK_LVL4 = 503,
	MASTER_SKILL_BLOOD_ATTACK_LVL5 = 504,
	MASTER_SKILL_POWER_SLASH_LVL1 = 505,
	MASTER_SKILL_POWER_SLASH_LVL2 = 506,
	MASTER_SKILL_POWER_SLASH_LVL3 = 507,
	MASTER_SKILL_POWER_SLASH_LVL4 = 508,
	MASTER_SKILL_POWER_SLASH_LVL5 = 509,
	MASTER_SKILL_BLAST_LVL1 = 510,
	MASTER_SKILL_BLAST_LVL2 = 511,
	MASTER_SKILL_BLAST_LVL3 = 512,
	MASTER_SKILL_BLAST_LVL4 = 513,
	MASTER_SKILL_BLAST_LVL5 = 514,
	MASTER_SKILL_EVIL_SPIRIT_MG_LVL1 = 530,
	MASTER_SKILL_EVIL_SPIRIT_MG_LVL2 = 531,
	MASTER_SKILL_EVIL_SPIRIT_MG_LVL3 = 532,
	MASTER_SKILL_EVIL_SPIRIT_MG_LVL4 = 533,
	MASTER_SKILL_EVIL_SPIRIT_MG_LVL5 = 534,

	// Lord Emperor
	MASTER_SKILL_EARTHQUAKE_LVL1 = 515,
	MASTER_SKILL_EARTHQUAKE_LVL2 = 516,
	MASTER_SKILL_EARTHQUAKE_LVL3 = 517,
	MASTER_SKILL_EARTHQUAKE_LVL4 = 518,
	MASTER_SKILL_EARTHQUAKE_LVL5 = 519,
	MASTER_SKILL_FIRE_BURST_LVL1 = 520,
	MASTER_SKILL_FIRE_BURST_LVL2 = 521,
	MASTER_SKILL_FIRE_BURST_LVL3 = 522,
	MASTER_SKILL_FIRE_BURST_LVL4 = 523,
	MASTER_SKILL_FIRE_BURST_LVL5 = 524,
	MASTER_SKILL_FIRE_SCREAM_LVL1 = 525,
	MASTER_SKILL_FIRE_SCREAM_LVL2 = 526,
	MASTER_SKILL_FIRE_SCREAM_LVL3 = 527,
	MASTER_SKILL_FIRE_SCREAM_LVL4 = 528,
	MASTER_SKILL_FIRE_SCREAM_LVL5 = 529,

	// Dimmension Master
	MASTER_SKILL_SLEEP_LVL1 = 535,
	MASTER_SKILL_SLEEP_LVL2 = 536,
	MASTER_SKILL_SLEEP_LVL3 = 537,
	MASTER_SKILL_SLEEP_LVL4 = 538,
	MASTER_SKILL_SLEEP_LVL5 = 539,
	MASTER_SKILL_CHAIN_LIGHTNING_LVL1 = 540,
	MASTER_SKILL_CHAIN_LIGHTNING_LVL2 = 541,
	MASTER_SKILL_CHAIN_LIGHTNING_LVL3 = 542,
	MASTER_SKILL_CHAIN_LIGHTNING_LVL4 = 543,
	MASTER_SKILL_CHAIN_LIGHTNING_LVL5 = 544,
	MASTER_SKILL_LIGHTNING_SHOCK_LVL1 = 545,
	MASTER_SKILL_LIGHTNING_SHOCK_LVL2 = 546,
	MASTER_SKILL_LIGHTNING_SHOCK_LVL3 = 547,
	MASTER_SKILL_LIGHTNING_SHOCK_LVL4 = 548,
	MASTER_SKILL_LIGHTNING_SHOCK_LVL5 = 549,
	MASTER_SKILL_DRAIN_LIFE_LVL1 = 550,
	MASTER_SKILL_DRAIN_LIFE_LVL2 = 551,
	MASTER_SKILL_DRAIN_LIFE_LVL3 = 552,
	MASTER_SKILL_DRAIN_LIFE_LVL4 = 553,
	MASTER_SKILL_DRAIN_LIFE_LVL5 = 554,
};

class CMagicDamage
{
public:
	CMagicDamage(void);
	~CMagicDamage(void);
	void Init();
	void LogSkillList(char* Buffer, int iSize);
	void LogSkillList(char* filename);
	void LogSkillNameList(char* Buffer, int iSize);
	void LogSkillNameList(char* filename);
	int SkillGet(int skill);
	int SkillGetMana(int skill);
	int SkillGetRequireEnergy(int skill);
	int SkillGetRequireLevel(int skill);
	int SkillGetRequireClass(int aIndex, int skill);
	int SkillGetBP(int skill);
	int GetSkillAttr1(int skill);
	int GetSkillAttr2(int skill);
	int GetskillRequireLeadership(int skill);
	int GetDelayTime(int skill);
	int GetSkillType(int iSkill);
	bool CheckStatus(int iSkill, int iGuildStatus);
	bool CheckBrandOfSkill(int iSkill);
	int CheckKillCount(int iSkill, int iKillCount);
	int GetKillCount(int iSkill);
	int GetSkillDistance(int skill);
private:
	void SetEx(int iSkill, int iSkillUseType, int iSkillBrand, int iKillCount, int* pReqStatus);
	void Set(char* name, int skill, int damage,  int rlevel,  int mana,  int bp,  int dis, int Attr1,  int Attr2, unsigned char* ReqClass, int rEnergy, int rLeadership, int rdelay, int iSkillType);
	int CheckSkillAttr1(int skill, int attr);
	int CheckSkillAttr2(int skill, int attr);
	// ----
	int m_Damage[MAX_SKILL];
	char m_Name[MAX_SKILL][50];
	unsigned char m_rLevel[MAX_SKILL];
	unsigned short m_Mana[MAX_SKILL];
	unsigned char m_Distance[MAX_SKILL];
	int m_RequireEnergy[MAX_SKILL];
	unsigned char m_RequireClass[MAX_SKILL][MAX_CLASS_TYPE];
	int m_RequireLevel[MAX_SKILL];
	int m_RequireLeadership[MAX_SKILL];
	int m_Delay[MAX_SKILL];
	WORD m_BrainPower[MAX_SKILL];
	int m_Attr1[MAX_SKILL];
	int m_Attr2[MAX_SKILL];
	int m_iSkillUseType[MAX_SKILL];
	int m_iSkillBrand[MAX_SKILL];
	int m_iKillCount[MAX_SKILL];
	int m_iRequireStatus[MAX_SKILL][MAX_REQ_SKILL_STATUS];
	int m_iSkillType[MAX_SKILL];

	enum 
	{
		SKILL_TYPE_NONE = 0xff,
		SKILL_TYPE_PHYSICS = 0x0,
		SKILL_TYPE_MAGIC = 0x1,
		// ----
		SKILL_TYPE_GENERAL = 0x0,
		SKILL_TYPE_BUFF = 0x1,
		SKILL_TYPE_DAMAGE = 0x2,
		SKILL_TYPE_TREATMENT = 0x3,
	};
};
extern CMagicDamage MagicDamageC;

#endif