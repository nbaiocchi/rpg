/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_game_third(v_var *a)
{
    sfSprite_setPosition(a->_map->s_map3, a->_map->pos_map3);
    sfSprite_setScale(a->_map->s_map3, a->_map->size);
}

void display_game_third(v_var *a)
{
    sfSprite_setTextureRect(a->_map->s_map3, a->_map->rect_map3);
    sfRenderWindow_drawSprite(a->_window->window, a->_map->s_map3, NULL);
}