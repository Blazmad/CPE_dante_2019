/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** update_maze.c
*/

#include "my.h"

dante_t update_maze_up(dante_t dante, int num)
{
    if (num == 0 && dante.i != 0) {
        if (dante.i == (dante.y - 1) && (dante.y % 2) == 0) {
            dante.maze[dante.i - 1][dante.j] = '0';
            dante.i -= 1;
        } else if ((dante.maze[dante.i - 2][dante.j] == '1' &&
            dante.maze[dante.i - 1][dante.j] == 'X') ||
            (dante.maze[dante.i - 2][dante.j] == '0' &&
            dante.maze[dante.i - 1][dante.j] == '0' )) {
            dante.maze[dante.i - 1][dante.j] = '0';
            dante.maze[dante.i - 2][dante.j] = '0';
            dante.i -= 2;
        } else
            return (update_maze_up(dante, rand()%4));
    }
    return (dante);
}

dante_t update_maze_right(dante_t dante, int num)
{
    if (num == 1 && dante.j != (dante.x - 1)) {
        if ((dante.maze[dante.i][dante.j + 1] == 'X' &&
            dante.maze[dante.i][dante.j + 2] == 0) ||
            dante.maze[dante.i][dante.j + 1] == '2') {
            dante.maze[dante.i][dante.j + 1] = '0';
            dante.j += 1;
        } else if ((dante.maze[dante.i][dante.j + 2] == '1' &&
            dante.maze[dante.i][dante.j + 1] == 'X') ||
            (dante.maze[dante.i][dante.j + 2] == '0' &&
            dante.maze[dante.i][dante.j + 1] == '0')) {
            dante.maze[dante.i][dante.j + 1] = '0';
            dante.maze[dante.i][dante.j + 2] = '0';
            dante.j += 2;
        } else
            return (update_maze_right(dante, rand()%4));
    }
    return (dante);
}

dante_t update_maze_down(dante_t dante, int num)
{
    if (num == 2 && dante.i != (dante.y - 1)) {
        if (((dante.maze[dante.i + 1][dante.j] == 'X' ||
            dante.maze[dante.i + 1][dante.j] == '0') &&
            (dante.i + 1) == (dante.y - 1)) ||
            dante.maze[dante.i + 1][dante.j] == '2') {
            dante.maze[dante.i + 1][dante.j] = '0';
            dante.i += 1;
        } else if ((dante.maze[dante.i + 2][dante.j] == '1' &&
            dante.maze[dante.i + 1][dante.j] == 'X') ||
            (dante.maze[dante.i + 2][dante.j] == '0' &&
            dante.maze[dante.i + 1][dante.j] == '0')) {
            dante.maze[dante.i + 1][dante.j] = '0';
            dante.maze[dante.i + 2][dante.j] = '0';
            dante.i += 2;
        } else
            return (update_maze_down(dante, rand()%4));
    }
    return (dante);
}

dante_t update_maze_left(dante_t dante, int num)
{
    if (num == 3 && dante.j != 0) {
        if (dante.j == (dante.x - 1) && (dante.x % 2) == 0) {
            dante.maze[dante.i][dante.j - 1] = '0';
            dante.j -= 1;
        } else if ((dante.maze[dante.i][dante.j - 2] == '1' &&
            dante.maze[dante.i][dante.j - 1] == 'X') ||
            (dante.maze[dante.i][dante.j - 2] == '0' &&
            dante.maze[dante.i][dante.j - 1] == '0')) {
            dante.maze[dante.i][dante.j - 1] = '0';
            dante.maze[dante.i][dante.j - 2] = '0';
            dante.j -= 2;
        } else
            return (update_maze_left(dante, rand()%4));
    }
    return (dante);
}