/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#include "../includes/general.h"

gameloop_t shoot_entities(sfEvent event, gameloop_t gameloop)
{
    sfVector2f print = sfSprite_getPosition(gameloop.fire_sprite);

    if (event.mouseButton.x >= print.x 
    && event.mouseButton.x <= print.x + 600) {
        if (event.mouseButton.y >= print.y 
        && event.mouseButton.y <= print.y + 197) {
            gameloop.score++;
            gameloop.speed++;
            gameloop.fire_entities_pos.x = 1925;
            gameloop.fire_entities_pos.y = rand() % 500;
            sfSprite_setPosition(gameloop.fire_sprite,
             gameloop.fire_entities_pos);
            sfText_setString(gameloop.score_nb, convert_i_c(gameloop.score));
        }
    }
    return gameloop;
}
