/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_items2(v_var *a)
{
    a->_items->str_potion = my_convert_int(a->_items->potion);
    a->_items->pose_potion.x = a->_char[a->_statut->sex].pos_char.x - 880;
    a->_items->pose_potion.y = a->_char[a->_statut->sex].pos_char.y - 90;
    a->_items->str_force = my_convert_int(a->_items->force);
    a->_items->pose_force.x = a->_char[a->_statut->sex].pos_char.x - 880;
    a->_items->pose_force.y = a->_char[a->_statut->sex].pos_char.y + 10;
    a->_items->str_helth = my_convert_int(a->_items->helth);
    a->_items->pose_helth.x = a->_char[a->_statut->sex].pos_char.x - 880;
    a->_items->pose_helth.y = a->_char[a->_statut->sex].pos_char.y + 110;
}

void my_items(v_var *a)
{
    a->_items[0].pos_item.x = a->_char[a->_statut->sex].pos_char.x - 962;
    a->_items[0].pos_item.y = a->_char[a->_statut->sex].pos_char.y - 150;
    sfSprite_setPosition(a->_items[0].s_item, a->_items[0].pos_item);
    a->_items[1].pos_item.x = a->_char[a->_statut->sex].pos_char.x - 920;
    a->_items[1].pos_item.y = a->_char[a->_statut->sex].pos_char.y - 120;
    sfSprite_setPosition(a->_items[1].s_item, a->_items[1].pos_item);
    a->_items[2].pos_item.x = a->_char[a->_statut->sex].pos_char.x - 920;
    a->_items[2].pos_item.y = a->_char[a->_statut->sex].pos_char.y - 20;
    sfSprite_setPosition(a->_items[2].s_item, a->_items[2].pos_item);
    a->_items[3].pos_item.x = a->_char[a->_statut->sex].pos_char.x - 920;
    a->_items[3].pos_item.y = a->_char[a->_statut->sex].pos_char.y + 80;
    sfSprite_setPosition(a->_items[3].s_item, a->_items[3].pos_item);
    a->_items->pos_anal.x = a->_char[a->_statut->sex].pos_char.x - 950;
    a->_items->pos_anal.y = a->_char[a->_statut->sex].pos_char.y - 300;
    sfSprite_setPosition(a->_items->s_anal, a->_items->pos_anal);
    my_items2(a);
}

void check_anal(v_var *a)
{
    if (a->_items->g_anal == 1 && a->_items->w_anal == 0)
        a->_items->rect_anal.width = 54;
    if (a->_items->w_anal == 1 && a->_items->g_anal == 0)
        a->_items->rect_anal.width = 54;
    if (a->_items->w_anal == 1 && a->_items->g_anal == 1) {
        a->_items->rect_anal.width = 115;
        a->_items->anal = 2;
    }
}

void items_display2(v_var *a)
{
    sfText_setString(a->_items->txt_potion, a->_items->str_potion);
    sfText_setFont(a->_items->txt_potion, a->_menu->font);
    sfText_setCharacterSize(a->_items->txt_potion, 30);
    sfText_setColor(a->_items->txt_potion, sfWhite);
    sfText_setPosition(a->_items->txt_potion, a->_items->pose_potion);
    sfRenderWindow_drawText(a->_window->window, a->_items->txt_potion, NULL);
    sfText_setString(a->_items->txt_force, a->_items->str_force);
    sfText_setFont(a->_items->txt_force, a->_menu->font);
    sfText_setCharacterSize(a->_items->txt_force, 30);
    sfText_setColor(a->_items->txt_force, sfWhite);
    sfText_setPosition(a->_items->txt_force, a->_items->pose_force);
    sfRenderWindow_drawText(a->_window->window, a->_items->txt_force, NULL);
    sfText_setString(a->_items->txt_helth, a->_items->str_helth);
    sfText_setFont(a->_items->txt_helth, a->_menu->font);
    sfText_setCharacterSize(a->_items->txt_helth, 30);
    sfText_setColor(a->_items->txt_helth, sfWhite);
    sfText_setPosition(a->_items->txt_helth, a->_items->pose_helth);
    sfRenderWindow_drawText(a->_window->window, a->_items->txt_helth, NULL);
    check_anal(a);
}

void items_display(v_var *a)
{
    sfSprite_setTextureRect(a->_items[0].s_item, a->_items[0].rect_item);
    sfRenderWindow_drawSprite(a->_window->window, a->_items[0].s_item, NULL);
    if (a->_items->potion > 0) {
        sfSprite_setTextureRect(a->_items[1].s_item, a->_items[1].rect_item);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_items[1].s_item, NULL);
    }
    if (a->_items->force > 0) {
        sfSprite_setTextureRect(a->_items[2].s_item, a->_items[2].rect_item);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_items[2].s_item, NULL);
    }
    if (a->_items->helth > 0) {
        sfSprite_setTextureRect(a->_items[3].s_item, a->_items[3].rect_item);
        sfRenderWindow_drawSprite(a->_window->window,
        a->_items[3].s_item, NULL);
    }
    sfSprite_setTextureRect(a->_items->s_anal, a->_items->rect_anal);
    sfRenderWindow_drawSprite(a->_window->window, a->_items->s_anal, NULL);
    items_display2(a);
}