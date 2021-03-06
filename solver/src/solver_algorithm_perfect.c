/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** solver_algorithm_perfect.c
*/

#include "my.h"

int perfect_maze_two(dante_t *dante, int i, int j)
{
    if (i + 1 < dante->y && dante->maze[i + 1][j] == '*' &&
        perfect_maze(dante, i + 1, j) == 0)
        return (0);
    if (j - 1 >= 0 && dante->maze[i][j - 1] == '*' &&
        perfect_maze(dante, i, j - 1) == 0)
        return (0);
    if (i - 1 >= 0 && dante->maze[i - 1][j] == '*' &&
        perfect_maze(dante, i - 1, j) == 0)
        return (0);
    dante->maze[i][j] = 'A';
    return (-1);
}

int	perfect_maze(dante_t *dante, int i, int j)
{
    dante->maze[i][j] = 'o';
    if (j == dante->x - 1 && i == dante->y - 1)
        return (0);
    if (j + 1 < dante->x && dante->maze[i][j + 1] == '*' &&
        perfect_maze(dante, i, j + 1) == 0)
        return (0);
    if (perfect_maze_two(dante, i, j) == 0)
        return (0);
    return (-1);
}

int second_algo(dante_t dante)
{
    for (int i = 0; dante.maze[i]; i++)
        for (int j = 0; dante.maze[i][j]; j++)
            if (dante.maze[i][j] != '*' && dante.maze[i][j] != 'X')
                dante.maze[i][j] = '*';
    if (perfect_maze(&dante, 0, 0) == -1) {
        my_printf("no solution found\n");
        free_all(dante);
        exit(84);
    }
    return (0);
}