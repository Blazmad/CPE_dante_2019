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
        my_printf("not enough arguments\n");
        exit(84);
    }
    else if (ac > 2) {
        my_printf("too many arguments\n");
        exit(84);
    }
}

int main(int ac, char **av)
{
    dante_t dante;

    arg_error(ac);
    maze_solver(av[1], dante);
    return (0);
}