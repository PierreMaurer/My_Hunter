/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** opening_a_window.c
*/

#ifndef CLICK_MOUSE_EVENT_H
#define CLICK_MOUSE_EVENT_H
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "SFML/Window/Event.h"
#include "sprite_animation.h"
#include <stdio.h>
#include "stdlib.h"
void analyse_events(sfRenderWindow *window, sfEvent event);
void manage_mouse_click(sfMouseButtonEvent event);
void close_window(sfRenderWindow *window);
#endif //CLICK_MOUSE_EVENT_H
