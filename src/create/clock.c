/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void create_clock(v_var *a)
{
    a->_clock->clock1 = sfClock_create();
    a->_clock->clock2 = sfClock_create();
    a->_char[1].clock = sfClock_create();
    a->_emy[0].clock = sfClock_create();
    a->_emy[1].clock = sfClock_create();
}