/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** mazes_generator.c
*/

#include "my.h"

char **update_into_imperfect_maze(dante_t dante)
{
    int num = 0;

    for (int i = 0; dante.maze[i]; i++)
        for (int j = 0; dante.maze[i][j]; j++) {
            num = rand()%3;
            if (dante.maze[i][j] == 'X' && num == 0)
                dante.maze[i][j] = '*';
        }
    return (dante.maze);
}

char **init_maze_without_way(int x, int y)
{
    char **maze = malloc(sizeof(char *) * (y + 1));
    int i = 0;
    int j = 0;

    for (; i < y; i++) {
        maze[i] = malloc(sizeof(char) * x + 1);
        maze[0][0] = '0';
        for (j = 0; j < x; j++) {
            if (j % 2 == 0 && i % 2 == 0)
                maze[i][j] = '1';
            else
                maze[i][j] = 'X';
        }
        maze[i][j] = '\0';
    }
    maze[i] = NULL;
    return (maze);
}

char **make_maze(dante_t dante)
{
    int num = 0;

    srand(time(NULL));
    while (dante.maze[dante.y - 1][dante.x - 1] != '0') {
        num = rand()%4;
        if (num == 0 && dante.i != 0)
            dante = update_maze_up(dante, num);
        if (num == 1 && dante.j != (dante.x - 1))
            dante = update_maze_right(dante, num);
        if (num == 2 && dante.i != (dante.y - 1))
            dante = update_maze_down(dante, num);
        if (num == 3 && dante.j != 0)
            dante = update_maze_left(dante, num);
    }
    return (dante.maze);
}

char **clean_maze(dante_t dante)
{
    for (int i = 0; dante.maze[i]; i++)
        for (int j = 0; dante.maze[i][j]; j++)
            if (dante.maze[i][j] >= '0' && dante.maze[i][j] <= '9')
                dante.maze[i][j] = '*';
    return (dante.maze);
}

int maze_generator(dante_t dante,  int perfect)
{

    dante.maze = init_maze_without_way(dante.x, dante.y);
    dante.maze = make_maze(dante);
    dante.maze = clean_maze(dante);
    if (perfect == 1)
        dante.maze = update_into_imperfect_maze(dante);
    print_maze(dante.maze);
    return (0);
}