/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#ifndef PROJETHUNTERTEST_BACKGROUND_H
#define PROJETHUNTERTEST_BACKGROUND_H

#include <SFML/Graphics.h>
typedef struct background_s {
    sfSprite *my_background = sfSprite_create();
} background_t;
#endif //PROJETHUNTERTEST_BACKGROUND_H
