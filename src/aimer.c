/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#include "../includes/general.h"

gameloop_t aim_pointer(gameloop_t gameloop, sfMouseMoveEvent event)
{

    sfVector2f new_pos;
    new_pos.x = event.x;
    new_pos.y = event.y;
    sfSprite_setPosition(gameloop.aim_pointer, new_pos);
    return gameloop;
}