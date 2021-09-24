/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void text(v_var *a)
{
    a->_menu->font = sfFont_createFromFile("./image/font.ttf");
    a->_menu->txt_gold = sfText_create();
    a->_menu->str_gold = my_convert_int(a->_statut->gold);
    a->_menu->txt_lvl = sfText_create();
    a->_menu->str_lvl = my_convert_int(a->_statut->my_lvl);
    a->_menu->txt_life = sfText_create();
    a->_menu->str_life = my_convert_int(a->_statut->life);
    a->_items->txt_potion = sfText_create();
    a->_items->str_potion = my_convert_int(a->_items->potion);
    a->_items->txt_force = sfText_create();
    a->_items->str_force = my_convert_int(a->_items->force);
    a->_items->txt_helth = sfText_create();
    a->_items->str_helth = my_convert_int(a->_items->helth);
}