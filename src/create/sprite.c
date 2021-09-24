/*
** EPITECH PROJECT, 2021
** sprite
** File description:
** t
*/

#include "../../include/prototype.h"

void sprite_1(v_var *a)
{
    a->_menu->t_menu = sfTexture_createFromFile("./image/menu.png", NULL);
    a->_menu->s_menu = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_menu, a->_menu->t_menu, sfTrue);
    a->_menu->t_poulpi = sfTexture_createFromFile("./image/poulpi.png", NULL);
    a->_menu->s_poulpi = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_poulpi,
    a->_menu->t_poulpi, sfTrue);
    a->_menu->s_poulpi2 = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_poulpi2,
    a->_menu->t_poulpi, sfTrue);
    a->_champ->t_choice = sfTexture_createFromFile("./image/choice.png", NULL);
    a->_champ->s_choice = sfSprite_create();
    sfSprite_setTexture(a->_champ->s_choice,
    a->_champ->t_choice, sfTrue);
    a->_menu->t_select = sfTexture_createFromFile("./image/select.png", NULL);
    a->_menu->s_select = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_select,
    a->_menu->t_select, sfTrue);
}

void sprite_2(v_var *a)
{
    a->_menu->s_select2 = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_select2,
    a->_menu->t_select, sfTrue);
    a->_menu->t_intro = sfTexture_createFromFile("./image/intro.png", NULL);
    a->_menu->s_intro = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_intro,
    a->_menu->t_intro, sfTrue);
    a->_dialogue[1].t_dialogue = sfTexture_createFromFile
    ("./image/dia1.png", NULL);
    a->_dialogue[1].s_dialogue = sfSprite_create();
    sfSprite_setTexture(a->_dialogue[1].s_dialogue,
    a->_dialogue[1].t_dialogue, sfTrue);
    a->_map->t_map1 = sfTexture_createFromFile("./image/map1.png", NULL);
    a->_map->s_map1 = sfSprite_create();
    sfSprite_setTexture(a->_map->s_map1,
    a->_map->t_map1, sfTrue);
    a->_char[1].t_char = sfTexture_createFromFile("./image/girl.png", NULL);
    a->_char[1].s_char = sfSprite_create();
    sfSprite_setTexture(a->_char[1].s_char,
    a->_char[1].t_char, sfTrue);
}

void sprite_3(v_var *a)
{
    a->_char[2].t_char = sfTexture_createFromFile("./image/man.png", NULL);
    a->_char[2].s_char = sfSprite_create();
    sfSprite_setTexture(a->_char[2].s_char,
    a->_char[2].t_char, sfTrue);
    for (int i = 0; i != a->_coli1->size; i += 1) {
        a->_coli1[i].t_coli =
        sfTexture_createFromFile("./image/invisible.png", NULL);
        a->_coli1[i].s_coli = sfSprite_create();
        sfSprite_setTexture(a->_coli1[i].s_coli,
        a->_coli1[i].t_coli, sfTrue);
    }
    for (int i = 0; i != a->_coli2->size; i += 1) {
        a->_coli2[i].t_coli =
        sfTexture_createFromFile("./image/invisible.png", NULL);
        a->_coli2[i].s_coli = sfSprite_create();
        sfSprite_setTexture(a->_coli2[i].s_coli,
        a->_coli2[i].t_coli, sfTrue);
    }
    a->_map->t_map2 = sfTexture_createFromFile("./image/map2.png", NULL);
    a->_map->s_map2 = sfSprite_create();
}

void sprite_4(v_var *a)
{
    sfSprite_setTexture(a->_map->s_map2,
    a->_map->t_map2, sfTrue);
    a->_map->t_map3 = sfTexture_createFromFile("./image/map3.png", NULL);
    a->_map->s_map3 = sfSprite_create();
    sfSprite_setTexture(a->_map->s_map3,
    a->_map->t_map3, sfTrue);
    a->_map->t_map4 = sfTexture_createFromFile("./image/map4.png", NULL);
    a->_map->s_map4 = sfSprite_create();
    sfSprite_setTexture(a->_map->s_map4,
    a->_map->t_map4, sfTrue);
    for (int i = 0; i != a->_coli3->size; i += 1) {
        a->_coli3[i].t_coli =
        sfTexture_createFromFile("./image/invisible.png", NULL);
        a->_coli3[i].s_coli = sfSprite_create();
        sfSprite_setTexture(a->_coli3[i].s_coli,
        a->_coli3[i].t_coli, sfTrue);
    }
}

void sprite(v_var *a)
{
    sprite_1(a);
    sprite_2(a);
    sprite_3(a);
    sprite_4(a);
    for (int i = 0; i != a->_coli4->size; i += 1) {
        a->_coli4[i].t_coli =
        sfTexture_createFromFile("./image/invisible.png", NULL);
        a->_coli4[i].s_coli = sfSprite_create();
        sfSprite_setTexture(a->_coli4[i].s_coli,
        a->_coli4[i].t_coli, sfTrue);
    }
}