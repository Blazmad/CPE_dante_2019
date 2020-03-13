/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** solver_algorithm_utils.c
*/

#include "my.h"

dante_t clean_maze(dante_t dante)
{
    for (int i = 0; dante.maze[i]; i++)
        for (int j = 0; dante.maze[i][j]; j++)
            if (dante.maze[i][j] == 'A')
                dante.maze[i][j] = '*';
    return (dante);
}

int wich_nbr_is_highest(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
        return (0);
    if (b > a && b > c && b > d)
        return (1);
    if (c > a && c > b && c > d)
        return (2);
    if (d > a && d > b && d > c)
        return (3);
    if (a == -1 && d == -1 && c == -1 && d == -1)
        return (4);
    return (-1);
}

int compare_next_way(dante_t dante, int **val_maze, int i, int j)
{
    int next = 0;
    int a = -1;
    int b = -1;
    int c = -1;
    int d = -1;

    if (i != 0)
        a = val_maze[i - 1][j];
    if (j != (dante.x - 1))
        b = val_maze[i][j + 1];
    if (i != (dante.y - 1))
        c = val_maze[i + 1][j];
    if (j != 0)
        d = val_maze[i][j - 1];
    next = wich_nbr_is_highest(a, b, c, d);
    return (next);
}

int maze_solver(char *filepath, dante_t dante)
{
    char *buffer = get_map(filepath);

    dante = my_str_to_word_array_dante(buffer, dante);
    dante = int_from_maze(dante);
    check_map(dante);
    dante = solve_algo(dante);
    dante = clean_maze(dante);
    my_show_word_array(dante.maze);
    return (0);
}