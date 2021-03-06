/* xoreos - A reimplementation of BioWare's Aurora engine
 *
 * xoreos is the legal property of its developers, whose names
 * can be found in the AUTHORS file distributed with this source
 * distribution.
 *
 * xoreos is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * xoreos is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with xoreos. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file
 *  Basic Neverwinter Nights 2 type definitions.
 */

#ifndef ENGINES_NWN2_TYPES_H
#define ENGINES_NWN2_TYPES_H

#include "src/common/types.h"

namespace Engines {

namespace NWN2 {

/** Object type, matches the bitfield in nwscript.nss */
enum ObjectType {
	kObjectTypeCreature     = 1U <<  0,
	kObjectTypeItem         = 1U <<  1,
	kObjectTypeTrigger      = 1U <<  2,
	kObjectTypeDoor         = 1U <<  3,
	kObjectTypeAreaOfEffect = 1U <<  4,
	kObjectTypeWaypoint     = 1U <<  5,
	kObjectTypePlaceable    = 1U <<  6,
	kObjectTypeStore        = 1U <<  7,
	kObjectTypeEncounter    = 1U <<  8,
	kObjectTypeLight        = 1U <<  9,
	kObjectTypePlacedEffect = 1U << 10,

	kObjectTypeInvalid      = 0x7FFF,
	kObjectTypeAll          = 0x7FFF,

	kObjectTypeMAX          = 0x7FFF,

	kObjectTypeArea         = 1U << 29, ///< Fake value for an area object.
	kObjectTypeModule       = 1U << 30, ///< Fake value for a module object.
	kObjectTypeSelf         = 1U << 31  ///< Fake value to describe the calling object in a script.
};

enum Script {
	kScriptAcquireItem       = 0,
	kScriptActiveItem           ,
	kScriptAttacked             ,
	kScriptBlocked              ,
	kScriptClick                ,
	kScriptClient               ,
	kScriptClosed               ,
	kScriptCutsceneAbort        ,
	kScriptDamaged              ,
	kScriptDeath                ,
	kScriptDialogue             ,
	kScriptDisarm               ,
	kScriptDisturbed            ,
	kScriptEndRound             ,
	kScriptEnter                ,
	kScriptExhausted            ,
	kScriptExit                 ,
	kScriptFailToOpen           ,
	kScriptHeartbeat            ,
	kScriptLock                 ,
	kScriptModuleLoad           ,
	kScriptModuleStart          ,
	kScriptNotice               ,
	kScriptOpen                 ,
	kScriptPCLoaded             ,
	kScriptPlayerChat           ,
	kScriptPlayerDeath          ,
	kScriptPlayerDying          ,
	kScriptPlayerEquipItem      ,
	kScriptPlayerLevelUp        ,
	kScriptPlayerRespanw        ,
	kScriptPlayerRest           ,
	kScriptPlayerUnequipItem    ,
	kScriptRested               ,
	kScriptShout                ,
	kScriptSpawn                ,
	kScriptSpellCastAt          ,
	kScriptStoreClose           ,
	kScriptStoreOpen            ,
	kScriptTrapTriggered        ,
	kScriptUnaquireItem         ,
	kScriptUnlock               ,
	kScriptUsed                 ,
	kScriptUserdefined          ,
	kScriptMAX
};

enum Ability {
	kAbilityStrength     = 0,
	kAbilityDexterity    = 1,
	kAbilityConstitution = 2,
	kAbilityIntelligence = 3,
	kAbilityWisdom       = 4,
	kAbilityCharisma     = 5,
	kAbilityMAX
};

enum Alignment {
	kAlignmentAll     = 0,
	kAlignmentNeutral = 1,
	kAlignmentLawful  = 2,
	kAlignmentChaotic = 3,
	kAlignmentGood    = 4,
	kAlignmentEvil    = 5
};

enum Gender {
	kGenderMale   = 0,
	kGenderFemale = 1,
	kGenderBoth   = 2,
	kGenderOther  = 3,
	kGenderNone   = 4
};

// repute.2da row
enum StandardFaction {
        kStandardPC    = 0,
        kStandardHostile  ,
        kStandardCommoner ,
        kStandardMerchant ,
        kStandardDefender ,
};

// skills.2da row
enum Skill {
	kSkillAnimalEmpathy  =  0, // Deleted
	kSkillConcentration  =  1,
	kSkillDisableDevice  =  2,
	kSkillDiscipline     =  3,
	kSkillHeal           =  4,
	kSkillHide           =  5,
	kSkillListen         =  6,
	kSkillLore           =  7,
	kSkillMoveSilently   =  8,
	kSkillOpenLock       =  9,
	kSkillParry          = 10,
	kSkillPerform        = 11,
	kSkillDiplomacy      = 12,
	kSkillSleightOfHand  = 13,
	kSkillSearch         = 14,
	kSkillSetTrap        = 15,
	kSkillSpellcraft     = 16,
	kSkillSpot           = 17,
	kSkillTaunt          = 18,
	kSkillUseMagicDevice = 19,
	kSkillAppraise       = 20,
	kSkillTumble         = 21,
	kSkillCraftTrap      = 22,
	kSkillBluff          = 23,
	kSkillIntimidate     = 24,
	kSkillCraftArmor     = 25,
	kSkillCraftWeapon    = 26,
	kSkillCraftAlchemy   = 27,
	kSKillRide           = 28, // Deleted
	kSkillSurvival       = 29,
	kSkillMAX
};

// classes.2da row
enum CClass {
	kCClassBarbarian =  0,
	kCClassBard      =  1,
	kCClassCleric    =  2,
	kCClassDruid     =  3,
	kCClassFighter   =  4,
	kCClassMonk      =  5,
	kCClassPaladin   =  6,
	kCClassRanger    =  7,
	kCClassRogue     =  8,
	kCClassSorcerer  =  9,
	kCClassWizard    = 10,
	kCClassWarlock   = 39,
};

// iprp_damagetypes.2da rows
enum Damage {
	kDamageBludgeon = 0,
	kDamagePierce      ,
	kDamageSlash       ,
	kDamageSubdual     , // Deleted
	kDamagePhysical    , // Deleted
	kDamageMagical     ,
	kDamageAcid        ,
	kDamageCold        ,
	kDamageDivine      ,
	kDamageElectric    ,
	kDamageFire        ,
	kDamageNegative    ,
	kDamagePositive    ,
	kDamageSonic       ,
	kDamageMAX
};

// iprp_saveelement.2da rows
enum Save {
	kSaveUniversal   = 0,
	kSaveAcid           ,
	kSaveBackstab       , // Deleted
	kSaveCold           ,
	kSaveDeath          ,
	kSaveDisease        ,
	kSaveDivine         ,
	kSaveElectric       ,
	kSaveFear           ,
	kSaveFire           ,
	kSaveIllusion       , // Deleted
	kSaveMindAffecting  ,
	kSaveNegativeEnergy ,
	kSavePoison         ,
	kSavePositiveEnergy ,
	kSaveSonic          ,
	kSaveMAX
};

// feats.2da row
enum Feat {
	kFeatSkillFocusAppraise = 404,
	kFeatSkillFocusBluff = 915,
	kFeatSkillFocusConcentrate = 173,
	kFeatSkillFocusCraftAlchemy = 1331,
	kFeatSkillFocusCraftArmor = 911,
	kFeatSkillFocusCraftTrap = 407,
	kFeatSkillFocusCraftWeapon = 912,
	kFeatSkillFocusDisableDevice = 174,
	kFeatSkillFocusHeal = 177,
	kFeatSkillFocusHide = 178,
	kFeatSkillFocusIntimidate = 916,
	kFeatSkillFocusListen = 179,
	kFeatSkillFocusLore = 180,
	kFeatSkillFocusMoveSilently = 181,
	kFeatSkillFocusOpenLock = 182,
	kFeatSkillFocusParry = 183,
	kFeatSkillFocusPerform = 184,
	kFeatSkillFocusSearch = 187,
	kFeatSkillFocusSetTrap = 188,
	kFeatSkillFocusSleightOfHand = 186,
	kFeatSkillFocusSpellcraft = 189,
	kFeatSkillFocusSpot = 190,
	kFeatSkillFocusSurvival = 1333,
	kFeatSkillFocusTaunt = 192,
	kFeatSkillFocusTumble = 406,
	kFeatSkillFocusUseMagicDevice = 193,

	kFeatNatureSense = 198,
	kFeatSkillMastery = 225,
	kFeatStonecunning = 227,
	kFeatSkillAffinitySearch = 238,
	kFeatPSASearch = 245,

	kFeatBkgdArtist = 378,
	kFeatBkgdBlooded = 379,
	kFeatBkgdBullheaded = 380,
	kFeatBkgdCourteousMagocracy = 381,
	kFeatBkgdLuckOfHeroes = 382,
	kFeatBkgdMindOverBody = 1104,
	kFeatBkgdSilverPalm = 384,
	kFeatBkgdSnakeBlood = 386,
	kFeatBkgdSpellcastingProdigy = 1114,
	kFeatBkgdStrongSoul = 388,
	kFeatBkgdThug = 402,

	kFeatEpicSkillFocusDisableTrap = 591,
	kFeatEpicSkillFocusSearch = 603,

	kFeatAlertness = 0,
	kFeatNegotiator = 1109,
	kFeatNimbleFingers = 1110,
	kFeatSelfSufficient = 1385,
	kFeatStealthy = 387,

	kFeatHistoryBully = 1717,
	kFeatHistoryComplex = 1718,
	kFeatHistoryDevout = 1719,
	kFeatHistoryFarmer = 1720,
	kFeatHistoryLadiesMan = 1721,
	kFeatHistoryTheFlirt = 1722,
	kFeatHistoryMilitia = 1723,
	kFeatHistoryNaturalLeader = 1724,
	kFeatHistoryTaleTeller = 1725,
	kFeatHistoryTroublemaker = 1726,
	kFeatHistoryWildChild = 1727,
	kFeatHistoryWizardsApprentice = 1728,

	kFeatHistoryAppraiser = 2241,
	kFeatHistoryConfidant = 2242,
	kFeatHistoryForeigner = 2243,
	kFeatHistorySavvy = 2244,
	kFeatHistorySurvivor = 2245,
	kFeatHistoryTalent = 2246,
	kFeatHistoryVeteran = 2247,
};

static const uint32 kRaceInvalid    =  28;
static const uint32 kSubRaceInvalid = 255;
static const uint32 kClassInvalid   = 255;

Alignment getAlignmentLawChaos(uint8 lawChaos);
Alignment getAlignmentGoodEvil(uint8 goodEvil);

} // End of namespace NWN2

} // End of namespace Engines

#endif // ENGINES_NWN2_TYPES_H
