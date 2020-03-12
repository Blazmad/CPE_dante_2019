/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** check_map.c
*/

#include "my.h"

void check_map(dante_t dante)
{
    int i = 0;
    int j = 0;

    if (dante.maze[0][0] != '*') {
        my_printf("Invalid map\n");
        exit(84);
    }
    for (i = 0; dante.maze[i]; i++)
        for (j = 0; dante.maze[i][j]; j++)
            if (dante.maze[i][j] != '*' && dante.maze[i][j] != 'X') {
                my_printf("Invalid map\n");
                exit(84);
            }
}