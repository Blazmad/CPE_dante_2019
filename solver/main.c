/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** main.c
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
    arg_error(ac);
    maze_gestion(av);
    return (0);
}