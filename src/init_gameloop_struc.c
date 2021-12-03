/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#include "../includes/general.h"

gameloop_t init_gameloop_struct(void)
{
    gameloop_t gameloop;
    gameloop.fire_entities_pos.x = 1925;
    gameloop.fire_entities_pos.y = rand() % 10;
    gameloop.life_text_pos.x = 150;
    gameloop.life_text_pos.y = 0;
    gameloop.life_nb_pos.x = 430;
    gameloop.life_nb_pos.y = 0;
    gameloop.score_text_pos.x = 1200;
    gameloop.score_text_pos.y = 0;
    gameloop.score_nb_pos.x = 1600;
    gameloop.score_nb_pos.y = 0;
    gameloop.scale.x = 1;
    gameloop.scale.y = 1;
    gameloop.background_texture = sfTexture_createFromFile("ressources/background.png", NULL);
    gameloop.fire_entities_1 = sfTexture_createFromFile("ressources/fire_ball_1.png", NULL);
    gameloop.fire_entities_2 = sfTexture_createFromFile("ressources/fire_ball_2.png", NULL);
    gameloop.fire_entities_3 = sfTexture_createFromFile("ressources/fire_ball_3.png", NULL);
    gameloop.fire_entities_4 = sfTexture_createFromFile("ressources/fire_ball_4.png", NULL);
    gameloop = game_loop_init_text(gameloop);
    return gameloop;
}

gameloop_t game_loop_init_text(gameloop_t gameloop)
{
    gameloop.fire_entities_5 = sfTexture_createFromFile("ressources/fire_ball_5.png", NULL);
    gameloop.fire_entities_6 = sfTexture_createFromFile("ressources/fire_ball_6.png", NULL);
    gameloop.font = sfFont_createFromFile("ressources/FIREBOMB.TTF");
    gameloop.score_text = sfText_create();
    sfText_setString(gameloop.score_text, "Score : ");
    sfText_setPosition(gameloop.score_text, gameloop.score_text_pos);
    sfText_setCharacterSize(gameloop.score_text, 100);
    sfText_setFont(gameloop.score_text, gameloop.font);
    gameloop.score_nb = sfText_create();
    sfText_setString(gameloop.score_nb, convert_i_c(0));
    sfText_setPosition(gameloop.score_nb, gameloop.score_nb_pos);
    sfText_setCharacterSize(gameloop.score_nb, 100);
    sfText_setFont(gameloop.score_nb, gameloop.font);
    gameloop.life_text = sfText_create();
    sfText_setString(gameloop.life_text, "Life : ");
    sfText_setPosition(gameloop.life_text, gameloop.life_text_pos);
    sfText_setCharacterSize(gameloop.life_text, 100);
    sfText_setFont(gameloop.life_text, gameloop.font);
    gameloop = game_init_last(gameloop);
    return gameloop;
}

gameloop_t game_init_last(gameloop_t gameloop)
{
    gameloop.seconds = 0;
    gameloop.speed = 10;
    gameloop.life = 3;
    gameloop.score = 0;
    gameloop.life_nb = sfText_create();
    sfText_setString(gameloop.life_nb, convert_i_c(3));
    sfText_setPosition(gameloop.life_nb, gameloop.life_nb_pos);
    sfText_setCharacterSize(gameloop.life_nb, 100);
    sfText_setFont(gameloop.life_nb, gameloop.font);
    gameloop.fire_sprite = sfSprite_create();
    gameloop.background = sfSprite_create();
    sfSprite_setTexture(gameloop.background, gameloop.background_texture, sfTrue);
    sfSprite_setPosition(gameloop.fire_sprite, gameloop.fire_entities_pos);
    sfSprite_setTexture(gameloop.fire_sprite, gameloop.fire_entities_1, sfTrue);
    sfSprite_setScale(gameloop.fire_sprite, gameloop.scale);
    gameloop.aim_pointer = sfSprite_create();
    gameloop.aim_pointer_texture = sfTexture_createFromFile("ressources/aim_pointer.png", NULL);
    sfSprite_setTexture(gameloop.aim_pointer, gameloop.aim_pointer_texture, sfTrue);
    gameloop.aim_pointer_pos.x = 0;
    gameloop.aim_pointer_pos.y = 0;
    sfSprite_setPosition(gameloop.aim_pointer, gameloop.aim_pointer_pos);
    gameloop.scale_pointer.y = 0.1;
    gameloop.scale_pointer.x = 0.1;
    sfSprite_setScale(gameloop.aim_pointer, gameloop.scale_pointer);
    return gameloop;
}
