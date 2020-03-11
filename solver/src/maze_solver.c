/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** maze_solver.c
*/

#include "my.h"

// int check_options(dante_t dante, int i, int j)
// {
//     int opt = 0;

//     if (i != 0)
//         if (dante.maze[i - 1][j] == '*')
//             opt++;
//     if (j != 0)
//         if (dante.maze[i][j - 1] == '*')
//             opt++;
//     if (i != dante.y - 1)
//         if (dante.maze[i + 1][j] == '*')
//             opt++;
//     if (j != dante.x - 1)
//         if (dante.maze[i][j + 1] == '*')
//             opt++;
//     return (opt);
// }

// char **check_possibilities(dante_t dante)
// {
//     int opt = 0;

//     for (int i = 0; dante.maze[i]; i++) {
//         my_printf("%d -> ", i);
//         for (int j = 0; dante.maze[i][j]; j++) {
//             opt = check_options(dante, i, j);
//             if (dante.maze[i][j] != 'X') {
//                 // dante.maze[i][j] = (i + j) + 48; 
//                 my_put_nbr(i + j);
//                 my_putstr("     ");
//                 // dante.maze[i][j] = '?';
//                 // if (opt == 1 || opt == 0)
//                 //     dante.maze[i][j] = '0';
//             } else
//                 my_putstr("X     ");
//         }
//         my_putchar('\n');
//     }
//     return (dante.maze);
// }

int maze_solver(char *filepath, dante_t dante)
{
    char *buffer = get_map(filepath);
    dante = my_str_to_word_array_dante(buffer, dante);

    my_show_word_array(dante.maze);
    // my_putchar('\n');
    // check_possibilities(dante);
    return (0);
}