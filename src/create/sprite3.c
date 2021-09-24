/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void sprite3_1(v_var *a)
{
    a->_menu->t_pause = sfTexture_createFromFile("./image/pause.png", NULL);
    a->_menu->s_pause = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_pause, a->_menu->t_pause, sfTrue);
    a->_menu->t_expl = sfTexture_createFromFile("./image/explain.png", NULL);
    a->_menu->s_expl = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_expl, a->_menu->t_expl, sfTrue);
    a->_menu->t_win = sfTexture_createFromFile("./image/win_m.png", NULL);
    a->_menu->s_win = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_win, a->_menu->t_win, sfTrue);
    a->_items->t_anal = sfTexture_createFromFile("./image/anal.png", NULL);
    a->_items->s_anal = sfSprite_create();
    sfSprite_setTexture(a->_items->s_anal, a->_items->t_anal, sfTrue);
    a->_tool->t_sound = sfTexture_createFromFile("./image/sound.png", NULL);
    a->_tool->s_sound = sfSprite_create();
    sfSprite_setTexture(a->_tool->s_sound, a->_tool->t_sound, sfTrue);
}

void sprite3(v_var *a)
{
    sprite3_1(a);
}