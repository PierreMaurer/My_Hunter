/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** opening_a_window.c
*/

#include "include/sprite_animation.h"
#include "include/entities.h"
#include <SFML/System/Clock.h>
#include <SFML/System/Types.h>

void display_sprite(sfRenderWindow *window)
{
    entities_t fire;
    fire = createFireEntities(1);
    sfRenderWindow_drawSprite(window, fire.sprite, NULL);
}