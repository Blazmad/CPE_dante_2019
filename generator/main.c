/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** generator/main.c
*/

#include "my.h"

int main(int ac, char **av)
{
    dante_t dante;

    if (ac < 3)
        return (84);
    if (check_argument(av[1], av[2]) != 0)
        return (84);
    dante = init_dante(dante, av[1], av[2]);
    if (ac == 3)
        maze_generator(dante, 1);
    if (ac == 4)
        if (my_strcmp(av[3], "perfect") == 0)
            maze_generator(dante, 0);
    return (0);
}