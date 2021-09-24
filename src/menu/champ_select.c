/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_champ_select(v_var *a)
{
    sfSprite_setPosition(a->_champ->s_choice, a->_champ->pos_choice);
    sfSprite_setPosition(a->_menu->s_select, a->_menu->pos_select);
    sfSprite_setPosition(a->_menu->s_select2, a->_menu->pos_select2);
}

void display_champ_select(v_var *a)
{
    sfSprite_setTextureRect(a->_champ->s_choice, a->_champ->rect_choice);
    sfRenderWindow_drawSprite(a->_window->window, a->_champ->s_choice, NULL);
    if (a->_window->mouse.x > 228 && a->_window->mouse.x < 622
    && a->_window->mouse.y > 203 && a->_window->mouse.y < 846) {
        sfSprite_setTextureRect(a->_menu->s_select, a->_menu->rect_select);
        sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_select, NULL);
    }
    if (a->_window->mouse.x > 1303 && a->_window->mouse.x < 1797
    && a->_window->mouse.y > 203 && a->_window->mouse.y < 846) {
        sfSprite_setTextureRect(a->_menu->s_select2, a->_menu->rect_select);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_menu->s_select2, NULL);
    }
}