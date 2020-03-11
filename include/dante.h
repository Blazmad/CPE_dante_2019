/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** all prototypes
*/

#include <stdlib.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

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

//----------update_mazes.c------------------|
dante_t update_maze_down(dante_t dante, int num);
dante_t update_maze_left(dante_t dante, int num);
dante_t update_maze_right(dante_t dante, int num);
dante_t update_maze_up(dante_t dante, int num);

//----------utils.c-------------------------|
dante_t init_dante(dante_t dante, char *x, char *y);
void print_maze(char **maze);

//---------read_map.c-----------------------|
int maze_solver(char *filepath, dante_t dante);
char *get_map(char *filepath);

//---------display_map.c-----------------------|
dante_t my_str_to_word_array_dante(char const *str, dante_t dante);