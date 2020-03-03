/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** read_map.c
*/

#include "my.h"

int read_error(int fd, int status)
{
    if (fd == -1)
        exit (84);
    if (status == -1)
        exit (84);
    return (0);
}

char *get_map(char **av)
{
    struct stat size;
    int fd = open(av[1], O_RDONLY);
    char *buffer;
    int status;

    stat(av[1], &size);
    buffer = malloc(sizeof(char) * (size.st_size + 1));
    status = read(fd, buffer, size.st_size);
    read_error(fd, status);
    buffer[size.st_size] = '\0';
    my_putstr(buffer);
    close(fd);
    return (buffer);
}