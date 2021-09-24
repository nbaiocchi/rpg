/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void init(v_var *a)
{
    a->_coli1->size = 0;
    for (int i = 0; a->_coli1->map[i] != '\0'; i += 1) {
        if (a->_coli1->map[i] == '1')
            a->_coli1->size += 1;
    }
}

void take_map(v_var *a)
{
    int n = 0;
    int x = 0;
    int y = 0;

    init(a);
    for (int i = 0; a->_coli1->map[i] != '\0'; i += 1) {
        if (a->_coli1->map[i] == '0') {
            x += 30;
        } else if (a->_coli1->map[i] == '\n') {
            y += 30;
            x = 0;
        }
        if (a->_coli1->map[i] == '1') {
            a->_coli1[n].pos_coli.x = x;
            a->_coli1[n].pos_coli.y = y;
            x += 30;
            n += 1;
        }
    }
}

int map1(v_var *a)
{
    struct stat buf;
    int fd;
    int ret = 0;

    stat("map/map1.txt", &buf);
    a->_coli1->map = malloc(sizeof(char) * buf.st_size + 1);
    fd = open("map/map1.txt", O_RDONLY);
    if (fd == -1)
    	return (84);
    ret = read(fd, a->_coli1->map, buf.st_size);
    if (ret == -1)
    	return (84);
    a->_coli1->map[ret] = '\0';
    close(fd);
    take_map(a);
    return (0);
}