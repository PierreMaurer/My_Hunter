/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** opening_a_window.c
*/

#include "include/click_mouse_event.h"

void close_func(sfRenderWindow *window, sfEvent event) {
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(window);
    }
}

int main(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {800, 600, 32};
    sfEvent event;

    window = sfRenderWindow_create(video_mode, NULL, sfClose, NULL);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            analyse_events(window, event);
        }
        display_sprite(window);
        sfRenderWindow_display(window);
    }
}

