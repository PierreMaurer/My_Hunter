/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** opening_a_window.c
*/

#ifndef SPRITE_ANIMATION_H
#define SPRITE_ANIMATION_H
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "SFML/Window/Event.h"
#include <SFML/System/Clock.h>
#include <SFML/System.h>
#include <stdio.h>
#include "stdlib.h"
void display_sprite(sfRenderWindow *window);
void move_rect(sfIntRect *rect, int offset, int max_value);

#endif //SPRITE_ANIMATION_H
