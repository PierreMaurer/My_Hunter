/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** opening_a_window.c
*/

#include "../include/entities.h"
#include "../include/sprite_animation.h"

entities_t createFireEntities(int entities_id)
{
    entities_t fire;
    sfVector2f pos;

    fire.id = entities_id;
    fire.is_alive = 1;
    fire.texture = sfTexture_createFromFile("ressources/sprite.png", NULL);

    return fire;
}