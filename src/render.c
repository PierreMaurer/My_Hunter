/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#include "../includes/general.h"
int render_menu(menu_t main, sfRenderWindow *window)
{
    sfRenderWindow_setFramerateLimit(window, 60);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, main.background, NULL);
    sfRenderWindow_drawSprite(window, main.fire_sprite, NULL);
    sfRenderWindow_drawText(window, main.header, NULL);
    sfRenderWindow_drawText(window, main.footer, NULL);
    sfRenderWindow_display(window);
    return 0;
}

int render_end_menu(menu_t main, sfRenderWindow *window)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, main.background, NULL);
    sfRenderWindow_drawSprite(window, main.fire_sprite, NULL);
    sfRenderWindow_drawText(window, main.header, NULL);
    sfRenderWindow_drawText(window, main.footer, NULL);
    sfRenderWindow_display(window);
}

int render_gameloop(gameloop_t gameloop, sfRenderWindow *window)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, gameloop.background, NULL);
    sfRenderWindow_drawSprite(window, gameloop.fire_sprite, NULL);
    sfRenderWindow_drawSprite(window, gameloop.aim_pointer, NULL);
    sfRenderWindow_drawText(window, gameloop.score_text, NULL);
    sfRenderWindow_drawText(window, gameloop.score_nb, NULL);
    sfRenderWindow_drawText(window, gameloop.life_nb, NULL);
    sfRenderWindow_drawText(window, gameloop.life_text, NULL);
    sfRenderWindow_display(window);
}
