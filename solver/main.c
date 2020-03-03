/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** main.c
*/

#include "my.h"

void arg_error(int ac, char **av)
{
    if (ac < 2) {
        printf("not enough arguments\n");
        exit(84);
    }
    else if (ac > 2) {
        printf("too many arguments\n");
        exit(84);
    }
    file_error(av);
}

int file_error(char **av)
{
    int fd = 0;

    if ((fd = open(av[1], O_RDONLY)) == -1) {
        printf("can't read the map\n");
        exit(84);
    }
    return (0);
}

int main(int ac, char **av)
{
    arg_error(ac, av);
    return (0);
}