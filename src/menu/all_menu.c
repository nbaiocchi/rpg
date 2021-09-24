/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_all_menu(v_var *a)
{
    a->_menu->pos_shop.x = a->_char[a->_statut->sex].pos_char.x - 960;
    a->_menu->pos_shop.y = a->_char[a->_statut->sex].pos_char.y - 540;
    sfSprite_setPosition(a->_menu->s_shop, a->_menu->pos_shop);
    a->_menu->pos_pause.x = a->_char[a->_statut->sex].pos_char.x - 960;
    a->_menu->pos_pause.y = a->_char[a->_statut->sex].pos_char.y - 540;
    sfSprite_setPosition(a->_menu->s_pause, a->_menu->pos_pause);
    a->_menu->pos_expl.x = 0;
    a->_menu->pos_expl.y = 0;
    sfSprite_setPosition(a->_menu->s_expl, a->_menu->pos_expl);
    a->_menu->pos_win.x = a->_char[a->_statut->sex].pos_char.x - 960;
    a->_menu->pos_win.y = a->_char[a->_statut->sex].pos_char.y - 540;
    sfSprite_setPosition(a->_menu->s_win, a->_menu->pos_win);
    sfSprite_setPosition(a->_tool->s_sound, a->_tool->pos_sound);
}

void display_all_menu2(v_var *a)
{
    if (a->_statut->statut == 12) {
        sfSprite_setTextureRect(a->_tool->s_sound, a->_tool->rect_sound);
        sfRenderWindow_drawSprite(a->_window->window, a->_tool->s_sound, NULL);
        if (a->_tool->sound == 0)
            a->_tool->rect_sound.left = 0;
        else if (a->_tool->sound == 1)
            a->_tool->rect_sound.left = 150;
    }
}

void display_all_menu(v_var *a)
{
    if (a->_statut->statut == 10) {
        sfSprite_setTextureRect(a->_menu->s_shop, a->_menu->rect_shop);
        sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_shop, NULL);
    } else if (a->_statut->statut == 11) {
        sfSprite_setTextureRect(a->_menu->s_pause, a->_menu->rect_pause);
        sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_pause, NULL);
    } else if (a->_statut->statut == 12) {
        sfSprite_setTextureRect(a->_menu->s_expl, a->_menu->rect_expl);
        sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_expl, NULL);
    } else if (a->_statut->statut == 13) {
        sfSprite_setTextureRect(a->_menu->s_win, a->_menu->rect_win);
        sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_win, NULL);
    }
    display_all_menu2(a);
}