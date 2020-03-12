/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** check_argument.c
*/

#include "my.h"

int check_argument(char *arg1, char *arg2)
{
    if (arg1[0] == '0' || arg2[0] == '0')
        return (84);
    if (arg1[0] == '1' && arg1[0] == '1' &&
        (arg1[1] == '\0' && arg1[1] == '\0')) {
        my_putstr("*");
        exit(0);
    }
    for (int i = 0; arg1[i]; i++)
        if (arg1[i] < '0' || arg1[i] > '9')
            return (84);
    for (int i = 0; arg2[i]; i++)
        if (arg1[i] < '0' || arg1[i] > '9')
            return (84);
    return (0);
}