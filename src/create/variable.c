/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void variable_1(v_var *a)
{
    a->_statut->statut = 0;
    a->_clock->second = 0;
    a->_map->size.x = 3;
    a->_map->size.y = 3;
    a->_map->size2.x = 5;
    a->_map->size2.y = 5;
    a->_char->size.x = 2;
    a->_char->size.y = 2;
    a->_statut->sex = 0;
    a->_statut->place = 0;
    a->_tool->door1 = 0;
    a->_tool->door2 = 0;
    a->_tool->door3 = 0;
    a->_tool->door4 = 0;
    a->_tool->door5 = 0;
    a->_champ->fiddle = 0;
    a->_champ->ghost = 0;
    a->_champ->witch = 0;
    a->_champ->wolf = 0;
    a->_tool->ball = 2;
}

void variable_2(v_var *a)
{
    a->_statut->life = 100;
    a->_statut->lvl = 0;
    a->_statut->my_lvl = 1;
    a->_statut->lvl_max = 5;
    a->_statut->damage = 15;
    a->_statut->win = 0;
    a->_statut->gold = 50;
    a->_statut->turn = 0;
    a->_statut->pv_max = 100;
    a->_champ->fiddle_pv = 100;
    a->_champ->ghost_pv = 310;
    a->_champ->witch_pv = 210;
    a->_champ->wolf_pv = 50;
    a->_statut->hit = 0;
    a->_boss->rect = 0;
    a->_boss->boss = 0;
    a->_boss->boss_pv = 500;
    a->_boss->end_game = 0;
}

void variable_3(v_var *a)
{
    a->_items->potion = 0;
    a->_items->force = 0;
    a->_items->helth = 0;
    a->_items->anal = 0;
    a->_items->g_anal = 0;
    a->_items->w_anal = 0;
    a->_statut->stat = 0;
    a->_statut->x = 1920;
    a->_statut->y = 1080;
    a->_tool->volume = 30;
    a->_tool->volume2 = 20;
    a->_tool->sound = 0;
}

void variable(v_var *a)
{
    variable_1(a);
    variable_2(a);
    variable_3(a);
}