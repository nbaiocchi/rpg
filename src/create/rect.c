/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void rect_1(v_var *a)
{
    a->_menu->rect_menu.top = 0;
    a->_menu->rect_menu.left = 0;
    a->_menu->rect_menu.width = 1920;
    a->_menu->rect_menu.height = 1080;
    a->_menu->rect_poulpi.top = 0;
    a->_menu->rect_poulpi.left = 0;
    a->_menu->rect_poulpi.width = 130;
    a->_menu->rect_poulpi.height = 129;
    a->_champ->rect_choice.top = 0;
    a->_champ->rect_choice.left = 0;
    a->_champ->rect_choice.width = 1920;
    a->_champ->rect_choice.height = 1080;
    a->_menu->rect_select.top = 0;
    a->_menu->rect_select.left = 0;
    a->_menu->rect_select.width = 400;
    a->_menu->rect_select.height = 650;
    a->_menu->rect_intro.top = 0;
    a->_menu->rect_intro.left = 0;
    a->_menu->rect_intro.width = 1920;
    a->_menu->rect_intro.height = 1080;
}

void rect_2(v_var *a)
{
    a->_menu->rect_menu.top = 0;
    a->_menu->rect_menu.left = 0;
    a->_menu->rect_menu.width = 1920;
    a->_menu->rect_menu.height = 1080;
    a->_dialogue[1].rect_dialogue.top = 0;
    a->_dialogue[1].rect_dialogue.left = 0;
    a->_dialogue[1].rect_dialogue.width = 920;
    a->_dialogue[1].rect_dialogue.height = 300;
    a->_map->rect_map1.top = 0;
    a->_map->rect_map1.left = 0;
    a->_map->rect_map1.width = 640;
    a->_map->rect_map1.height = 360;
    a->_char[1].rect_char.top = 0;
    a->_char[1].rect_char.left = 500;
    a->_char[1].rect_char.width = 50;
    a->_char[1].rect_char.height = 50;
    a->_char[2].rect_char.top = 0;
    a->_char[2].rect_char.left = 500;
    a->_char[2].rect_char.width = 50;
    a->_char[2].rect_char.height = 50;
}

void rect_3(v_var *a)
{
    a->_map->rect_cam.top = 0;
    a->_map->rect_cam.left = 0;
    a->_map->rect_cam.width = 1920;
    a->_map->rect_cam.height = 1080;
    a->_map->camera = sfView_createFromRect(a->_map->rect_cam);
    for (int i = 0; i != a->_coli1->size; i += 1) {
        a->_coli1[i].rect_coli.top = 0;
        a->_coli1[i].rect_coli.left = 0;
        a->_coli1[i].rect_coli.width = 30;
        a->_coli1[i].rect_coli.height = 30;
    }
    for (int i = 0; i != a->_coli2->size; i += 1) {
        a->_coli2[i].rect_coli.top = 0;
        a->_coli2[i].rect_coli.left = 0;
        a->_coli2[i].rect_coli.width = 30;
        a->_coli2[i].rect_coli.height = 30;
    }
    a->_map->rect_map2.top = 0;
    a->_map->rect_map2.left = 0;
    a->_map->rect_map2.width = 1150;
}

void rect_4(v_var *a)
{
    a->_map->rect_map2.height = 1550;
    a->_map->rect_map3.top = 0;
    a->_map->rect_map3.left = 0;
    a->_map->rect_map3.width = 450;
    a->_map->rect_map3.height = 1550;
    a->_map->rect_map4.top = 0;
    a->_map->rect_map4.left = 0;
    a->_map->rect_map4.width = 1280;
    a->_map->rect_map4.height = 720;
    for (int i = 0; i != a->_coli3->size; i += 1) {
        a->_coli3[i].rect_coli.top = 0;
        a->_coli3[i].rect_coli.left = 0;
        a->_coli3[i].rect_coli.width = 30;
        a->_coli3[i].rect_coli.height = 30;
    }
}

void rect(v_var *a)
{
    rect_1(a);
    rect_2(a);
    rect_3(a);
    rect_4(a);
    for (int i = 0; i != a->_coli4->size; i += 1) {
        a->_coli4[i].rect_coli.top = 0;
        a->_coli4[i].rect_coli.left = 0;
        a->_coli4[i].rect_coli.width = 30;
        a->_coli4[i].rect_coli.height = 30;
    }
}