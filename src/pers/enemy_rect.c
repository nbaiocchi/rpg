/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void rect_ghost(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_emy[0].clock);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        if (a->_emy[1].rect_emy.left != 150)
            a->_emy[1].rect_emy.left += 50;
        else
            a->_emy[1].rect_emy.left = 0;
        sfClock_restart(a->_emy[0].clock);
    }
}

void rect_witch(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_emy[1].clock);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        if (a->_emy[2].rect_emy.left != 150)
            a->_emy[2].rect_emy.left += 50;
        else
            a->_emy[2].rect_emy.left = 0;
        sfClock_restart(a->_emy[1].clock);
    }
}