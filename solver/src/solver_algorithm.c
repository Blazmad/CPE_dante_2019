/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** solver_algorithm.c
*/

#include "my.h"

void move_up(dante_t *dante, int i, int j)
{
    if (dante->maze[i - 1][j] == 'o') {
        dante->val_maze[i][j] = -1;
        dante->maze[i][j] = 'A';
    } else
        dante->maze[i - 1][j] = 'o';
}

void move_right(dante_t *dante, int i, int j)
{
    if (dante->maze[i][j + 1] == 'o') {
        dante->val_maze[i][j] = -1;
        dante->maze[i][j] = 'A';
    } else
        dante->maze[i][j + 1] = 'o';
}

void move_down(dante_t *dante, int i, int j)
{
    if (dante->maze[i + 1][j] == '0') {
        dante->val_maze[i][j] = -1;
        dante->maze[i][j] = 'A';
    } else
        dante->maze[i + 1][j] = 'o';
}

void move_left(dante_t *dante, int i, int j)
{
    if (dante->maze[i][j - 1] == 'o') {
        dante->val_maze[i][j] = -1;
        dante->maze[i][j] = 'A';
    } else
        dante->maze[i][j - 1] = 'o';
}

dante_t solve_algo(dante_t dante)
{
    int i = 0;
    int j = 0;
    int next = 0;

    dante.maze[0][0] = 'o';
    while (dante.maze[dante.y - 1][dante.x - 1] != 'o') {
        next = compare_next_way(dante, dante.val_maze, i, j);
        (next == 4 ? my_printf("no solution found\n"), exit(0) : 0);        
        (next == 0 ? move_up(&dante, i, j), i-- : 0);        
        (next == 1 ? move_right(&dante, i, j), j++ : 0);
        (next == 2 ? move_down(&dante, i, j), i++ : 0);
        (next == 3 ? move_left(&dante, i, j), j-- : 0);
    }
    return (dante);
}