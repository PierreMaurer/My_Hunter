/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday13-pierre.maurer
** File description:
** My_Hunter.c
*/

#include <SFML/Graphics.h>
#include "../includes/general.h"
#define WIDTH 1920
#define HEIGHT 1080

int main (int argc, char **argv)
{
    if (argc > 1 && argv[1][0] == '-' && argv[1][1] == 'h')
    {
        my_putstr("Help \n");
        my_putstr("Shoot the fire ball to win \n");
    } else {
        start_menu();
    }
    return 0;
}