/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#include "../includes/general.h"

int gameloop(sfRenderWindow *window)
{
    gameloop_t gameloop = init_gameloop_struct();
    sfClock *clock = sfClock_create();
    sfWindow_setMouseCursorVisible(window, sfFalse);
    while (sfRenderWindow_isOpen(window)) {
        sfEvent event;
        if (gameloop.fire_entities_pos.x <= 0)
            gameloop = update_entities_out(gameloop);
        gameloop.fire_entities_pos.x -= gameloop.speed;
        sfSprite_setPosition(gameloop.fire_sprite, gameloop.fire_entities_pos);
        while (sfRenderWindow_pollEvent(window, &event))
            gameloop = event_manager_game(window, event, gameloop);
        if (gameloop.life == 0)
            return (0);
        if (sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.1) {
            gameloop = animate_sprite(gameloop);
            sfClock_restart(clock);
        }
        render_gameloop(gameloop, window);
    }
    return 0;
}