/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_last_game(v_var *a)
{
    sfSprite_setPosition(a->_map->s_map4, a->_map->pos_map4);
    sfSprite_setScale(a->_map->s_map4, a->_map->size);
    sfSprite_setPosition(a->_boss->s_boss, a->_boss->pos_boss);
}

void rect_boss(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_emy[1].clock);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.25) {
        if (a->_boss->rect_boss.left != 1400)
            a->_boss->rect_boss.left += 700;
        else
            a->_boss->rect_boss.left = 0;
        sfClock_restart(a->_emy[1].clock);
    }
}

void display_last_game(v_var *a)
{
    sfSprite_setTextureRect(a->_map->s_map4, a->_map->rect_map4);
    sfRenderWindow_drawSprite(a->_window->window, a->_map->s_map4, NULL);
    sfSprite_setTextureRect(a->_boss->s_boss, a->_boss->rect_boss);
    sfRenderWindow_drawSprite(a->_window->window, a->_boss->s_boss, NULL);
    rect_boss(a);
}