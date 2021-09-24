/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

int cds_lvl(v_var *a)
{
    if (a->_statut->lvl > 50 && a->_statut->lvl <= 60)
        return (5);
    if (a->_statut->lvl > 60 && a->_statut->lvl <= 70)
        return (6);
    if (a->_statut->lvl > 70 && a->_statut->lvl <= 80)
        return (7);
    if (a->_statut->lvl > 80 && a->_statut->lvl <= 90)
        return (8);
    if (a->_statut->lvl > 90 && a->_statut->lvl <= 100)
        return (9);
    return (-1);
}

int check_lvl(v_var *a)
{
    if (a->_statut->lvl > 0 && a->_statut->lvl <= 10)
        return (0);
    if (a->_statut->lvl > 10 && a->_statut->lvl <= 20)
        return (1);
    if (a->_statut->lvl > 20 && a->_statut->lvl <= 30)
        return (2);
    if (a->_statut->lvl > 30 && a->_statut->lvl <= 40)
        return (3);
    if (a->_statut->lvl > 40 && a->_statut->lvl <= 50)
        return (4);
    return (cds_lvl(a));
}

int cds_life(v_var *a)
{
    if (a->_statut->life > (a->_statut->pv_max/2)
    && a->_statut->life <= (a->_statut->pv_max/1.6))
        return (5);
    if (a->_statut->life > (a->_statut->pv_max/1.6)
    && a->_statut->life <= (a->_statut->pv_max/1.42))
        return (6);
    if (a->_statut->life > (a->_statut->pv_max/1.42)
    && a->_statut->life <= (a->_statut->pv_max/1.25))
        return (7);
    if (a->_statut->life > (a->_statut->pv_max/1.25)
    && a->_statut->life <= (a->_statut->pv_max/1.1))
        return (8);
    if (a->_statut->life > (a->_statut->pv_max/1.1)
    && a->_statut->life <= a->_statut->pv_max)
        return (9);
    return (-1);
}

int check_life(v_var *a)
{
    if (a->_statut->life > 0 && a->_statut->life <= (a->_statut->pv_max/10))
        return (0);
    if (a->_statut->life > (a->_statut->pv_max/10)
    && a->_statut->life <= (a->_statut->pv_max/5))
        return (1);
    if (a->_statut->life > (a->_statut->pv_max/5)
    && a->_statut->life <= (a->_statut->pv_max/3.3))
        return (2);
    if (a->_statut->life > (a->_statut->pv_max/3.3)
    && a->_statut->life <= (a->_statut->pv_max/2.5))
        return (3);
    if (a->_statut->life > (a->_statut->pv_max/2.5)
    && a->_statut->life <= (a->_statut->pv_max/2))
        return (4);
    return (cds_life(a));
}