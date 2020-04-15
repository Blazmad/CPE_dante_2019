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
    int **val_maze;
    int x;
    int y;
    int i;
    int j;
}dante_t;

//src/check_map.c
void check_map(dante_t dante);

//src/make_mazes.c
dante_t int_from_maze(dante_t dante);
dante_t my_str_to_word_array_dante(char const *str, dante_t dante);
void print_maze(char **maze);

//src/make_easy_mazes.c
char **make_imperfect_maze(dante_t dante);
char **make_perfect_maze(dante_t dante);

//src/mazes_generator.c
int check_argument(char *arg1, char *arg2);
int maze_generator(dante_t dante,  int perfect);

//src/read_map.c
int maze_solver(char *filepath, dante_t dante);
char *get_map(char *filepath);

//src/update_mazes.c
dante_t update_maze_down(dante_t dante, int num);
dante_t update_maze_left(dante_t dante, int num);
dante_t update_maze_right(dante_t dante, int num);
dante_t update_maze_up(dante_t dante, int num);

//src/utils.c
char **clean_maze(dante_t dante);
dante_t init_dante(dante_t dante, char *x, char *y);
void print_maze(char **maze);

//src/solver_algorithm_imperfect.c
dante_t imperfect_algo(dante_t dante);

//src/solver_algorithm_perfect.c
int	perfect_maze(dante_t *dante, int i, int j);
int second_algo(dante_t dante);

//src/solver_algorithm_utils.c
dante_t clean_mazes(dante_t dante);
int compare_next_way(dante_t dante, int **val_maze, int i, int j);
void free_all(dante_t dante);