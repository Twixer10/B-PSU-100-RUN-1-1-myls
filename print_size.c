/*
** EPITECH PROJECT, 2020
** PRINT SIZE
** File description:
** NO DESC FOUND
*/

#include "./include/my_ls.h"
#include "./include/my.h"

void print_size(char *path)
{
    struct stat stats;

    stat(path, &stats);
    my_printf("%d ", stats.st_size);
}
