/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** maze_solver.c
*/

#include "my.h"

int maze_solver(char *filepath, dante_t dante)
{
    char *buffer = get_map(filepath);
    dante = my_str_to_word_array_dante(buffer, dante);

    my_show_word_array(dante.maze);
    return (0);
}