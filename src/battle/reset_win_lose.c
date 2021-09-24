/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void change_life_dmg(v_var *a)
{
    if (a->_statut->my_lvl == 2 || a->_statut->my_lvl == 3) {
        a->_statut->pv_max += 50;
        a->_statut->life += 50;
    } else if (a->_statut->my_lvl == 4) {
        a->_statut->pv_max += 100;
        a->_statut->life += 100;
    }
    if (a->_statut->my_lvl == 5) {
        a->_statut->pv_max += 200;
        a->_statut->life += 200;
    }
    a->_statut->damage += 30;
}

void up_lvl(v_var *a)
{
    int b = 0;

    if (a->_statut->lvl == 100) {
        a->_statut->my_lvl += 1;
        a->_statut->lvl = 0;
    } else if (a->_statut->lvl > 100) {
        b = a->_statut->lvl - 100;
        a->_statut->my_lvl += 1;
        a->_statut->lvl = 0;
        a->_statut->lvl += b;
    }
    change_life_dmg(a);
}

void enemy_rest_b(v_var *a)
{
    if (a->_champ->witch == 1) {
        a->_statut->statut = 5;
        a->_statut->lvl += 75;
        a->_statut->gold += 100;
        a->_items->w_anal = 1;
    }
    if (a->_champ->ghost == 1) {
        a->_statut->statut = 4;
        a->_statut->lvl += 100;
        a->_statut->gold += 150;
        a->_items->g_anal = 1;
    }
}

void enemy_reset(v_var *a)
{
    if (a->_champ->wolf == 1) {
        a->_statut->statut = 4;
        a->_statut->lvl += 35;
        a->_statut->gold += 50;
    } else if (a->_champ->fiddle == 1) {
        a->_statut->statut = 4;
        a->_statut->lvl += 50;
        a->_statut->gold += 50;
    }

    cdf_reset(a);
}

void reset_lose(v_var *a)
{
    a->_champ->wolf_pv = 50;
    a->_champ->fiddle_pv = 100;
    a->_champ->witch_pv = 210;
    a->_champ->ghost_pv = 310;
    a->_boss->boss_pv = 500;
    a->_statut->statut = 4;
    a->_char[a->_statut->sex].pos_char.y = 955;
    a->_char[a->_statut->sex].pos_char.x = 900;
    a->_char[a->_statut->sex].rect_char.left = 50;
    a->_statut->life = a->_statut->pv_max;
    a->_statut->gold = 0;
    a->_statut->turn = 0;
    a->_tool->ball = 2;
    sfMusic_stop(a->_tool->octo);
}