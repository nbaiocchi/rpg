/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void sprite2_1(v_var *a)
{
    a->_tool->t_move = sfTexture_createFromFile("./image/move.png", NULL);
    a->_tool->s_move = sfSprite_create();
    sfSprite_setTexture(a->_tool->s_move, a->_tool->t_move, sfTrue);
    a->_emy[0].t_emy = sfTexture_createFromFile("./image/fiddle.png", NULL);
    a->_emy[0].s_emy = sfSprite_create();
    sfSprite_setTexture(a->_emy[0].s_emy, a->_emy[0].t_emy, sfTrue);
    a->_emy[1].t_emy = sfTexture_createFromFile("./image/ghost.png", NULL);
    a->_emy[1].s_emy = sfSprite_create();
    sfSprite_setTexture(a->_emy[1].s_emy, a->_emy[1].t_emy, sfTrue);
    a->_emy[2].t_emy = sfTexture_createFromFile("./image/witch.png", NULL);
    a->_emy[2].s_emy = sfSprite_create();
    sfSprite_setTexture(a->_emy[2].s_emy, a->_emy[2].t_emy, sfTrue);
    a->_emy[3].t_emy = sfTexture_createFromFile("./image/wolf.png", NULL);
    a->_emy[3].s_emy = sfSprite_create();
    sfSprite_setTexture(a->_emy[3].s_emy, a->_emy[3].t_emy, sfTrue);
    a->_map->t_bt1 = sfTexture_createFromFile("./image/bt1.png", NULL);
    a->_map->s_bt1 = sfSprite_create();
    sfSprite_setTexture(a->_map->s_bt1, a->_map->t_bt1, sfTrue);
}

void sprite2_2(v_var *a)
{
    a->_map->t_bt2 = sfTexture_createFromFile("./image/bt2.png", NULL);
    a->_map->s_bt2 = sfSprite_create();
    sfSprite_setTexture(a->_map->s_bt2, a->_map->t_bt2, sfTrue);
    a->_tool->t_fight = sfTexture_createFromFile("./image/fight.png", NULL);
    a->_tool->s_fight = sfSprite_create();
    sfSprite_setTexture(a->_tool->s_fight, a->_tool->t_fight, sfTrue);
    a->_tool->t_ball = sfTexture_createFromFile("./image/balls.png", NULL);
    a->_tool->s_ball = sfSprite_create();
    sfSprite_setTexture(a->_tool->s_ball, a->_tool->t_ball, sfTrue);
    a->_tool->t_heal = sfTexture_createFromFile("./image/health.png", NULL);
    a->_tool->s_heal = sfSprite_create();
    sfSprite_setTexture(a->_tool->s_heal, a->_tool->t_heal, sfTrue);
    a->_tool->t_shadow = sfTexture_createFromFile("./image/shadow.png", NULL);
    a->_tool->s_shadow = sfSprite_create();
    sfSprite_setTexture(a->_tool->s_shadow, a->_tool->t_shadow, sfTrue);
    a->_tool->t_partic = sfTexture_createFromFile("./image/partic.png", NULL);
    a->_tool->s_partic = sfSprite_create();
    sfSprite_setTexture(a->_tool->s_partic, a->_tool->t_partic, sfTrue);
}

void sprite2_3(v_var *a)
{
    for (int i = 0; i != 10; i += 1) {
        a->_life[i].t_life = sfTexture_createFromFile("./image/life.png", NULL);
        a->_life[i].s_life = sfSprite_create();
        sfSprite_setTexture(a->_life[i].s_life, a->_life[i].t_life, sfTrue);
        a->_life[i].t_lvl = sfTexture_createFromFile("./image/lvl.png", NULL);
        a->_life[i].s_lvl = sfSprite_create();
        sfSprite_setTexture(a->_life[i].s_lvl, a->_life[i].t_lvl, sfTrue);
    }
    a->_tool->t_hit = sfTexture_createFromFile("./image/hit.png", NULL);
    a->_tool->s_hit = sfSprite_create();
    sfSprite_setTexture(a->_tool->s_hit, a->_tool->t_hit, sfTrue);
    a->_menu->t_para = sfTexture_createFromFile("./image/para.png", NULL);
    a->_menu->s_para = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_para, a->_menu->t_para, sfTrue);
    a->_boss->t_boss = sfTexture_createFromFile("./image/boss.png", NULL);
    a->_boss->s_boss = sfSprite_create();
    sfSprite_setTexture(a->_boss->s_boss, a->_boss->t_boss, sfTrue);
    a->_boss->t_batle = sfTexture_createFromFile("./image/bt_boss.png", NULL);
    a->_boss->s_batle = sfSprite_create();
    sfSprite_setTexture(a->_boss->s_batle, a->_boss->t_batle, sfTrue);
}

void sprite2_4(v_var *a)
{
    a->_items[0].t_item = sfTexture_createFromFile("./image/items.png", NULL);
    a->_items[0].s_item = sfSprite_create();
    sfSprite_setTexture(a->_items[0].s_item, a->_items[0].t_item, sfTrue);
    a->_items[1].t_item = sfTexture_createFromFile("./image/potion.png", NULL);
    a->_items[1].s_item = sfSprite_create();
    sfSprite_setTexture(a->_items[1].s_item, a->_items[1].t_item, sfTrue);
    a->_items[2].t_item = sfTexture_createFromFile("./image/force.png", NULL);
    a->_items[2].s_item = sfSprite_create();
    sfSprite_setTexture(a->_items[2].s_item, a->_items[2].t_item, sfTrue);
    a->_items[3].t_item = sfTexture_createFromFile("./image/heart.png", NULL);
    a->_items[3].s_item = sfSprite_create();
    sfSprite_setTexture(a->_items[3].s_item, a->_items[3].t_item, sfTrue);
    a->_menu->t_shop = sfTexture_createFromFile("./image/shop.png", NULL);
    a->_menu->s_shop = sfSprite_create();
    sfSprite_setTexture(a->_menu->s_shop, a->_menu->t_shop, sfTrue);
}

void sprite2(v_var *a)
{
    sprite2_1(a);
    sprite2_2(a);
    sprite2_3(a);
    sprite2_4(a);
}