/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_game_second(v_var *a)
{
    sfSprite_setPosition(a->_map->s_map2, a->_map->pos_map2);
    sfSprite_setScale(a->_map->s_map2, a->_map->size);
}

void display_game_second(v_var *a)
{
    sfSprite_setTextureRect(a->_map->s_map2, a->_map->rect_map2);
    sfRenderWindow_drawSprite(a->_window->window, a->_map->s_map2, NULL);
}