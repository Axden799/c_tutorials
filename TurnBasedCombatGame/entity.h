#ifndef ENTITY_H
#define ENTITY_H

typedef enum {
    PLAYER,
    HUMANOID,
    BEAST,
    DEMON,
    UNDEAD
} EntityType;

typedef struct {
    EntityType type;
    char name[100];
    int health;
    int mana;
    int strength;
    int dexterity;
    int intelligence;
    int pierceDefense; // defense against pierce damage
    int slashDefense;
    int bluntDefense;
    int spellDefense;
} Entity;

#endif
