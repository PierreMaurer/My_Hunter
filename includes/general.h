/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#ifndef GENERAL_H
#define GENERAL_H

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"
#include "menu.h"
#include "gameloop.h"

typedef struct score_s {
    int score;
    int best_score;
} score_t;

typedef struct entities_s {
    sfIntRect *rect;
    sfTexture *texture;
    sfSprite *entities_sprites;
} entities_t;


typedef struct general_s {
    sfRenderWindow *window;
    score_t *score;
    entities_t *entities;
} general_t;

general_t *init_general(void);
void event_manager_menu(sfRenderWindow *window, sfEvent event);
void event_manager__end_menu(sfRenderWindow *window, sfEvent event);
#endif //GENERAL_H
