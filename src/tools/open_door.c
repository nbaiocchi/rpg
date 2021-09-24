/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void open_door3(v_var *a)
{
    if (a->_tool->door4 == 1) {
        a->_statut->statut = 6;
        a->_tool->door4 = 0;
        a->_char[a->_statut->sex].pos_char.x = 915;
        a->_char[a->_statut->sex].pos_char.y = 750;
        a->_char[a->_statut->sex].rect_char.left = 50;
        a->_champ->wolf = 0;
        a->_champ->ghost = 0;
        a->_champ->witch = 0;
        a->_champ->fiddle = 0;
    }
    if (a->_tool->door5 == 1) {
        a->_statut->statut = 4;
        a->_tool->door5 = 0;
        a->_char[a->_statut->sex].pos_char.x = 385;
        a->_char[a->_statut->sex].pos_char.y = -2700;
        a->_char[a->_statut->sex].rect_char.left = 350;
        a->_boss->boss = 0;
    }
}

void open_door2(v_var *a)
{
    if (a->_tool->door3 == 1) {
        a->_statut->statut = 6;
        a->_tool->door3 = 0;
        a->_char[a->_statut->sex].pos_char.x = 915;
        a->_char[a->_statut->sex].pos_char.y = 750;
        a->_char[a->_statut->sex].rect_char.left = 50;
        a->_champ->wolf = 0;
        a->_champ->ghost = 0;
        a->_champ->witch = 0;
        a->_champ->fiddle = 0;
    }
    open_door3(a);
}

void open_door(v_var *a)
{
    if (a->_tool->door1 == 1) {
        a->_statut->statut = 4;
        a->_tool->door1 = 0;
        a->_char[a->_statut->sex].pos_char.y = 955;
        a->_char[a->_statut->sex].rect_char.left = 50;
    }
    if (a->_tool->door2 == 1) {
        a->_statut->statut = 5;
        a->_tool->door2 = 0;
        a->_char[a->_statut->sex].pos_char.x = 435;
        a->_char[a->_statut->sex].pos_char.y = 750;
        a->_char[a->_statut->sex].rect_char.left = 200;
    }
    open_door2(a);
}