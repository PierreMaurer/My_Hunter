/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#ifndef PROJETHUNTERTEST_GAMELOOP_H
#define PROJETHUNTERTEST_GAMELOOP_H

#include "general.h"
#include <SFML/Graphics.h>
#include <stdio.h>
#include "stdlib.h"
#include "my.h"
typedef struct gameloop_s {
    sfRenderWindow *window;
    sfTime *time;
    int seconds;
    float speed;
    int life;
    int score;
    sfSprite *fire_sprite;
    sfTexture *background_texture;
    sfTexture *fire_entities_1;
    sfTexture *fire_entities_2;
    sfTexture *fire_entities_3;
    sfTexture *fire_entities_4;
    sfTexture *fire_entities_5;
    sfTexture *fire_entities_6;
    sfTexture *aim_pointer_texture;
    sfSprite *aim_pointer;
    sfSprite *background;
    sfText *score_text;
    sfText *score_nb;
    sfText *life_text;
    sfText *life_nb;
    sfVector2f fire_entities_pos;
    sfVector2f score_text_pos;
    sfVector2f score_nb_pos;
    sfVector2f life_text_pos;
    sfVector2f life_nb_pos;
    sfVector2f aim_pointer_pos;
    sfVector2f scale;
    sfVector2f scale_pointer;
    sfFont *font;
} gameloop_t;

int gameloop(sfRenderWindow *window);
int end_menu(sfRenderWindow *window);
gameloop_t init_gameloop_struct(void);
gameloop_t game_loop_init_text(gameloop_t gameloop);
gameloop_t shoot_entities(sfEvent event, gameloop_t gameloop);
int render_gameloop(gameloop_t gameloop, sfRenderWindow *window);
gameloop_t animate_sprite(gameloop_t gameloop);
gameloop_t update_entities_out(gameloop_t gameloop);
gameloop_t update_entities_shooted(gameloop_t gameloop);
gameloop_t game_init_last(gameloop_t gameloop);
gameloop_t event_manager_game(sfRenderWindow *window, sfEvent event
, gameloop_t gameloop_s);
gameloop_t aim_pointer(gameloop_t gameloop, sfMouseMoveEvent event);
gameloop_t texte_init(gameloop_t gameloop);
#endif //PROJETHUNTERTEST_GAMELOOP_H