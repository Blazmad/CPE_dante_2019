/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** utils.c
*/

#include "my.h"

dante_t init_dante(dante_t dante, char *x, char *y)
{
    dante.maze = NULL;
    dante.x = my_getnbr(x);
    dante.y = my_getnbr(y);
    dante.i = 0;
    dante.j = 0;
    return (dante);
}

void print_maze(char **maze)
{
    for (int i = 0; maze[i]; i++) {
        my_putstr(maze[i]);
        if (maze[i + 1] != NULL)
            my_putchar('\n');
    }
}