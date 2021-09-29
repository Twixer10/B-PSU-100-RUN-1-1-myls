/*
** EPITECH PROJECT, 2020
** MY LS
** File description:
** NO DESCRIPTION FOUND
*/

#include "./include/my_ls.h"
#include "./include/my.h"

void haveparams2(int ac, char **av)
{
    int i = 0;
    char point[2] = ".";

    if (av[1][i] == '-') {
        i = i + 1;
        if (av[1][i] == 'l') {
            if (ac == 3)
                have_args(av[2]);
            if (ac == 2)
                have_args(point);
        }
    } else
        no_args(av[1]);
    return;
}

int main(int ac, char **av)
{
    av = av;
    if (ac < 2)
        no_args(".");
    if (ac >= 2) {
        if (ac == 3)
            have_args(av[2]);
        else
            haveparams2(ac, av);
    }
}