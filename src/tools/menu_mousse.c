/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void pause_mousse(v_var *a)
{
    if (a->_window->mouse.x > 1515 && a->_window->mouse.x < 1815
        && a->_window->mouse.y > 370 && a->_window->mouse.y < 480) {
        sfSound_play(a->_tool->clic);
        a->_statut->statut = a->_statut->stat;
    }
    if (a->_window->mouse.x > 1515 && a->_window->mouse.x < 1815
        && a->_window->mouse.y > 560 && a->_window->mouse.y < 675) {
        sfSound_play(a->_tool->clic);
        sfRenderWindow_close(a->_window->window);
    }
}

void explain_mousse(v_var *a)
{
    if (a->_window->mouse.x > 1550 && a->_window->mouse.x < 1845
        && a->_window->mouse.y > 650 && a->_window->mouse.y < 750) {
        if (a->_tool->sound == 0) {
            sfSound_play(a->_tool->clic);
            a->_tool->sound = 1;
            sfMusic_stop(a->_tool->music);
        } else if (a->_tool->sound == 1) {
            sfSound_play(a->_tool->clic);
            a->_tool->sound = 0;
            sfMusic_play(a->_tool->music);
            sfMusic_setVolume(a->_tool->music, a->_tool->volume);
            sfMusic_setLoop(a->_tool->music, sfTrue);
        }
    }
    if (a->_window->mouse.x > 1760 && a->_window->mouse.x < 1845
        && a->_window->mouse.y > 840 && a->_window->mouse.y < 920)
        a->_statut->statut = 1;
}

void last_mousse(v_var *a)
{
    if (a->_window->mouse.x > 846 && a->_window->mouse.x < 1071
        && a->_window->mouse.y > 936 && a->_window->mouse.y < 984) {
        sfSound_play(a->_tool->clic);
        sfRenderWindow_close(a->_window->window);
    }
}