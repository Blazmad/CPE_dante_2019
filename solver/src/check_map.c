/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** check_map.c
*/

#include "my.h"

void check_map(maze_t maze)
{
    int i = 0;
    int j = 0;

    if (maze.maz[0][0] != '*') {
        my_printf("Invalid map\n");
        exit(84);
    }
    for (i = 0; maze.maz[i]; i++) {
        for (j = 0; maze.maz[i][j]; j++) {
            if (maze.maz[i][j] != '*' && maze.maz[i][j] != 'X') {
                my_printf("Invalid map\n");
                exit(84);
            }
        }
    }
}