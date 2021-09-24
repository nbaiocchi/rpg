/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void enemy_turn(v_var *a)
{
    if (a->_champ->fiddle == 1) {
        a->_statut->life -= 30;
    }
    if (a->_champ->wolf == 1) {
        a->_statut->life -= 15;
    }
    if (a->_champ->ghost == 1) {
        a->_statut->life -= 60;
    }
    if (a->_champ->witch == 1) {
        a->_statut->life -= 90;
    }
    if (a->_boss->boss == 1) {
        a->_statut->life -= 150;
    }
    a->_statut->turn = 0;
}