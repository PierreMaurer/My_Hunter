/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** opening_a_window.c
*/

#include "../include/entities.h"
#include "../include/sprite_animation.h"

entities_t createFireEntities(int entities_id)
{
    entities_t fire;
    sfVector2f pos;

    fire.id = entities_id;
    fire.is_alive = 1;
    fire.texture = sfTexture_createFromFile("ressources/sprite.png", NULL);
    fire.sprite = sfSprite_create();
    pos.x = 150;
    pos.y = 500;
    sfSprite_setTexture(fire.sprite, fire.texture, sfTrue);
    fire.rect = create_my_rect(110, 110);
    sfSprite_setTextureRect(fire.sprite, fire.rect);
    sfSprite_setPosition(fire.sprite, pos);
    return fire;
}

sfIntRect create_my_rect(int x, int y)
{
    sfIntRect rect;

    rect.top = 0;
    rect.left = 0;
    rect.width = x;
    rect.height = y;
    return rect;
}