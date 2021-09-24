/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_menu(v_var *a)
{
    sfSprite_setPosition(a->_menu->s_menu, a->_menu->pos_menu);
    sfSprite_setPosition(a->_menu->s_poulpi, a->_menu->pos_poulpi);
    sfSprite_setPosition(a->_menu->s_poulpi2, a->_menu->pos_poulpi2);
}

void display_menu(v_var *a)
{
    sfSprite_setTextureRect(a->_menu->s_menu, a->_menu->rect_menu);
    sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_menu, NULL);
    if (a->_window->mouse.x > 785 && a->_window->mouse.x < 1137
    && a->_window->mouse.y > 750 && a->_window->mouse.y < 870) {
        sfSprite_setTextureRect(a->_menu->s_poulpi, a->_menu->rect_poulpi);
        sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_poulpi, NULL);
    }
    if (a->_window->mouse.x > 785 && a->_window->mouse.x < 1137
    && a->_window->mouse.y > 915 && a->_window->mouse.y < 1035) {
        sfSprite_setTextureRect(a->_menu->s_poulpi2, a->_menu->rect_poulpi);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_menu->s_poulpi2, NULL);
    }
}