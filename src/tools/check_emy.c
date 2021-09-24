/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

int place_emy_4(v_var *a)
{
    if (a->_char[a->_statut->sex].pos_char.x > 330
    && a->_char[a->_statut->sex].pos_char.x < 440 &&
    a->_char[a->_statut->sex].pos_char.y > -2150 &&
    a->_char[a->_statut->sex].pos_char.y < -2050 && a->_statut->statut == 4) {
        a->_champ->fiddle = 1;
        a->_champ->wolf = 0;
        a->_champ->ghost = 0;
        a->_champ->witch = 0;
        return (1);
    } else if (a->_char[a->_statut->sex].pos_char.x > 330
    && a->_char[a->_statut->sex].pos_char.x < 440 &&
    a->_char[a->_statut->sex].pos_char.y > -1000 &&
    a->_char[a->_statut->sex].pos_char.y < -900 && a->_statut->statut == 4) {
        a->_champ->wolf = 1;
        a->_champ->ghost = 0;
        a->_champ->witch = 0;
        a->_champ->fiddle = 0;
        return (1);
    }
    return (0);
}

int place_emy_4_bis(v_var *a)
{
    if (a->_char[a->_statut->sex].pos_char.x > -810
    && a->_char[a->_statut->sex].pos_char.x < -710 &&
    a->_char[a->_statut->sex].pos_char.y > -1370 &&
    a->_char[a->_statut->sex].pos_char.y < -1270 && a->_statut->statut == 4) {
        a->_champ->wolf = 0;
        a->_champ->ghost = 1;
        a->_champ->witch = 0;
        a->_champ->fiddle = 0;
        return (1);
    }
    return (0);
}

int place_emy_5(v_var *a)
{
    if (a->_char[a->_statut->sex].pos_char.x > 900
    && a->_char[a->_statut->sex].pos_char.x < 1020 &&
    a->_char[a->_statut->sex].pos_char.y > -1825 &&
    a->_char[a->_statut->sex].pos_char.y < -1725 && a->_statut->statut == 5) {
        a->_champ->wolf = 0;
        a->_champ->ghost = 0;
        a->_champ->witch = 1;
        a->_champ->fiddle = 0;
        return (1);
    }
    return (0);
}

int place_emy_6(v_var *a)
{
    if (a->_char[a->_statut->sex].pos_char.x > 795
    && a->_char[a->_statut->sex].pos_char.x < 1035 &&
    a->_char[a->_statut->sex].pos_char.y > 0 &&
    a->_char[a->_statut->sex].pos_char.y < 100 && a->_statut->statut == 6
    && a->_items->anal == 2) {
        a->_boss->boss = 1;
        return (1);
    }
    return (0);
}

int check_emy(v_var *a)
{
    if (place_emy_4(a) == 1)
        return (1);
    if (place_emy_4_bis(a) == 1)
        return (1);
    if (place_emy_5(a) == 1)
        return (1);
    if (place_emy_6(a) == 1)
        return (1);
    return (0);
}