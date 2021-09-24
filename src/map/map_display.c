/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void first_map(v_var *a)
{
    display_game(a);
    if (a->_statut->sex == 1)
        display_girl(a);
    if (a->_statut->sex == 2)
        display_man(a);
    tools_display(a);
}

void second_map(v_var *a)
{
    display_game_second(a);
    if (a->_statut->sex == 1)
        display_girl(a);
    if (a->_statut->sex == 2)
        display_man(a);
    display_enemy(a);
    tools_display(a);
    health_display(a);
    items_display(a);
    display_text(a);
}

void third_map(v_var *a)
{
    display_game_third(a);
    if (a->_statut->sex == 1)
        display_girl(a);
    if (a->_statut->sex == 2)
        display_man(a);
    display_enemy(a);
    tools_display(a);
    health_display(a);
    items_display(a);
    display_text(a);
}

void last_map(v_var *a)
{
    display_last_game(a);
    if (a->_statut->sex == 1)
        display_girl(a);
    if (a->_statut->sex == 2)
        display_man(a);
    tools_display(a);
    health_display(a);
    items_display(a);
    display_text(a);
}