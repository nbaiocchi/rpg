/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void malloc_1(v_var *a)
{
    a->_window = malloc(sizeof(t_window));
    a->_menu = malloc(sizeof(t_menu));
    a->_statut = malloc(sizeof(t_statut));
    a->_champ = malloc(sizeof(t_champ));
    a->_dialogue = malloc(sizeof(t_dialogue) * 2);
    a->_clock = malloc(sizeof(t_clock));
    a->_map = malloc(sizeof(t_map));
    a->_char = malloc(sizeof(t_char) * 3);
    a->_coli1 = malloc(sizeof(t_coli1) * 250);
    a->_coli2 = malloc(sizeof(t_coli2) * 1000);
    a->_coli3 = malloc(sizeof(t_coli3) * 500);
    a->_coli4 = malloc(sizeof(t_coli4) * 1000);
    a->_tool = malloc(sizeof(t_tool));
    a->_emy = malloc(sizeof(t_emy) * 5);
    a->_life = malloc(sizeof(t_life) * 10);
    a->_boss = malloc(sizeof(t_boss));
    a->_items = malloc(sizeof(t_items) * 4);
}

void malloc_struct(v_var *a)
{
    malloc_1(a);
}

void free_all(v_var *a)
{
    free(a->_window);
    free(a->_menu);
    free(a->_statut);
    free(a->_champ);
    free(a->_clock);
    free(a->_map);
    free(a->_char);
    free(a->_dialogue);
    free(a->_coli1);
    free(a->_coli2);
    free(a->_coli3);
    free(a->_tool);
    free(a->_emy);
    free(a->_boss);
    free(a->_items);
    free(a);
}