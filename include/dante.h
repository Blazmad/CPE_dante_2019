/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** all prototypes
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* solver/main */
int file_error(char **av);

void arg_error(int ac);

/* solver/src/read_map */
char *get_map(char **av);

int count_charac(char *buffer);

int count_line(char *buffer);

char **str_to_array(char *buffer);

/* solver/src/display_map */
int maze_gestion(char **av);