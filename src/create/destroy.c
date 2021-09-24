/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void destroy(v_var *a)
{
    sfRenderWindow_destroy(a->_window->window);
    sfSprite_destroy(a->_menu->s_menu);
    sfSprite_destroy(a->_menu->s_intro);
    sfSprite_destroy(a->_menu->s_poulpi2);
    sfSprite_destroy(a->_menu->s_poulpi);
    sfSprite_destroy(a->_menu->s_select);
    sfSprite_destroy(a->_menu->s_select2);
    sfClock_destroy(a->_clock->clock1);
    sfClock_destroy(a->_clock->clock2);
    sfClock_destroy(a->_char[1].clock);
    sfClock_destroy(a->_emy[0].clock);
    sfClock_destroy(a->_emy[1].clock);
    sfSprite_destroy(a->_map->s_map1);
    sfSprite_destroy(a->_champ->s_choice);
    sfMusic_destroy(a->_tool->music);
    sfMusic_destroy(a->_tool->octo);
    sfSound_destroy(a->_tool->clic);
    sfSoundBuffer_destroy(a->_tool->bclic);
}