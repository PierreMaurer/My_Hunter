/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#include "../includes/general.h"

gameloop_t animate_sprite(gameloop_t gameloop)
{
    if (gameloop.seconds == 0)
        sfSprite_setTexture(gameloop.fire_sprite
        , gameloop.fire_entities_1, sfTrue);
    if (gameloop.seconds == 1)
        sfSprite_setTexture(gameloop.fire_sprite
        , gameloop.fire_entities_2, sfTrue);
    if (gameloop.seconds == 2)
        sfSprite_setTexture(gameloop.fire_sprite
        , gameloop.fire_entities_3, sfTrue);
    if (gameloop.seconds == 3)
        sfSprite_setTexture(gameloop.fire_sprite
        , gameloop.fire_entities_4, sfTrue);
    if (gameloop.seconds == 4)
        sfSprite_setTexture(gameloop.fire_sprite
        , gameloop.fire_entities_5, sfTrue);
    if (gameloop.seconds == 5)
        sfSprite_setTexture(gameloop.fire_sprite
        , gameloop.fire_entities_6, sfTrue);
    if (gameloop.seconds == 6)
        gameloop.seconds = 0;
    gameloop.seconds++;
    return gameloop;
}