/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "../../include/prototype.h"

void count(int *tmp, int *a)
{
    while (*tmp > 0) {
        *a += 1;
        *tmp = *tmp / 10;
    }
}

char *my_revstr(char *str)
{
    int x = 0;
    int t = 0;
    int b = 0;

    while (str[x] != '\0') {
        x++;
    }
    x--;
    while ( x >= b ) {

        t = str[x];
        str[x] = str[b];
        str[b] = t;

        x--;
        b++;
    }
    return (str);
}

char *my_convert_int(int nb)
{
    int a = 0;
    int x = 0;
    int nb2 = 0;
    int tmp = nb;
    char *str;

    count(&tmp, &a);
    str = malloc(sizeof(char) * (a + 5));
    while (nb > 0) {
        nb2 = nb % 10;
        nb = nb / 10;
        str[x] = nb2 + 48;
        x += 1;
        nb2 = 0;
    }
    str[x] = '\0';
    my_revstr(str);
    return (str);
}

int my_putstr(char *str)
{
    int i = 0;

    if (str[0] == '0') {
        my_putchar('0');
        return (0);
    }
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}