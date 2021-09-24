/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void basic_attack(v_var *a)
{
    if (a->_champ->fiddle == 1) {
        a->_champ->fiddle_pv -= a->_statut->damage;
    }
    if (a->_champ->wolf == 1) {
        a->_champ->wolf_pv -= a->_statut->damage;
    }
    if (a->_champ->ghost == 1) {
        a->_champ->ghost_pv -= a->_statut->damage;
    }
    if (a->_champ->witch == 1) {
        a->_champ->witch_pv -= a->_statut->damage;
    }
    if (a->_boss->boss == 1) {
        a->_boss->boss_pv -= a->_statut->damage;
    }
}

void crit_attack(v_var *a)
{
    if (a->_champ->fiddle == 1) {
        a->_champ->fiddle_pv -= (a->_statut->damage + a->_statut->damage/4);
    }
    if (a->_champ->wolf == 1) {
        a->_champ->wolf_pv -= (a->_statut->damage + a->_statut->damage/4);
    }
    if (a->_champ->ghost == 1) {
        a->_champ->ghost_pv -= (a->_statut->damage + a->_statut->damage/4);
    }
    if (a->_champ->witch == 1) {
        a->_champ->witch_pv -= (a->_statut->damage + a->_statut->damage/4);
    }
    if (a->_boss->boss == 1) {
        a->_boss->boss_pv -= (a->_statut->damage + a->_statut->damage/4);
    }
}

void space_interaction(v_var *a)
{
    if ((a->_statut->statut >= 7 && a->_statut->statut <= 9)
    && a->_statut->turn == 0) {
        if ((a->_tool->pos_ball.x > a->_char[a->_statut->sex].pos_char.x - 390
        && a->_tool->pos_ball.x < a->_char[a->_statut->sex].pos_char.x - 330)
        || (a->_tool->pos_ball.x > a->_char[a->_statut->sex].pos_char.x + 320
        && a->_tool->pos_ball.x < a->_char[a->_statut->sex].pos_char.x + 380)) {
            basic_attack(a);
            a->_statut->hit = 1;
        }
        if (a->_tool->pos_ball.x > a->_char[a->_statut->sex].pos_char.x - 15
        && a->_tool->pos_ball.x < a->_char[a->_statut->sex].pos_char.x + 15) {
            crit_attack(a);
            a->_statut->hit = 1;
        } else
            a->_statut->turn = 1;
        a->_statut->turn = 1;
        check_win(a);
    }
}