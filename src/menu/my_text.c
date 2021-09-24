/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_text(v_var *a)
{
    a->_menu->str_gold = my_convert_int(a->_statut->gold);
    a->_menu->pose_gold.x = a->_char[a->_statut->sex].pos_char.x + 455;
    a->_menu->pose_gold.y = a->_char[a->_statut->sex].pos_char.y - 535;
    a->_menu->str_lvl = my_convert_int(a->_statut->my_lvl);
    a->_menu->pose_lvl.x = a->_char[a->_statut->sex].pos_char.x + 340;
    a->_menu->pose_lvl.y = a->_char[a->_statut->sex].pos_char.y + 440;
    a->_menu->str_life = my_convert_int(a->_statut->life);
    a->_menu->pose_life.x = a->_char[a->_statut->sex].pos_char.x + 610;
    a->_menu->pose_life.y = a->_char[a->_statut->sex].pos_char.y + 428;
    a->_menu->pos_para.x = a->_char[a->_statut->sex].pos_char.x + 429;
    a->_menu->pos_para.y = a->_char[a->_statut->sex].pos_char.y - 541;
    sfSprite_setPosition(a->_menu->s_para, a->_menu->pos_para);
}

void display_text2(v_var *a)
{
    sfText_setString(a->_menu->txt_life, a->_menu->str_life);
    sfText_setFont(a->_menu->txt_life, a->_menu->font);
    sfText_setCharacterSize(a->_menu->txt_life, 20);
    sfText_setColor(a->_menu->txt_life, sfWhite);
    sfText_setPosition(a->_menu->txt_life, a->_menu->pose_life);
    sfRenderWindow_drawText(a->_window->window, a->_menu->txt_life, NULL);
}

void display_text(v_var *a)
{
    if (a->_statut->statut >= 4 && a->_statut->statut <= 6) {
        sfSprite_setTextureRect(a->_menu->s_para, a->_menu->rect_para);
        sfRenderWindow_drawSprite(a->_window->window, a->_menu->s_para, NULL);
        sfText_setString(a->_menu->txt_gold, a->_menu->str_gold);
        sfText_setFont(a->_menu->txt_gold, a->_menu->font);
        sfText_setCharacterSize(a->_menu->txt_gold, 80);
        sfText_setColor(a->_menu->txt_gold, sfWhite);
        sfText_setPosition(a->_menu->txt_gold, a->_menu->pose_gold);
        sfRenderWindow_drawText(a->_window->window, a->_menu->txt_gold, NULL);
    }
    sfText_setString(a->_menu->txt_lvl, a->_menu->str_lvl);
    sfText_setFont(a->_menu->txt_lvl, a->_menu->font);
    sfText_setCharacterSize(a->_menu->txt_lvl, 40);
    sfText_setColor(a->_menu->txt_lvl, sfWhite);
    sfText_setPosition(a->_menu->txt_lvl, a->_menu->pose_lvl);
    sfRenderWindow_drawText(a->_window->window, a->_menu->txt_lvl, NULL);
    display_text2(a);
}