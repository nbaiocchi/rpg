/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void stat_0(v_var *a)
{
    if (a->_statut->statut == 0) {
        if (a->_window->mouse.x > 1825 && a->_window->mouse.x < 1885
        && a->_window->mouse.y > 30 && a->_window->mouse.y < 140) {
            sfSound_play(a->_tool->clic);
            a->_statut->statut = 1;
        }
    }
}

void stat_1(v_var *a)
{
    if (a->_statut->statut == 1) {
        if (a->_window->mouse.x > 785 && a->_window->mouse.x < 1137
        && a->_window->mouse.y > 750 && a->_window->mouse.y < 870) {
            sfSound_play(a->_tool->clic);
            a->_statut->statut = 2;
        }
        if (a->_window->mouse.x > 785 && a->_window->mouse.x < 1137
        && a->_window->mouse.y > 910 && a->_window->mouse.y < 1032) {
            sfSound_play(a->_tool->clic);
            sfRenderWindow_close(a->_window->window);
        }
    }
}

void stat_2(v_var *a)
{
    if (a->_statut->statut == 2) {
        if (a->_window->mouse.x > 30 && a->_window->mouse.x < 165
        && a->_window->mouse.y > 30 && a->_window->mouse.y < 87)
            a->_statut->statut = 1;
        if (a->_window->mouse.x > 225 && a->_window->mouse.x < 625
        && a->_window->mouse.y > 215 && a->_window->mouse.y < 860) {
            sfSound_play(a->_tool->clic);
            a->_statut->sex = 1;
            a->_statut->statut = 3;
        }
        if (a->_window->mouse.x > 1295 && a->_window->mouse.x < 1700
        && a->_window->mouse.y > 215 && a->_window->mouse.y < 860) {
            sfSound_play(a->_tool->clic);
            a->_statut->sex = 2;
            a->_statut->statut = 3;
        }
    }
}

void open_menu(v_var *a)
{
    if (a->_window->mouse.x > 1810 && a->_window->mouse.x < 1920
        && a->_window->mouse.y > 0 && a->_window->mouse.y < 125
        && a->_statut->statut >= 4 && a->_statut->statut <= 6) {
        sfSound_play(a->_tool->clic);
        a->_statut->stat = a->_statut->statut;
        a->_statut->statut = 11;
    }
    if (a->_window->mouse.x > 0 && a->_window->mouse.x < 120
        && a->_window->mouse.y > 0 && a->_window->mouse.y < 125
        && a->_statut->statut == 1) {
        sfSound_play(a->_tool->clic);
        a->_statut->statut = 12;
    }
}

void event_mousepress(v_var *a)
{
    stat_0(a);
    stat_1(a);
    stat_2(a);
    if (a->_statut->statut >= 4 && a->_statut->statut <= 6)
        take_items(a);
    if (a->_statut->statut == 10)
        shop_mousse(a);
    if (a->_statut->statut == 11)
        pause_mousse(a);
    if (a->_statut->statut == 12)
        explain_mousse(a);
    if (a->_statut->statut == 13)
        last_mousse(a);
    open_menu(a);
}