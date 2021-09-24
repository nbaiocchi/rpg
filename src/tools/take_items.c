/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void life_upgrade(v_var *a)
{
    if (a->_statut->life + 50 > a->_statut->pv_max)
        a->_statut->life = a->_statut->pv_max;
    else
        a->_statut->life += 50;
}

void take_items(v_var *a)
{
    if (a->_window->mouse.x > 10 && a->_window->mouse.x < 103
        && a->_window->mouse.y > 410 && a->_window->mouse.y < 495) {
        if (a->_items->potion > 0) {
            a->_items->potion -= 1;
            life_upgrade(a);
        }
    } else if (a->_window->mouse.x > 10 && a->_window->mouse.x < 103
        && a->_window->mouse.y > 512 && a->_window->mouse.y < 596)  {
        if (a->_items->force > 0) {
            a->_items->force -= 1;
            a->_statut->damage += 15;
        }
    }else if (a->_window->mouse.x > 10 && a->_window->mouse.x < 103
        && a->_window->mouse.y > 612 && a->_window->mouse.y < 700) {
        if (a->_items->helth > 0) {
            a->_items->helth -= 1;
            a->_statut->pv_max += 50;
            a->_statut->life += 50;
        }
    }
}