/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** click_mouse_event.c
*/

#include "include/click_mouse_event.h"


void close_window(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
}

void manage_mouse_click(sfMouseButtonEvent event)
{
    if (event.button == sfMouseLeft) {

        printf("Mouse X= %d ", event.x);
        printf("Y= %d \n", event.y);
        fflush(stdout);
    }
}
void analyse_events(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed)
    {
        manage_mouse_click(event.mouseButton);
    }
    if (event.type == sfEvtClosed) {
        close_window(window);
    }
}
