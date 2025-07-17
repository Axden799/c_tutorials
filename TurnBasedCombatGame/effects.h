#ifndef EFFECTS_H
#define EFFECTS_H

typedef enum {
    BLEED,
    POISON,
    BURN,
    WEAKNESS,
    STUN,
    BLIND,
    LIFESTEAL,
    REFLECT
} EffectType;

typedef struct {
    EffectType type;
    char name[100];
    int effectDuration; // duration in turns

    union {
        struct {
            int damage;
        } damageData;

        struct {
            double reflectPercent;
        } reflectData;
    } effectData;
} Effect;


#endif
