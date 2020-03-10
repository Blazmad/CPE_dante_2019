/*
** EPITECH PROJECT, 2019
** solver
** File description:
** display_map.c
*/

#include "my.h"

int nb_lines_dante(char const *str)
{
    int i = 0;
    int line = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            line++;
        i++;
    }
    return (line + 1);
}

int nb_char_dante(char const *str)
{
    int i = 0;

    while (str[i] != '\n') {
        i++;
    }
    return (i);
}

char **my_str_to_word_array_dante(char const *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int lines = nb_lines_dante(str);
    char **array = malloc(sizeof(char *) * (lines + 1));

    while (i < lines) {
        array[i] = malloc(sizeof(char) * nb_char_dante(str) + 1);
        j = 0;
        while (str[k] != '\n' && str[k] != '\0') {
            array[i][j] = str[k];
            j++;
            k++;
        }
        array[i][j] = '\0';
        i++;
        k++;
    }
    array[i] = NULL;
    return (array);
}