/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

int place_map_3(v_var *a)
{
    if (a->_char[a->_statut->sex].pos_char.x > 820
    && a->_char[a->_statut->sex].pos_char.x < 1010 &&
    a->_char[a->_statut->sex].pos_char.y > 250 &&
    a->_char[a->_statut->sex].pos_char.y < 340 && a->_statut->statut == 3) {
        a->_tool->door1 = 1;
        a->_champ->wolf = 0;
        a->_champ->ghost = 0;
        a->_champ->witch = 0;
        a->_champ->fiddle = 0;
        a->_boss->boss = 0;
        return (1);
    } else
        a->_tool->door1 = 0;
    return (0);
}

int place_map_4(v_var *a)
{
    if (a->_char[a->_statut->sex].pos_char.x > 1185
    && a->_char[a->_statut->sex].pos_char.x < 1330 &&
    a->_char[a->_statut->sex].pos_char.y > 345 &&
    a->_char[a->_statut->sex].pos_char.y < 435 && a->_statut->statut == 4) {
        a->_tool->door2 = 1;
        a->_champ->wolf = 0;
        a->_champ->ghost = 0;
        a->_champ->witch = 0;
        a->_champ->fiddle = 0;
        a->_boss->boss = 0;
        return (1);
    } else
        a->_tool->door2 = 0;
    return (0);
}

int place_map_5(v_var *a)
{
    if (a->_char[a->_statut->sex].pos_char.x > 900
    && a->_char[a->_statut->sex].pos_char.x < 1020 &&
    a->_char[a->_statut->sex].pos_char.y > -2430 &&
    a->_char[a->_statut->sex].pos_char.y < -2330 && a->_statut->statut == 5) {
        a->_tool->door3 = 1;
        a->_champ->wolf = 0;
        a->_champ->ghost = 0;
        a->_champ->witch = 0;
        a->_champ->fiddle = 0;
        a->_boss->boss = 0;
        return (1);
    } else
        a->_tool->door3 = 0;
    return (0);
}

int place_map_6(v_var *a)
{
    if (a->_char[a->_statut->sex].pos_char.x > 795
    && a->_char[a->_statut->sex].pos_char.x < 1035 &&
    a->_char[a->_statut->sex].pos_char.y > 700 &&
    a->_char[a->_statut->sex].pos_char.y < 800 && a->_statut->statut == 6) {
        a->_tool->door5 = 1;
        a->_champ->wolf = 0;
        a->_champ->ghost = 0;
        a->_champ->witch = 0;
        a->_champ->fiddle = 0;
        a->_boss->boss = 0;
        return (1);
    } else
        a->_tool->door5 = 0;
    return (0);
}

int check_place(v_var *a)
{
    if (place_map_3(a) == 1)
        return (1);
    if (place_map_4(a) == 1)
        return (1);
    if (place_map_4_2(a) == 1)
        return (1);
    if (place_map_5(a) == 1)
        return (1);
    if (place_map_6(a) == 1)
        return (1);
    if (check_shop(a) == 1)
        return (1);
    if (check_shop2(a) == 1)
        return (1);
    return (0);
}