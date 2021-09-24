/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_battle(v_var *a)
{

    sfSprite_setPosition(a->_map->s_bt1, a->_map->pos_bt1);
    sfSprite_setPosition(a->_map->s_bt2, a->_map->pos_bt2);
    a->_tool->pos_hit.x = a->_char[a->_statut->sex].pos_char.x - 100;
    a->_tool->pos_hit.y = a->_char[a->_statut->sex].pos_char.y;
    sfSprite_setPosition(a->_tool->s_hit, a->_tool->pos_hit);
    sfSprite_setScale(a->_tool->s_hit, a->_char->size);
    a->_boss->pos_batle.x = a->_char[a->_statut->sex].pos_char.x - 960;
    a->_boss->pos_batle.y = a->_char[a->_statut->sex].pos_char.y - 540;
    sfSprite_setPosition(a->_boss->s_batle, a->_boss->pos_batle);
    sfSprite_setScale(a->_boss->s_batle, a->_map->size);
}

void pv_boss(v_var *a)
{
    if (a->_boss->boss_pv >= 300)
        a->_boss->rect_batle.left = 0;
    if (a->_boss->boss_pv >= 100 && a->_boss->boss_pv < 300)
        a->_boss->rect_batle.left = 640;
    if (a->_boss->boss_pv > 0 && a->_boss->boss_pv < 100)
        a->_boss->rect_batle.left = 1280;
}

void display_battle2(v_var *a)
{
    if (a->_statut->statut == 9) {
        sfSprite_setTextureRect(a->_boss->s_batle, a->_boss->rect_batle);
        sfRenderWindow_drawSprite(a->_window->window, a->_boss->s_batle, NULL);
        pv_boss(a);
    }
    if (a->_statut->turn == 1) {
        enemy_turn(a);
        check_win(a);
    }
}

void display_battle(v_var *a)
{
    if (a->_statut->statut == 7) {
        a->_map->pos_bt1.x = a->_char[a->_statut->sex].pos_char.x - 960;
        a->_map->pos_bt1.y = a->_char[a->_statut->sex].pos_char.y - 540;
        sfSprite_setTextureRect(a->_map->s_bt1, a->_map->rect_bt1);
        sfRenderWindow_drawSprite(a->_window->window, a->_map->s_bt1, NULL);
    }
    if (a->_statut->statut == 8) {
        a->_map->pos_bt2.x = a->_char[a->_statut->sex].pos_char.x - 960;
        a->_map->pos_bt2.y = a->_char[a->_statut->sex].pos_char.y - 540;
        sfSprite_setTextureRect(a->_map->s_bt2, a->_map->rect_bt2);
        sfRenderWindow_drawSprite(a->_window->window, a->_map->s_bt2, NULL);
    }
    display_battle2(a);
}