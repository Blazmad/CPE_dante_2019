/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** mazes_generator.c
*/

#include "my.h"

char **make_maze(int x, int y)
{
    char **maze = malloc(sizeof(char *) * (y + 1));
    int i = 0;
    int j = 0;
    int num = 0;

    srand(time(NULL));
    for (; i < y; i++) {
        maze[i] = malloc(sizeof(char) * x + 1);
        for (j = 0; j < x; j++) {
            num = rand()%4;
            if ((i == 0 && j == 0) || (j == (x - 1) && i == (y - 1)) ||
                (num >= 0 && num <= 2))
                maze[i][j] = '*';
            else if (num == 3)
                maze[i][j] = 'X';
        }
        maze[i][j] = '\0';
    }
    maze[i] = NULL;
    return (maze);
}

int maze_generator(int x, int y, int perfect)
{
    char **maze = NULL;

    if (perfect == 1)
        maze = make_maze(x, y);
    else if (perfect == 2)
        maze = make_maze(x, y);
    my_show_word_array(maze);
    return (0);
}