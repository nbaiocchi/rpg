/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

int place_map_4_2(v_var *a)
{
    if (a->_char[a->_statut->sex].pos_char.x > 330
    && a->_char[a->_statut->sex].pos_char.x < 440 &&
    a->_char[a->_statut->sex].pos_char.y > -2775 &&
    a->_char[a->_statut->sex].pos_char.y < -2625 && a->_statut->statut == 4) {
        a->_tool->door4 = 1;
        a->_champ->wolf = 0;
        a->_champ->ghost = 0;
        a->_champ->witch = 0;
        a->_champ->fiddle = 0;
        a->_boss->boss = 0;
        return (1);
    } else
        a->_tool->door4 = 0;
    return (0);
}