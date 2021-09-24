/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_health(v_var *a)
{
    int x = 399;

    a->_tool->pos_heal.x = a->_char[a->_statut->sex].pos_char.x + 320;
    a->_tool->pos_heal.y = a->_char[a->_statut->sex].pos_char.y + 420;
    sfSprite_setPosition(a->_tool->s_heal, a->_tool->pos_heal);
    for (int i = 0; i != 10; i += 1) {
        a->_life[i].pos_life.x = a->_char[a->_statut->sex].pos_char.x + x;
        a->_life[i].pos_life.y = a->_char[a->_statut->sex].pos_char.y + 433;
        sfSprite_setPosition(a->_life[i].s_life, a->_life[i].pos_life);
        a->_life[i].pos_lvl.x = a->_char[a->_statut->sex].pos_char.x + x;
        a->_life[i].pos_lvl.y = a->_char[a->_statut->sex].pos_char.y + 454;
        sfSprite_setPosition(a->_life[i].s_lvl, a->_life[i].pos_lvl);
        x += 46;
    }
}

void health_display(v_var *a)
{
    int lv = check_lvl(a);
    int l = check_life(a);

    while (lv != -1) {
        sfSprite_setTextureRect(a->_life[lv].s_lvl, a->_life[lv].rect_lvl);
        sfRenderWindow_drawSprite(a->_window->window, a->_life[lv].s_lvl, NULL);
        lv -= 1;
    }
    while (l != -1) {
        sfSprite_setTextureRect(a->_life[l].s_life, a->_life[l].rect_life);
        sfRenderWindow_drawSprite(a->_window->window, a->_life[l].s_life, NULL);
        l -= 1;
    }
    sfSprite_setTextureRect(a->_tool->s_heal, a->_tool->rect_heal);
    sfRenderWindow_drawSprite(a->_window->window, a->_tool->s_heal, NULL);
}