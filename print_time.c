/*
** EPITECH PROJECT, 2020
** PRINT TIME
** File description:
** NO DESCRIPTION FOUND
*/

#include <time.h>
#include "./include/my_ls.h"
#include "./include/my.h"

void print_time(char *path)
{
    struct stat stats;

    stat(path, &stats);
    char *str = ctime(&stats.st_ctime);
    int i = 0;

    while (str[i] != '\n' && str[i] != ' ')
        i++;
    while (str[i] != ':') {
        my_putchar(str[i]);
        i = i + 1;
    }
    i = i + 1;
    my_putchar(':');
    while (str[i] != ':') {
        my_putchar(str[i]);
        i = i + 1;
    }
    my_putchar(' ');
}