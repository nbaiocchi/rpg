/*
** EPITECH PROJECT, 2021
** window
** File description:
** c
*/

#include "../../include/prototype.h"

void open_window(v_var *a)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    a->_window->window = sfRenderWindow_create(video_mode, "My_window",
    sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(a->_window->window, 30);
}

void escape_event(v_var *a)
{
    if (a->_statut->statut >= 4 && a->_statut->statut <= 6) {
        a->_statut->stat = a->_statut->statut;
        a->_statut->statut = 11;
    } else
        sfRenderWindow_close(a->_window->window);
}

void my_pool_event(v_var *a)
{
    while (sfRenderWindow_pollEvent(a->_window->window, &a->_window->event)) {
        if (a->_window->event.type == sfEvtClosed)
            sfRenderWindow_close(a->_window->window);
        if (a->_window->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyEscape))
            escape_event(a);
        if (a->_window->event.type == sfEvtMouseButtonPressed)
            event_mousepress(a);
        if (a->_window->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyEnter))
            dialogue_past(a);
        if (a->_window->event.type == sfEvtKeyPressed)
            check_key(a);
        if (a->_window->event.type == sfEvtKeyPressed &&
        sfKeyboard_isKeyPressed(sfKeyA))
            a_interaction(a);
        if (a->_window->event.type == sfEvtKeyPressed &&
        sfKeyboard_isKeyPressed(sfKeySpace))
            space_interaction(a);
    }
}

void display(v_var *a)
{
    sfRenderWindow_clear(a->_window->window, sfBlack);
    if (a->_statut->statut == 0)
        display_intro(a);
    if (a->_statut->statut == 1)
        display_menu(a);
    if (a->_statut->statut == 2)
        display_champ_select(a);
    if (a->_statut->statut == 3)
        first_map(a);
    if (a->_statut->statut == 4)
        second_map(a);
    if (a->_statut->statut == 5)
        third_map(a);
    if (a->_statut->statut == 6)
        last_map(a);
    if (a->_statut->statut >= 7 && a->_statut->statut <= 9)
        battle_stage(a);
    if (a->_statut->statut >= 10 && a->_statut->statut <= 13)
        display_all_menu(a);
    sfRenderWindow_display(a->_window->window);
}