/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#ifndef PROJETHUNTERTEST_MENU_H
#define PROJETHUNTERTEST_MENU_H

#include "general.h"
#include <SFML/Graphics.h>
#include <stdio.h>
#include "stdlib.h"
typedef struct menu_s {
    sfRenderWindow *window;
    sfTime *time;
    sfTexture *background_texture;
    sfSprite *background;
    sfText *header;
    sfText *footer;
    sfVector2f header_pos;
    sfVector2f footer_pos;
    sfVector2f fire_entities_pos;
    sfVector2f scale;
    sfFont *font;
} menu_t;
int start_menu(void);
menu_t init_menu(void);
menu_t init_end_menu(void);
menu_t init_text_menu(menu_t main);
menu_t init_text_end_menu(menu_t main);
menu_t destruct_menu(menu_t main, sfRenderWindow *window);
int render_menu(menu_t main, sfRenderWindow *window);
int render_end_menu(menu_t main, sfRenderWindow *window);
#endif //PROJETHUNTERTEST_MENU_H
