/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void rect3_1(v_var *a)
{
    a->_items[0].rect_item.top = 0;
    a->_items[0].rect_item.left = 0;
    a->_items[0].rect_item.width = 122;
    a->_items[0].rect_item.height = 337;
    a->_items[1].rect_item.top = 0;
    a->_items[1].rect_item.left = 0;
    a->_items[1].rect_item.width = 50;
    a->_items[1].rect_item.height = 50;
    a->_items[2].rect_item.top = 0;
    a->_items[2].rect_item.left = 0;
    a->_items[2].rect_item.width = 50;
    a->_items[2].rect_item.height = 50;
    a->_items[3].rect_item.top = 0;
    a->_items[3].rect_item.left = 0;
    a->_items[3].rect_item.width = 50;
    a->_items[3].rect_item.height = 50;
    a->_menu->rect_shop.top = 0;
    a->_menu->rect_shop.left = 0;
    a->_menu->rect_shop.width = 1920;
    a->_menu->rect_shop.height = 1080;
}

void rect3_2(v_var *a)
{
    a->_menu->rect_pause.top = 0;
    a->_menu->rect_pause.left = 0;
    a->_menu->rect_pause.width = 1920;
    a->_menu->rect_pause.height = 1080;
    a->_menu->rect_expl.top = 0;
    a->_menu->rect_expl.left = 0;
    a->_menu->rect_expl.width = 1920;
    a->_menu->rect_expl.height = 1080;
    a->_menu->rect_win.top = 0;
    a->_menu->rect_win.left = 0;
    a->_menu->rect_win.width = 1920;
    a->_menu->rect_win.height = 1080;
    a->_items->rect_anal.top = 0;
    a->_items->rect_anal.left = 0;
    a->_items->rect_anal.width = 0;
    a->_items->rect_anal.height = 125;
    a->_tool->rect_sound.top = 0;
    a->_tool->rect_sound.left = 0;
    a->_tool->rect_sound.width = 150;
    a->_tool->rect_sound.height = 150;
}

void rect3(v_var *a)
{
    rect3_1(a);
    rect3_2(a);
}