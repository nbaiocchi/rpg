/*
** EPITECH PROJECT, 2021
** my_rpg
** File description:
** donjon and octopus
*/

#include "../include/prototype.h"

void start_game(v_var *a)
{
    open_window(a);
    while (sfRenderWindow_isOpen(a->_window->window)) {
        a->_window->mouse = sfMouse_getPosition((sfWindow *)a->_window->window);
        my_pool_event(a);
        if (a->_statut->statut >= 0 && a->_statut->statut <= 2)
            before_game(a);
        if (a->_statut->statut >= 3 && a->_statut->statut <= 6)
            game(a);
        if (a->_statut->statut >= 7 && a->_statut->statut <= 9)
            battle(a);
        if (a->_statut->statut >= 10 && a->_statut->statut <= 13)
            menu(a);
    }
    destroy(a);
}

void usage(void)
{
    my_putstr("USAGE\n     ./my_rpg\n\n");
    my_putstr("DESCRIPTION\n    donjon and octopus:\n");
    my_putstr("you have to kill Octo the boss of the donjon\n");
    my_putstr("fight the enemy you find to gain some xp and gold\n");
}

int main(int ac, char **av)
{
    srand(time(NULL));
    v_var *a = malloc(sizeof(v_var));
    if (ac == 1) {
        create_all(a);
        sfMusic_play(a->_tool->music);
        sfMusic_setVolume(a->_tool->music, a->_tool->volume);
        sfMusic_setLoop(a->_tool->music, sfTrue);
        start_game(a);
    } else if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        usage();
    free_all(a);
    return (0);
}
