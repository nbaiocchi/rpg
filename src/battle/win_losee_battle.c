/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void make_reset(v_var *a)
{
    if (a->_statut->win == 1 && a->_boss->boss == 0) {
        enemy_reset(a);
    } else if (a->_statut->win == 2)
        reset_lose(a);
    if (a->_statut->win == 1 && a->_boss->boss == 1) {
        a->_statut->statut = 13;
        sfMusic_stop(a->_tool->octo);
        sfMusic_play(a->_tool->music);
        sfMusic_setVolume(a->_tool->music, a->_tool->volume);
        sfMusic_setLoop(a->_tool->music, sfTrue);
    }
    a->_statut->win = 0;
}

void check_win(v_var *a)
{
    if (a->_statut->life <= 0)
        a->_statut->win = 2;
    if (a->_champ->fiddle_pv <= 0)
        a->_statut->win = 1;
    if (a->_champ->wolf_pv <= 0)
        a->_statut->win = 1;
    if (a->_champ->ghost_pv <= 0)
        a->_statut->win = 1;
    if (a->_champ->witch_pv <= 0)
        a->_statut->win = 1;
    if (a->_boss->boss_pv <= 0)
        a->_statut->win = 1;
    make_reset(a);
}