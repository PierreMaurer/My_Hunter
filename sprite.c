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
    sfSprite *my_sprite = sfSprite_create();
    sfTexture *my_texture = sfTexture_createFromFile("ressources/sprite.png", NULL);
    sfSprite_setTexture(my_sprite, my_texture, sfFalse);
    sfRenderWindow_drawSprite(window, my_sprite, NULL);
    /*
    sfClock *clock;
    sfTime time;
    float seconds;
    clock = sfClock_create();
    while (sfRenderWindow_isOpen(window))
    {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds/1000000.0;
        if (seconds > 1.0)
        {
            printf("One more second elapsed...");
            sfClock_restart(clock);
        }
    }
     */
}