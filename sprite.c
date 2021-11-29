/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** opening_a_window.c
*/

#include "include/sprite_animation.h"
#include <SFML/System/Clock.h>
#include <SFML/System/Types.h>

void display_sprite(sfRenderWindow *window)
{
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 110;
    rect.height = 110;
    int y = 500;
    int z = 500;
    sfVector2f vector = {y, z};
    sfSprite *my_sprite = sfSprite_create();
    sfTexture *my_texture = sfTexture_createFromFile("ressources/sprite.png", NULL);
    sfSprite_setTexture(my_sprite, my_texture, sfFalse);
    sfSprite_setTextureRect(my_sprite, rect);

    sfClock *clock;
    sfTime time;
    float seconds;
    clock = sfClock_create();
    time = sfClock_getElapsedTime(clock);
    seconds += time.microseconds / 1000000.0;
    printf("%f", seconds);
    if (seconds > 1.0)
    {
        printf("oui");
        sfClock_restart(clock);
    }
    z += 5;
    sfSprite_setPosition(my_sprite, vector);
    sfRenderWindow_drawSprite(window, my_sprite, NULL);
}