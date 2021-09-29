/*
** EPITECH PROJECT, 2020
** UTILS
** File description:
** utils
*/

#include "./include/my_ls.h"
#include "./include/my.h"

void rm_point(char *str)
{
    if (str[0] != '.')
        my_printf("%s ", str);
    return;
}
