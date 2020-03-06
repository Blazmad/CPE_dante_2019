/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** all prototypes
*/

#include <stdlib.h>
#include <time.h>

typedef struct dante
{
    char **maze;
    int x;
    int y;
    int i;
    int j;
}dante_t;

//----------mazes_generator.c---------------|
int check_argument(char *arg1, char *arg2);
int maze_generator(dante_t dante,  int perfect);

//----------update_mazes.c---------------|
dante_t update_maze_down(dante_t dante, int num);
dante_t update_maze_left(dante_t dante, int num);
dante_t update_maze_right(dante_t dante, int num);
dante_t update_maze_up(dante_t dante, int num);