/*
** EPITECH PROJECT, 2021
** create
** File description:
** all
*/

#include "../../include/prototype.h"

int my_music(v_var *a)
{
    a->_tool->music = sfMusic_createFromFile("./song/music.ogg");
    if (!a->_tool->music)
        return (0);
    a->_tool->octo = sfMusic_createFromFile("./song/poulpe.ogg");
    if (!a->_tool->octo)
        return (0);
    a->_tool->clic = sfSound_create();
    a->_tool->bclic = sfSoundBuffer_createFromFile("./song/clic.ogg");
    sfSound_setBuffer(a->_tool->clic, a->_tool->bclic);
    return (0);
}

void create_all(v_var *a)
{
    malloc_struct(a);
    map1(a);
    map2(a);
    map3(a);
    map4(a);
    create_clock(a);
    sprite(a);
    sprite2(a);
    sprite3(a);
    my_music(a);
    pose(a);
    rect(a);
    rect2(a);
    rect3(a);
    text(a);
    variable(a);
}