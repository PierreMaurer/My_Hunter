/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** opening_a_window.c
*/
#ifndef ENTITIES_H
#define ENTITIES_H


#include "sprite_animation.h"
typedef struct entities_fire_s {
    int id;
    int pos;
    int is_alive;
    int start_pos;
    sfIntRect rect;
    sfTexture *texture;
    sfSprite *sprite;
} entities_t;
#endif //ENTITIES_H
