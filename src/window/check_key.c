/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void key_up(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_char[1].clock);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        a->_char[a->_statut->sex].pos_char.y -= 25;
        if (a->_char[a->_statut->sex].rect_char.left < 100)
            a->_char[a->_statut->sex].rect_char.left += 50;
        else
            a->_char[a->_statut->sex].rect_char.left = 0;
        sfClock_restart(a->_char[1].clock);
    }
}

void key_right(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_char[1].clock);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        a->_char[a->_statut->sex].pos_char.x += 25;
        if (a->_char[a->_statut->sex].rect_char.left < 250
        && a->_char[a->_statut->sex].rect_char.left > 100)
            a->_char[a->_statut->sex].rect_char.left += 50;
        else
            a->_char[a->_statut->sex].rect_char.left = 150;
        sfClock_restart(a->_char[1].clock);
    }
}

void key_down(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_char[1].clock);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        a->_char[a->_statut->sex].pos_char.y += 25;
        if (a->_char[a->_statut->sex].rect_char.left < 400
        && a->_char[a->_statut->sex].rect_char.left > 250)
            a->_char[a->_statut->sex].rect_char.left += 50;
        else
            a->_char[a->_statut->sex].rect_char.left = 300;
        sfClock_restart(a->_char[1].clock);
    }
}

void key_left(v_var *a)
{
    a->_clock->time = sfClock_getElapsedTime(a->_char[1].clock);
    a->_clock->second = a->_clock->time.microseconds / 1000000.0;
    if (a->_clock->second > 0.1) {
        a->_char[a->_statut->sex].pos_char.x -= 25;
        if (a->_char[a->_statut->sex].rect_char.left < 550
        && a->_char[a->_statut->sex].rect_char.left > 400)
            a->_char[a->_statut->sex].rect_char.left += 50;
        else
            a->_char[a->_statut->sex].rect_char.left = 450;
        sfClock_restart(a->_char[1].clock);
    }
}

void check_key(v_var *a)
{
    if (a->_statut->statut >= 3 && a->_statut->statut <= 6) {
        if (sfKeyboard_isKeyPressed(sfKeyUp) && colision_up(a) == 0) {
            key_up(a);
        } else if (sfKeyboard_isKeyPressed(sfKeyUp) && colision_up(a) == 1)
            a->_char[a->_statut->sex].rect_char.left = 50;
        if (sfKeyboard_isKeyPressed(sfKeyRight) && colision_rigt(a) == 0) {
            key_right(a);
        } else if (sfKeyboard_isKeyPressed(sfKeyRight) && colision_rigt(a) == 1)
            a->_char[a->_statut->sex].rect_char.left = 200;
        if (sfKeyboard_isKeyPressed(sfKeyDown) && colision_down(a) == 0) {
            key_down(a);
        } else if (sfKeyboard_isKeyPressed(sfKeyDown) && colision_down(a) == 1)
            a->_char[a->_statut->sex].rect_char.left = 350;
        if (sfKeyboard_isKeyPressed(sfKeyLeft) && colision_left(a) == 0) {
            key_left(a);
        } else if (sfKeyboard_isKeyPressed(sfKeyLeft) && colision_left(a) == 1)
            a->_char[a->_statut->sex].rect_char.left = 500;
    }
}