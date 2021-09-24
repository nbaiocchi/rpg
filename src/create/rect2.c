/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void rect2_1(v_var *a)
{
    a->_tool->rect_move.top = 0;
    a->_tool->rect_move.left = 0;
    a->_tool->rect_move.width = 50;
    a->_tool->rect_move.height = 50;
    a->_emy[0].rect_emy.top = 0;
    a->_emy[0].rect_emy.left = 0;
    a->_emy[0].rect_emy.width = 50;
    a->_emy[0].rect_emy.height = 50;
    a->_emy[1].rect_emy.top = 0;
    a->_emy[1].rect_emy.left = 0;
    a->_emy[1].rect_emy.width = 50;
    a->_emy[1].rect_emy.height = 50;
    a->_emy[2].rect_emy.top = 0;
    a->_emy[2].rect_emy.left = 0;
    a->_emy[2].rect_emy.width = 50;
    a->_emy[2].rect_emy.height = 50;
    a->_emy[3].rect_emy.top = 0;
    a->_emy[3].rect_emy.left = 0;
    a->_emy[3].rect_emy.width = 50;
    a->_emy[3].rect_emy.height = 50;
}

void rect2_2(v_var *a)
{
    a->_map->rect_bt1.top = 0;
    a->_map->rect_bt1.left = 0;
    a->_map->rect_bt1.width = 1920;
    a->_map->rect_bt1.height = 1080;
    a->_map->rect_bt2.top = 0;
    a->_map->rect_bt2.left = 0;
    a->_map->rect_bt2.width = 1920;
    a->_map->rect_bt2.height = 1080;
    a->_tool->rect_fight.top = 0;
    a->_tool->rect_fight.left = 0;
    a->_tool->rect_fight.width = 900;
    a->_tool->rect_fight.height = 150;
    a->_tool->rect_ball.top = 0;
    a->_tool->rect_ball.left = 0;
    a->_tool->rect_ball.width = 50;
    a->_tool->rect_ball.height = 50;
    a->_tool->rect_heal.top = 0;
    a->_tool->rect_heal.left = 0;
    a->_tool->rect_heal.width = 550;
    a->_tool->rect_heal.height = 64;
}

void rect2_3(v_var *a)
{
    a->_tool->rect_shadow.top = 0;
    a->_tool->rect_shadow.left = 0;
    a->_tool->rect_shadow.width = 1920;
    a->_tool->rect_shadow.height = 1080;
    a->_tool->rect_partic.top = 0;
    a->_tool->rect_partic.left = 0;
    a->_tool->rect_partic.width = 1920;
    a->_tool->rect_partic.height = 1080;
    for (int i = 0; i != 10; i += 1) {
        a->_life[i].rect_life.top = 0;
        a->_life[i].rect_life.left = 0;
        a->_life[i].rect_life.width = 46;
        a->_life[i].rect_life.height = 17;
        a->_life[i].rect_lvl.top = 0;
        a->_life[i].rect_lvl.left = 0;
        a->_life[i].rect_lvl.width = 46;
        a->_life[i].rect_lvl.height = 17;
    }
}

void rect2_4(v_var *a)
{
    a->_tool->rect_hit.top = 0;
    a->_tool->rect_hit.left = 0;
    a->_tool->rect_hit.width = 129;
    a->_tool->rect_hit.height = 145;
    a->_menu->rect_para.top = 0;
    a->_menu->rect_para.left = 0;
    a->_menu->rect_para.width = 531;
    a->_menu->rect_para.height = 128;
    a->_boss->rect_boss.top = 0;
    a->_boss->rect_boss.left = 0;
    a->_boss->rect_boss.width = 700;
    a->_boss->rect_boss.height = 400;
    a->_boss->rect_batle.top = 0;
    a->_boss->rect_batle.left = 0;
    a->_boss->rect_batle.width = 640;
    a->_boss->rect_batle.height = 360;
}

void rect2(v_var *a)
{
    rect2_1(a);
    rect2_2(a);
    rect2_3(a);
    rect2_4(a);
}