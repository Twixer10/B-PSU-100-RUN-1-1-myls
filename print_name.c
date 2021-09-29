/*
** EPITECH PROJECT, 2020
** PRINT NAME
** File description:
** NO DESC
*/

#include "./include/my_ls.h"
#include "./include/my.h"

void print_name(char *path)
{
    struct stat stats;
    struct passwd *passwd;
    struct group *group;

    stat(path, &stats);
    passwd = getpwuid(stats.st_uid);
    group = getgrgid(stats.st_gid);
    my_printf("%s %s", group->gr_name, passwd->pw_name);

}