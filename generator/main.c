/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** generator/main.c
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac < 3)
        return (84);
    if (check_argument(av[1], av[2]) != 0)
        return (84);
    if (ac == 3)
        maze_generator(my_getnbr(av[1]), my_getnbr(av[2]), 1);
    if (ac == 4)
        if (my_strcmp(av[3], "perfect") == 0)
            maze_generator(my_getnbr(av[1]), my_getnbr(av[2]), 2);
    return (0);
}