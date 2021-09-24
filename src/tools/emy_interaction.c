/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void emy_interaction(v_var *a)
{
    if (a->_champ->fiddle == 1) {
        a->_statut->statut = 7;
    }
    if (a->_champ->ghost == 1) {
        a->_statut->statut = 8;
    }
    if (a->_champ->witch == 1) {
        a->_statut->statut = 7;
    }
    if (a->_champ->wolf == 1) {
        a->_statut->statut = 7;
    }
    if (a->_boss->boss == 1) {
        sfMusic_play(a->_tool->octo);
        sfMusic_setVolume(a->_tool->octo, a->_tool->volume);
        sfMusic_setLoop(a->_tool->octo, sfTrue);
        a->_statut->statut = 9;
    }
}