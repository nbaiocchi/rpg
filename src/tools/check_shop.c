/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

int check_shop(v_var *a)
{
    if (a->_char[a->_statut->sex].pos_char.x > 1150
    && a->_char[a->_statut->sex].pos_char.x < 1240 &&
    a->_char[a->_statut->sex].pos_char.y > 500 &&
    a->_char[a->_statut->sex].pos_char.y < 600 && a->_statut->statut == 6) {
        a->_items->shop = 1;
        a->_champ->wolf = 0;
        a->_champ->ghost = 0;
        a->_champ->witch = 0;
        a->_champ->fiddle = 0;
        a->_boss->boss = 0;
        return (1);
    } else
        a->_items->shop = 0;
    return (0);
}

int check_shop2(v_var *a)
{
    if (a->_char[a->_statut->sex].pos_char.x > -1150
    && a->_char[a->_statut->sex].pos_char.x < -1010 &&
    a->_char[a->_statut->sex].pos_char.y > -1450 &&
    a->_char[a->_statut->sex].pos_char.y < -1350 && a->_statut->statut == 4) {
        a->_items->shop = 1;
        a->_champ->wolf = 0;
        a->_champ->ghost = 0;
        a->_champ->witch = 0;
        a->_champ->fiddle = 0;
        a->_boss->boss = 0;
        return (1);
    } else
        a->_items->shop = 0;
    return (0);
}