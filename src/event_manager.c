/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#include "../includes/general.h"

void event_manager_menu(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape)
        sfRenderWindow_close(window);
    if (event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyReturn))
        if (gameloop(window) == 0)
            end_menu(window);
}

void event_manager__end_menu(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape)
        sfRenderWindow_close(window);
    if (event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyReturn))
        gameloop(window);
}

gameloop_t event_manager_game(sfRenderWindow *window, sfEvent event
, gameloop_t gameloop_s)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape)
        sfRenderWindow_close(window);
    if (event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyReturn))
        if (gameloop(window) == 0)
            end_menu(window);
    if (event.type == sfEvtMouseButtonPressed)
        gameloop_s = shoot_entities(event, gameloop_s);
    if (event.type == sfEvtMouseMoved) {
        gameloop_s = aim_pointer(gameloop_s, event.mouseMove);
    }
    return gameloop_s;
}