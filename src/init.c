/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#include "../includes/general.h"

general_t *init_general(void)
{
    general_t *general_data = malloc(sizeof(general_t));
    sfVideoMode mode = { 1920, 1080, 32};
    general_data->window = sfRenderWindow_create(mode, "FireHunter"
    , sfDefaultStyle, NULL);
    sfRenderWindow_setMouseCursorVisible(general_data->window, sfFalse);
    return general_data;
}

