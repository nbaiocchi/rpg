/*
** EPITECH PROJECT, 2021
** redirection
** File description:
** t
*/

#include "../../include/prototype.h"

void before_game(v_var *a)
{
    if (a->_statut->statut == 0) {
        my_intro(a);
        display(a);
    }
    if (a->_statut->statut == 1) {
        my_menu(a);
        display(a);
    }
    if (a->_statut->statut == 2) {
        my_champ_select(a);
        display(a);
    }
}

void game2(v_var *a)
{
    if (a->_statut->sex == 1)
        my_girl(a);
    if (a->_statut->sex == 2)
        my_man(a);
    my_tools(a);
    my_enemy(a);
    my_text(a);
    display(a);
}

void game(v_var *a)
{
    if (a->_statut->statut == 3)
        my_game(a);
    if (a->_statut->statut == 4)
        my_game_second(a);
    if (a->_statut->statut == 5)
        my_game_third(a);
    if (a->_statut->statut == 6)
        my_last_game(a);
    if (a->_statut->statut != 3) {
        camera(a);
        my_health(a);
        my_items(a);
    }
    game2(a);
}

void battle(v_var *a)
{
    my_battle(a);
    my_enemy(a);
    my_tools(a);
    my_health(a);
    my_text(a);
    display(a);
}

void menu(v_var *a)
{
    my_all_menu(a);
    display(a);
}