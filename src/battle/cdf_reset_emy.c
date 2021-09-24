/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void cdf_reset(v_var *a)
{
    a->_champ->wolf_pv = 50;
    a->_champ->fiddle_pv = 100;
    a->_champ->witch_pv = 210;
    a->_champ->ghost_pv = 310;
    if (a->_statut->lvl >= 100 && a->_statut->my_lvl < 5)
        up_lvl(a);
    a->_statut->turn = 0;
    a->_tool->ball = 2;
}