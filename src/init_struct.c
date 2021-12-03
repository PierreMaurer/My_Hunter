/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#include "../includes/general.h"

menu_t init_menu(void)
{
    menu_t main;

    main.header_pos.x = 706;
    main.header_pos.y = 370;
    main.footer_pos.x = 412;
    main.footer_pos.y = 500;
    main.fire_entities_pos.x = 820;
    main.fire_entities_pos.y = 00;
    main.scale.x = 1;
    main.scale.y = 1;
    main.background_texture = sfTexture_createFromFile("ressources/background.png", NULL);
    main.fire_entities_1 = sfTexture_createFromFile("ressources/fire_ball_1.png", NULL);
    main.fire_entities_2 = sfTexture_createFromFile("ressources/fire_ball_2.png", NULL);
    main.fire_entities_3 = sfTexture_createFromFile("ressources/fire_ball_3.png", NULL);
    main.fire_entities_4 = sfTexture_createFromFile("ressources/fire_ball_4.png", NULL);
    main.fire_entities_5 = sfTexture_createFromFile("ressources/fire_ball_5.png", NULL);
    main.fire_entities_6 = sfTexture_createFromFile("ressources/fire_ball_6.png", NULL);
    main.font = sfFont_createFromFile("ressources/FIREBOMB.TTF");
    main = init_text_menu(main);
    return main;
}

menu_t init_text_menu(menu_t main)
{
    main.header = sfText_create();
    sfText_setString(main.header, "FireHunter");
    sfText_setPosition(main.header, main.header_pos);
    sfText_setCharacterSize(main.header, 100);
    sfText_setFont(main.header, main.font);
    main.footer = sfText_create();
    sfText_setString(main.footer, "Press Enter to start");
    sfText_setPosition(main.footer, main.footer_pos);
    sfText_setCharacterSize(main.footer, 100);
    sfText_setFont(main.footer, main.font);
    main.fire_sprite = sfSprite_create();
    main.background = sfSprite_create();
    sfSprite_setTexture(main.background, main.background_texture, sfTrue);
    sfSprite_setScale(main.fire_sprite, main.scale);
    return main;
}

menu_t init_end_menu(void)
{
    menu_t main;

    main.header_pos.x = 400;
    main.header_pos.y = 370;
    main.footer_pos.x = 412;
    main.footer_pos.y = 500;
    main.fire_entities_pos.x = 820;
    main.fire_entities_pos.y = 00;
    main.scale.x = 1;
    main.scale.y = 1;
    main.background_texture = sfTexture_createFromFile("ressources/background.png", NULL);
    main.fire_entities_1 = sfTexture_createFromFile("ressources/fire_ball_1.png", NULL);
    main.fire_entities_2 = sfTexture_createFromFile("ressources/fire_ball_2.png", NULL);
    main.fire_entities_3 = sfTexture_createFromFile("ressources/fire_ball_3.png", NULL);
    main.fire_entities_4 = sfTexture_createFromFile("ressources/fire_ball_4.png", NULL);
    main.fire_entities_5 = sfTexture_createFromFile("ressources/fire_ball_5.png", NULL);
    main.fire_entities_6 = sfTexture_createFromFile("ressources/fire_ball_6.png", NULL);
    main.font = sfFont_createFromFile("ressources/FIREBOMB.TTF");
    main = init_text_end_menu(main);
    return main;
}

menu_t init_text_end_menu(menu_t main)
{
    main.header = sfText_create();
    sfText_setString(main.header, "Thanks to have played !");
    sfText_setPosition(main.header, main.header_pos);
    sfText_setCharacterSize(main.header, 100);
    sfText_setFont(main.header, main.font);
    main.footer = sfText_create();
    sfText_setString(main.footer, "Press Enter to restart");
    sfText_setPosition(main.footer, main.footer_pos);
    sfText_setCharacterSize(main.footer, 100);
    sfText_setFont(main.footer, main.font);
    main.fire_sprite = sfSprite_create();
    main.background = sfSprite_create();
    sfSprite_setTexture(main.background, main.background_texture, sfTrue);
    sfSprite_setScale(main.fire_sprite, main.scale);
    return main;
}