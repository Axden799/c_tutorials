#include <stdbool.h>
#include "items.h"


const Item ITEM_TABLE[] = {
    {
        .type = WEAPON,
        .name = "Dagger",
        .ItemData = {
            .weaponData = {
                .baseDamage = 10,
                .effectMultiplier  = 1.0,
                .totalDamage = 10.0,
                .effectChance = 0.10,
                .effect = BLEED,
                .isThrowable = false,
                .ammoRemaining = 0,
            }
        }
    },

    {
        .type = CONSUMABLE,
        .name = "Life Potion",
        .ItemData = {
            .consumableData = {
                .healthBoost = 5,
                .healthRegenBoost = 0,
                .shieldValue = 0,
                .strengthBoost = 0,
                .dexterityBoost = 0,
                .IntelligenceBoost = 0,
                .immune = false,
                .effect = BLEED
            }
        }
    },

    {
        .type = ARMOR,
        .name = "Gambeson Chest",
        .ItemData = {
            .armorData = {
                .pierceDefense = 10,
                .slashDefense = 20,
                .bluntDefense = 40,
                .spellDefense = 0,
            }
        }
    },

    {
        .type = INTERACTABLE,
        .name = "Skeleton Key",
        .ItemData = {
            .interactableData = {
                .usableOn = DOOR,
                .lostOnUse = false,
                .usedFor = "Wooden Door"
            }
        }
    }
};

void initItem(Item *newItem) {
    
}
