/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#include "../includes/general.h"

menu_t destruct_menu(menu_t main, sfRenderWindow *window)
{
    sfTexture_destroy(main.background_texture);
    sfTexture_destroy(main.fire_entities_1);
    sfTexture_destroy(main.fire_entities_2);
    sfTexture_destroy(main.fire_entities_3);
    sfTexture_destroy(main.fire_entities_4);
    sfTexture_destroy(main.fire_entities_5);
    sfTexture_destroy(main.fire_entities_6);
    sfSprite_destroy(main.fire_sprite);
    sfSprite_destroy(main.background);
    sfText_destroy(main.header);
    sfText_destroy(main.footer);
    sfRenderWindow_destroy(window);
}