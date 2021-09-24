/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

int colision_up(v_var *a)
{
    if (up1(a) == 1)
        return (1);
    if (up2(a) == 1)
        return (1);
    if (up3(a) == 1)
        return (1);
    if (up4(a) == 1)
        return (1);
    return (0);
}

int colision_rigt(v_var *a)
{
    if (right1(a) == 1)
        return (1);
    if (right2(a) == 1)
        return (1);
    if (right3(a) == 1)
        return (1);
    if (right4(a) == 1)
        return (1);
    return (0);
}

int colision_down(v_var *a)
{
    if (down1(a) == 1)
        return (1);
    if (down2(a) == 1)
        return (1);
    if (down3(a) == 1)
        return (1);
    if (down4(a) == 1)
        return (1);
    return (0);
}

int colision_left(v_var *a)
{
    if (left1(a) == 1)
        return (1);
    if (left2(a) == 1)
        return (1);
    if (left3(a) == 1)
        return (1);
    if (left4(a) == 1)
        return (1);
    return (0);
}