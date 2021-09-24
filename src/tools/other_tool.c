/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void cdf_ball(v_var *a)
{
    if (a->_tool->ball == 0) {
        if (a->_tool->pos_ball.x > a->_char[a->_statut->sex].pos_char.x - 400)
            a->_tool->pos_ball.x -= 30;
        else
            a->_tool->ball = 1;
    }
    if (a->_tool->ball == 1) {
        if (a->_tool->pos_ball.x < a->_char[a->_statut->sex].pos_char.x + 380)
            a->_tool->pos_ball.x += 30;
        else
            a->_tool->ball = 0;
    }
}

void pose_ball(v_var *a)
{
    if (a->_tool->ball == 2)
        a->_tool->ball = 0;
    a->_clock->time = sfClock_getElapsedTime(a->_clock->clock2);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        cdf_ball(a);
        sfClock_restart(a->_clock->clock2);
    }
}

void rect_particules(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_clock->clock2);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.2) {
        if (a->_tool->rect_partic.left != 5760) {
            a->_tool->rect_partic.left += 1920;
        } else
            a->_tool->rect_partic.left = 0;
        sfClock_restart(a->_clock->clock2);
    }
}