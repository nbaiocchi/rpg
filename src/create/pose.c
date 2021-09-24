/*
** EPITECH PROJECT, 2021
** pose
** File description:
** t
*/

#include "../../include/prototype.h"

void pose_1(v_var *a)
{
    a->_menu->pos_menu.x = 0;
    a->_menu->pos_menu.y = 0;
    a->_menu->pos_intro.x = 0;
    a->_menu->pos_intro.y = 0;
    a->_menu->pos_poulpi.x = 580;
    a->_menu->pos_poulpi.y = 740;
    a->_menu->pos_poulpi2.x = 580;
    a->_menu->pos_poulpi2.y = 910;
    a->_champ->pos_choice.x = 0;
    a->_champ->pos_choice.y = 0;
    a->_menu->pos_select.x = 225;
    a->_menu->pos_select.y = 200;
    a->_menu->pos_select2.x = 1300;
    a->_menu->pos_select2.y = 200;
    a->_dialogue[1].pos_dialogue.x = 500;
    a->_dialogue[1].pos_dialogue.y = 780;
    a->_map->pos_map1.x = 0;
    a->_map->pos_map1.y = 0;
    a->_char[1].pos_char.x = 960;
    a->_char[1].pos_char.y = 415;
}

void pose_2(v_var *a)
{
    a->_char[2].pos_char.x = 960;
    a->_char[2].pos_char.y = 415;
    a->_map->pos_cam.x = 935;
    a->_map->pos_cam.y = 515;
    a->_map->pos_map2.x = -1530;
    a->_map->pos_map2.y = -3570;
    a->_map->pos_map3.x = 285;
    a->_map->pos_map3.y = -3570;
    a->_map->pos_map4.x = -960;
    a->_map->pos_map4.y = -1205;
    a->_tool->pos_move.x = 935;
    a->_tool->pos_move.y = 810;
    a->_emy[0].pos_emy.x = 360;
    a->_emy[0].pos_emy.y = -2400;
    a->_emy[3].pos_emy.x = 360;
    a->_emy[3].pos_emy.y = -1250;
    a->_emy[1].pos_emy.x = -780;
    a->_emy[1].pos_emy.y = -1475;
    a->_emy[2].pos_emy.x = 950;
    a->_emy[2].pos_emy.y = -2050;
}

void pose_3(v_var *a)
{
    a->_map->pos_bt1.x = 0;
    a->_map->pos_bt1.y = 0;
    a->_map->pos_bt2.x = 0;
    a->_map->pos_bt2.y = 0;
    a->_tool->pos_fight.x = 0;
    a->_tool->pos_fight.y = 0;
    a->_tool->pos_ball.x = 0;
    a->_tool->pos_ball.y = 0;
    a->_tool->pos_heal.x = 0;
    a->_tool->pos_heal.y = 0;
    a->_tool->pos_shadow.x = 0;
    a->_tool->pos_shadow.y = 0;
    a->_tool->pos_partic.x = 0;
    a->_tool->pos_partic.y = 0;
    for (int i = 0; i != 10; i += 1) {
        a->_life[i].pos_life.x = 0;
        a->_life[i].pos_life.y = 0;
        a->_life[i].pos_lvl.x = 0;
        a->_life[i].pos_lvl.y = 0;
    }
}

void pose_4(v_var *a)
{
    a->_tool->pos_hit.x = 0;
    a->_tool->pos_hit.y = 0;
    a->_menu->pose_gold.x = 0;
    a->_menu->pose_gold.y = 0;
    a->_menu->pose_lvl.x = 0;
    a->_menu->pose_lvl.y = 0;
    a->_menu->pos_para.x = 0;
    a->_menu->pos_para.y = 0;
    a->_boss->pos_boss.x = 575;
    a->_boss->pos_boss.y = -350;
    a->_tool->pos_sound.x = 1620;
    a->_tool->pos_sound.y = 627;
}

void pose(v_var *a)
{
    pose_1(a);
    pose_2(a);
    pose_3(a);
    pose_4(a);
}