/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void initiali(v_var *a)
{
    a->_coli4->size = 0;
    for (int i = 0; a->_coli4->map[i] != '\0'; i += 1) {
        if (a->_coli4->map[i] == '1')
            a->_coli4->size += 1;
    }
}

void take_map4(v_var *a)
{
    int n = 0;
    int x = -960;
    int y = -1205;

    initiali(a);
    for (int i = 0; a->_coli4->map[i] != '\0'; i += 1) {
        if (a->_coli4->map[i] == '0') {
            x += 30;
        } else if (a->_coli4->map[i] == '\n') {
            y += 30;
            x = -960;
        }
        if (a->_coli4->map[i] == '1') {
            a->_coli4[n].pos_coli.x = x;
            a->_coli4[n].pos_coli.y = y;
            x += 30;
            n += 1;
        }
    }
}

int map4(v_var *a)
{
    struct stat buf;
    int fd;
    int ret = 0;

    stat("map/map4.txt", &buf);
    a->_coli4->map = malloc(sizeof(char) * buf.st_size + 1);
    fd = open("map/map4.txt", O_RDONLY);
    if (fd == -1)
    	return (84);
    ret = read(fd, a->_coli4->map, buf.st_size);
    if (ret == -1)
    	return (84);
    a->_coli4->map[ret] = '\0';
    close(fd);
    take_map4(a);
    return (0);
}