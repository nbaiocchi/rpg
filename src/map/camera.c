/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void camera(v_var *a)
{
    a->_map->pos_cam.x = a->_char[a->_statut->sex].pos_char.x;
    a->_map->pos_cam.y = a->_char[a->_statut->sex].pos_char.y;
    sfView_setCenter(a->_map->camera, a->_map->pos_cam);
    sfRenderWindow_setView(a->_window->window, a->_map->camera);
}