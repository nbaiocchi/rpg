/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_intro(v_var *a)
{
    sfSprite_setPosition(a->_menu->s_intro, a->_menu->pos_intro);
    sfSprite_setPosition(a->_dialogue[1].s_dialogue,
    a->_dialogue[1].pos_dialogue);
}

void display_intro(v_var *a)
{
    sfSprite_setTextureRect(a->_menu->s_intro, a->_menu->rect_intro);
    sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_intro, NULL);
    sfSprite_setTextureRect(a->_dialogue[1].s_dialogue,
    a->_dialogue[1].rect_dialogue);
    sfRenderWindow_drawSprite(a->_window->window,
    a->_dialogue[1].s_dialogue, NULL);
}