/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** make_perfect_maze.c
*/

#include "my.h"

char **make_perfect_maze(dante_t dante)
{
    char **maze = malloc(sizeof(char *) * (dante.y + 1));
    int i = 0;
    int j = 0;
    int way = 0;

    for (; i < dante.y; i++) {
        maze[i] = malloc(sizeof(char) * dante.x + 1);
        way = rand()%dante.x;
        for (j = 0; j < dante.x; j++) {
            if (i % 2 == 0 || (j == way && i != dante.y - 1))
                maze[i][j] = '*';
            else
                maze[i][j] = 'X';
        }
        maze[i][j] = '\0';
    }
    maze[i - 1][j - 1] = '*';
    maze[i] = NULL;
    return (maze);
}

char **make_imperfect_maze(dante_t dante)
{
    char **maze = malloc(sizeof(char *) * (dante.y + 1));
    int i = 0;
    int j = 0;
    int way = 0;

    for (; i < dante.y; i++) {
        maze[i] = malloc(sizeof(char) * dante.x + 1);
        for (j = 0; j < dante.x; j++) {
            way = rand()%10;
            if ((i == 0 && j == 0 ) || (i == dante.y - 1 && j == dante.x - 1))
                maze[i][j] = '*';
            else if (way >= 0 && way <= 2)
                maze[i][j] = 'X';
            else
                maze[i][j] = '*';
        }
        maze[i][j] = '\0';
    }
    maze[i] = NULL;
    return (maze);
}