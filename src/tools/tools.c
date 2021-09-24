/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void my_tools2(v_var *a)
{
    a->_tool->pos_partic.x = a->_char[a->_statut->sex].pos_char.x - 960;
    a->_tool->pos_partic.y = a->_char[a->_statut->sex].pos_char.y - 540;
    sfSprite_setPosition(a->_tool->s_partic, a->_tool->pos_partic);
}

void my_tools(v_var *a)
{
    if (a->_statut->statut == 3)
        sfSprite_setPosition(a->_tool->s_move, a->_tool->pos_move);
    else {
        a->_tool->pos_move.x = a->_char[a->_statut->sex].pos_char.x + 30;
        a->_tool->pos_move.y = a->_char[a->_statut->sex].pos_char.y + 450;
        sfSprite_setPosition(a->_tool->s_move, a->_tool->pos_move);
    }
    a->_tool->pos_fight.x = a->_char[a->_statut->sex].pos_char.x  - 430;
    a->_tool->pos_fight.y = a->_char[a->_statut->sex].pos_char.y + 250;
    sfSprite_setPosition(a->_tool->s_fight, a->_tool->pos_fight);
    if (a->_tool->ball == 2) {
        a->_tool->pos_ball.x = a->_char[a->_statut->sex].pos_char.x  + 380;
        a->_tool->pos_ball.y = a->_char[a->_statut->sex].pos_char.y + 303;
    }
    sfSprite_setPosition(a->_tool->s_ball, a->_tool->pos_ball);
    a->_tool->pos_shadow.x = a->_char[a->_statut->sex].pos_char.x - 960;
    a->_tool->pos_shadow.y = a->_char[a->_statut->sex].pos_char.y - 540;
    sfSprite_setPosition(a->_tool->s_shadow, a->_tool->pos_shadow);
    my_tools2(a);
}

void tools_display2(v_var *a)
{
    if (check_place(a) == 1 || check_emy(a) == 1) {
        sfSprite_setTextureRect(a->_tool->s_move, a->_tool->rect_move);
        sfRenderWindow_drawSprite(a->_window->window, a->_tool->s_move, NULL);
    }
    if (a->_statut->hit == 1) {
        sfSprite_setTextureRect(a->_tool->s_hit, a->_tool->rect_hit);
        sfRenderWindow_drawSprite(a->_window->window, a->_tool->s_hit, NULL);
        sleep(1);
        a->_statut->hit = 0;
    }
}

void tools_display(v_var *a)
{
    if (a->_statut->statut != 3 && a->_statut->statut != 7
    && a->_statut->statut != 8) {
        sfSprite_setTextureRect(a->_tool->s_partic, a->_tool->rect_partic);
        sfRenderWindow_drawSprite(a->_window->window, a->_tool->s_partic, NULL);
        sfSprite_setTextureRect(a->_tool->s_shadow, a->_tool->rect_shadow);
        sfRenderWindow_drawSprite(a->_window->window, a->_tool->s_shadow, NULL);
        rect_particules(a);
    }
    if (a->_statut->statut == 7 || a->_statut->statut == 8
    || a->_statut->statut == 9) {
        sfSprite_setTextureRect(a->_tool->s_fight, a->_tool->rect_fight);
        sfRenderWindow_drawSprite(a->_window->window, a->_tool->s_fight, NULL);
        sfSprite_setTextureRect(a->_tool->s_ball, a->_tool->rect_ball);
        sfRenderWindow_drawSprite(a->_window->window, a->_tool->s_ball, NULL);
        pose_ball(a);
    }
    tools_display2(a);
}