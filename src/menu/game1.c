/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_game(v_var *a)
{
    sfSprite_setPosition(a->_map->s_map1, a->_map->pos_map1);
    sfSprite_setScale(a->_map->s_map1, a->_map->size);
}

void display_game(v_var *a)
{
    sfSprite_setTextureRect(a->_map->s_map1, a->_map->rect_map1);
    sfRenderWindow_drawSprite(a->_window->window, a->_map->s_map1, NULL);
}