/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_enemy_second(v_var *a)
{
    a->_emy[0].pos_emy.x = 360;
    a->_emy[0].pos_emy.y = -2400;
    a->_emy[3].pos_emy.x = 360;
    a->_emy[3].pos_emy.y = -1250;
    a->_emy[1].pos_emy.x = -780;
    a->_emy[1].pos_emy.y = -1475;
    a->_emy[2].pos_emy.x = 950;
    a->_emy[2].pos_emy.y = -2050;
    sfSprite_setScale(a->_emy[0].s_emy, a->_map->size);
    sfSprite_setScale(a->_emy[1].s_emy, a->_map->size);
    sfSprite_setScale(a->_emy[2].s_emy, a->_map->size);
    sfSprite_setScale(a->_emy[3].s_emy, a->_map->size);
}

void my_enemy(v_var *a)
{
    if (a->_statut->statut == 7 || a->_statut->statut == 8) {
        a->_emy[0].pos_emy.x = a->_char[a->_statut->sex].pos_char.x - 100;
        a->_emy[0].pos_emy.y = a->_char[a->_statut->sex].pos_char.y - 220;
        a->_emy[3].pos_emy.x = a->_char[a->_statut->sex].pos_char.x - 100;
        a->_emy[3].pos_emy.y = a->_char[a->_statut->sex].pos_char.y - 220;
        a->_emy[1].pos_emy.x = a->_char[a->_statut->sex].pos_char.x - 100;
        a->_emy[1].pos_emy.y = a->_char[a->_statut->sex].pos_char.y - 220;
        a->_emy[2].pos_emy.x = a->_char[a->_statut->sex].pos_char.x - 100;
        a->_emy[2].pos_emy.y = a->_char[a->_statut->sex].pos_char.y - 220;
        sfSprite_setScale(a->_emy[0].s_emy, a->_map->size2);
        sfSprite_setScale(a->_emy[1].s_emy, a->_map->size2);
        sfSprite_setScale(a->_emy[2].s_emy, a->_map->size2);
        sfSprite_setScale(a->_emy[3].s_emy, a->_map->size2);
    } else
        my_enemy_second(a);
    sfSprite_setPosition(a->_emy[0].s_emy, a->_emy[0].pos_emy);
    sfSprite_setPosition(a->_emy[1].s_emy, a->_emy[1].pos_emy);
    sfSprite_setPosition(a->_emy[2].s_emy, a->_emy[2].pos_emy);
    sfSprite_setPosition(a->_emy[3].s_emy, a->_emy[3].pos_emy);
}

void display_enemy_second(v_var *a)
{
    if (a->_champ->fiddle == 1) {
        sfSprite_setTextureRect(a->_emy[0].s_emy, a->_emy[0].rect_emy);
        sfRenderWindow_drawSprite(a->_window->window, a->_emy[0].s_emy, NULL);
    } else if (a->_champ->witch == 1) {
        sfSprite_setTextureRect(a->_emy[2].s_emy, a->_emy[2].rect_emy);
        sfRenderWindow_drawSprite(a->_window->window, a->_emy[2].s_emy, NULL);
        rect_witch(a);
    } else if (a->_champ->ghost == 1) {
        sfSprite_setTextureRect(a->_emy[1].s_emy, a->_emy[1].rect_emy);
        sfRenderWindow_drawSprite(a->_window->window, a->_emy[1].s_emy, NULL);
        rect_ghost(a);
    } else if (a->_champ->wolf == 1) {
        sfSprite_setTextureRect(a->_emy[3].s_emy, a->_emy[3].rect_emy);
        sfRenderWindow_drawSprite(a->_window->window, a->_emy[3].s_emy, NULL);
    }
}

void display_enemy(v_var *a)
{
    if (a->_statut->statut == 4) {
        sfSprite_setTextureRect(a->_emy[0].s_emy, a->_emy[0].rect_emy);
        sfRenderWindow_drawSprite(a->_window->window, a->_emy[0].s_emy, NULL);
        sfSprite_setTextureRect(a->_emy[1].s_emy, a->_emy[1].rect_emy);
        sfRenderWindow_drawSprite(a->_window->window, a->_emy[1].s_emy, NULL);
        sfSprite_setTextureRect(a->_emy[3].s_emy, a->_emy[3].rect_emy);
        sfRenderWindow_drawSprite(a->_window->window, a->_emy[3].s_emy, NULL);
        rect_ghost(a);
    } else if (a->_statut->statut == 5) {
        sfSprite_setTextureRect(a->_emy[2].s_emy, a->_emy[2].rect_emy);
        sfRenderWindow_drawSprite(a->_window->window, a->_emy[2].s_emy, NULL);
        rect_witch(a);
    }
    display_enemy_second(a);
}