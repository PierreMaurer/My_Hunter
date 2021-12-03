/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/


#include "../includes/general.h"

int start_menu(void)
{
    menu_t main = init_menu();
    sfVideoMode mode_video = {1920, 1080, 32};
    sfRenderWindow* window;
    window = sfRenderWindow_create(mode_video, "FireHunter"
    , sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(window)) {
        sfEvent event;
        while (sfRenderWindow_pollEvent(window, &event))
            event_manager_menu(window, event);
        render_menu(main, window);
    }
    main = destruct_menu(main, window);
    return 0;
}