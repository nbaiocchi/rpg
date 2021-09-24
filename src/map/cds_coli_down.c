/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

int down1(v_var *a)
{
    for (int i = 0; i != a->_coli1->size; i += 1) {
        if (((a->_char[a->_statut->sex].pos_char.y + 125
        <= a->_coli1[i].pos_coli.y + 30
        && a->_char[a->_statut->sex].pos_char.y + 125 >= a->_coli1[i].pos_coli.y
        && a->_char[a->_statut->sex].pos_char.x <= a->_coli1[i].pos_coli.x + 30
        && a->_char[a->_statut->sex].pos_char.x >= a->_coli1[i].pos_coli.x) ||
        (a->_char[a->_statut->sex].pos_char.y + 125
        <= a->_coli1[i].pos_coli.y + 30
        && a->_char[a->_statut->sex].pos_char.y + 125
        >= a->_coli1[i].pos_coli.y
        && a->_char[a->_statut->sex].pos_char.x + 90
        <= a->_coli1[i].pos_coli.x + 30
        && a->_char[a->_statut->sex].pos_char.x + 90
        >= a->_coli1[i].pos_coli.x))
        && a->_statut->statut == 3)
            return (1);
    }
    return (0);
}

int down2(v_var *a)
{
    for (int i = 0; i != a->_coli2->size; i += 1) {
        if (((a->_char[a->_statut->sex].pos_char.y + 125
        <= a->_coli2[i].pos_coli.y + 30
        && a->_char[a->_statut->sex].pos_char.y + 125 >= a->_coli2[i].pos_coli.y
        && a->_char[a->_statut->sex].pos_char.x <= a->_coli2[i].pos_coli.x + 30
        && a->_char[a->_statut->sex].pos_char.x >= a->_coli2[i].pos_coli.x) ||
        (a->_char[a->_statut->sex].pos_char.y + 125
        <= a->_coli2[i].pos_coli.y + 30
        && a->_char[a->_statut->sex].pos_char.y + 125 >= a->_coli2[i].pos_coli.y
        && a->_char[a->_statut->sex].pos_char.x + 90
        <= a->_coli2[i].pos_coli.x + 30
        && a->_char[a->_statut->sex].pos_char.x + 90
        >= a->_coli2[i].pos_coli.x))
        && a->_statut->statut == 4)
            return (1);
    }
    return (0);
}

int down3(v_var *a)
{
    for (int i = 0; i != a->_coli3->size; i += 1) {
        if (((a->_char[a->_statut->sex].pos_char.y + 125
        <= a->_coli3[i].pos_coli.y + 30
        && a->_char[a->_statut->sex].pos_char.y + 125 >= a->_coli3[i].pos_coli.y
        && a->_char[a->_statut->sex].pos_char.x <= a->_coli3[i].pos_coli.x + 30
        && a->_char[a->_statut->sex].pos_char.x >= a->_coli3[i].pos_coli.x) ||
        (a->_char[a->_statut->sex].pos_char.y + 125
        <= a->_coli3[i].pos_coli.y + 30
        && a->_char[a->_statut->sex].pos_char.y + 125 >= a->_coli3[i].pos_coli.y
        && a->_char[a->_statut->sex].pos_char.x + 90
        <= a->_coli3[i].pos_coli.x + 30
        && a->_char[a->_statut->sex].pos_char.x + 90
        >= a->_coli3[i].pos_coli.x))
        && a->_statut->statut == 5)
            return (1);
    }
    return (0);
}

int down4(v_var *a)
{
    for (int i = 0; i != a->_coli4->size; i += 1) {
        if (((a->_char[a->_statut->sex].pos_char.y + 125
        <= a->_coli4[i].pos_coli.y + 30
        && a->_char[a->_statut->sex].pos_char.y + 125 >= a->_coli4[i].pos_coli.y
        && a->_char[a->_statut->sex].pos_char.x <= a->_coli4[i].pos_coli.x + 30
        && a->_char[a->_statut->sex].pos_char.x >= a->_coli4[i].pos_coli.x) ||
        (a->_char[a->_statut->sex].pos_char.y + 125
        <= a->_coli4[i].pos_coli.y + 30
        && a->_char[a->_statut->sex].pos_char.y + 125 >= a->_coli4[i].pos_coli.y
        && a->_char[a->_statut->sex].pos_char.x + 90
        <= a->_coli4[i].pos_coli.x + 30
        && a->_char[a->_statut->sex].pos_char.x + 90
        >= a->_coli4[i].pos_coli.x))
        && a->_statut->statut == 6)
            return (1);
    }
    return (0);
}