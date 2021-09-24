/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void dialogue_past(v_var *a)
{
    if (a->_statut->statut == 0) {
        if (a->_dialogue[1].rect_dialogue.left != 5520)
            a->_dialogue[1].rect_dialogue.left += 920;
        else
            a->_statut->statut = 1;
    }
}