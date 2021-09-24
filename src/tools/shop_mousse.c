/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void shop_mousse2(v_var *a)
{
    if (a->_window->mouse.x > 810 && a->_window->mouse.x < 1110
        && a->_window->mouse.y > 710 && a->_window->mouse.y < 825) {
        if (a->_statut->gold >= 200) {
            sfSound_play(a->_tool->clic);
            a->_items->helth += 1;
            a->_statut->gold -= 200;
        }
    }
    if (a->_window->mouse.x > 1760 && a->_window->mouse.x < 1830
        && a->_window->mouse.y > 875 && a->_window->mouse.y < 955) {
        sfSound_play(a->_tool->clic);
        a->_statut->statut = a->_statut->stat;
    }
}

void shop_mousse(v_var *a)
{
    if (a->_window->mouse.x > 810 && a->_window->mouse.x < 1110
        && a->_window->mouse.y > 370 && a->_window->mouse.y < 500) {
        if (a->_statut->gold >= 50) {
            sfSound_play(a->_tool->clic);
            a->_items->potion += 1;
            a->_statut->gold -= 50;
        }
    }
    if (a->_window->mouse.x > 810 && a->_window->mouse.x < 1110
        && a->_window->mouse.y > 545 && a->_window->mouse.y < 660) {
        if (a->_statut->gold >= 150) {
            sfSound_play(a->_tool->clic);
            a->_items->force += 1;
            a->_statut->gold -= 150;
        }
    }
    shop_mousse2(a);
}