#ifndef ITEMS_H
#define ITEMS_H

#include <stdbool.h>
#include "effects.h"
#include "objects.h"

typedef enum {
    WEAPON,
    CONSUMABLE,
    ARMOR,
    INTERACTABLE,
} ItemType;

typedef struct {
    ItemType type;
    char name[100];

    union {
        struct {
            int baseDamage; // base damage of weapon
            double effectMultiplier; //multiplier done by weapon effect
            double totalDamage; // total damage after calculation
            double effectChance; // percent that effect will be applied on hit
            EffectType effect; // effect applied on weapon
            bool isThrowable;
            int ammoRemaining;
            // damage type
        } weaponData;

        struct {
            int healthBoost; // healing
            int healthRegenBoost; // health regen
            int shieldValue; // shields damage
            int strengthBoost; // boosts strength
            int dexterityBoost; // boosts dexterity
            int IntelligenceBoost; // boosts intelligence
            bool immune; // immune to all damage
            EffectType effect; // immune to this effect type
        } consumableData;

        struct {
            // armor type
            int pierceDefense; // defense against pierce damage
            int slashDefense;
            int bluntDefense;
            int spellDefense;
        } armorData;

        struct {
            ObjectType usableOn;
            bool lostOnUse;
            char usedFor[100];
        } interactableData;
    } ItemData;
} Item;

void initItem(Item *newItem);


#endif
