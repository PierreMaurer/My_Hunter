/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#include "../includes/gameloop.h"

gameloop_t update_entities_out(gameloop_t gameloop)
{
    gameloop.life--;
    gameloop.fire_entities_pos.y = rand() % 10;
    gameloop.fire_entities_pos.x = 1920;
    sfText_setString(gameloop.life_nb, convert_i_c(gameloop.life));
    return gameloop;
}

gameloop_t update_entities_shooted(gameloop_t gameloop)
{
    gameloop.fire_entities_pos.x = 1925;
    gameloop.fire_entities_pos.y = rand() % 500;
    sfSprite_setPosition(gameloop.fire_sprite, gameloop.fire_entities_pos);
    sfText_setString(gameloop.score_nb, convert_i_c(gameloop.score));
    return gameloop;
}
