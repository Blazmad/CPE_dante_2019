/*
** EPITECH PROJECT, 2019
** solver
** File description:
** display_map.c
*/

#include "my.h"

int maze_gestion(char **av)
{
    char *buffer = get_map(av);
    char **double_array = my_str_to_word_array(buffer);

    my_show_word_array(double_array);
    return (0);
}

