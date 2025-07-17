#ifndef OBJECTS_H
#define OBJECTS_H

#include <stdbool.h>
#include "effects.h"

typedef enum {
    WALL,
    DOOR,
    TRAP,
    PORTAL
} ObjectType;

typedef struct {
    char objectName[100];
    bool walkable; // can walk on it
    // add location coordinates

    union {
        struct {
            bool locked;
            char keyName[100];
        } doorData;

        struct {
            int damage;
            EffectType effect;
            bool disarmed;
            char toolName[100];
        } trapData;

        struct {
            // location destination coordinates
            bool portalActive;
            bool oneWay;
        } portalData;
    } objectData;
} Object;

#endif
