/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#include "../includes/general.h"

int end_menu(sfRenderWindow *window)
{
    menu_t main = init_end_menu();
    sfVideoMode mode_video = {1920, 1080, 32};

    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window)) {
        sfEvent event;
        while (sfRenderWindow_pollEvent(window, &event)) {
            event_manager__end_menu(window, event);
        }
        render_end_menu(main, window);
    }
    return 0;
}