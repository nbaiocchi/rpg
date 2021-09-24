/*
** EPITECH PROJECT, 2021
** t
** File description:
** 1t
*/

#include "../../include/prototype.h"

void my_girl(v_var *a)
{
    sfSprite_setPosition(a->_char[1].s_char, a->_char[1].pos_char);
    sfSprite_setScale(a->_char[1].s_char, a->_char->size);
}

void display_girl(v_var *a)
{
    sfSprite_setTextureRect(a->_char[1].s_char, a->_char[1].rect_char);
    sfRenderWindow_drawSprite(a->_window->window, a->_char[1].s_char, NULL);
}