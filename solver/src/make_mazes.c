/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** display_map.c
*/

#include "my.h"

void print_maze(char **maze)
{
    for (int i = 0; maze[i]; i++) {
        my_putstr(maze[i]);
        if (maze[i + 1] != NULL)
            my_putchar('\n');
    }
}

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

    while (str[i] != '\n')
        i++;
    return (i);
}

dante_t my_str_to_word_array_dante(char const *str, dante_t dante)
{
    int i = 0;
    int j = 0;
    dante.y = nb_lines_dante(str);
    dante.x = nb_char_dante(str);
    dante.maze = malloc(sizeof(char *) * (dante.y + 1));

    for (int k = 0; i < dante.y; i++) {
        dante.maze[i] = malloc(sizeof(char) * dante.x + 1);
        for (j = 0; str[k] != '\n' && str[k] != '\0'; j++) {
            dante.maze[i][j] = str[k];
            k++;
        }
        dante.maze[i][j] = '\0';
        k++;
    }
    dante.maze[i] = NULL;
    return (dante);
}

dante_t int_from_maze(dante_t dante)
{
    int x = 0;

    dante.val_maze = malloc(sizeof(long long *) * (dante.y + 1));
    for (int i = 0; i < dante.y; i++) {
        dante.val_maze[i] = malloc (sizeof(long long) * (dante.x));
        for (int j = 0; j < dante.x; j++, x++) {
            if (dante.maze[i][j] != 'X')
                dante.val_maze[i][j] = i + j + x;
            else
                dante.val_maze[i][j] = -1;
        }
    }
    return (dante);
}