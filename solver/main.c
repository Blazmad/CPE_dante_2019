/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** solver/main.c
*/

#include "my.h"

void arg_error(int ac)
{
    if (ac < 2) {
        printf("not enough arguments\n");
        exit(84);
    }
    else if (ac > 2) {
        printf("too many arguments\n");
        exit(84);
    }
}

int main(int ac, char **av)
{
    maze_t maze;
    char *file = NULL;

    file = get_map(av);
    maze.maz = my_str_to_word_array_dante(file);
    check_map(maze);
    my_show_word_array(maze.maz);
    arg_error(ac);
    return (0);
}