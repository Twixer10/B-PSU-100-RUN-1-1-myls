/*
** EPITECH PROJECT, 2020
** PRINT LINK
** File description:
** NO DESCRIPTION
*/

#include "./include/my_ls.h"
#include "./include/my.h"

void print_link(char *path)
{
    struct stat stats;

    stat(path, &stats);
    my_printf("%d ", stats.st_nlink);
}
