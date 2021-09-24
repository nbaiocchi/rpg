/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void open_shop(v_var *a)
{
    if (a->_items->shop == 1) {
        a->_statut->stat = a->_statut->statut;
        a->_statut->statut = 10;
    }
}

void a_interaction(v_var *a)
{
    emy_interaction(a);
    open_door(a);
    open_shop(a);
}