/*
** EPITECH PROJECT, 2020
** FIND RIGHT
** File description:
** NO DESCRIPTION FOUND
*/

#include "./include/my_ls.h"
#include "./include/my.h"

void print_rights(char *path)
{
    struct stat stats;

    stat(path, &stats);
    my_putstr((S_ISDIR(stats.st_mode))?"d":"-");
    my_putstr((stats.st_mode & S_IRUSR)?"r":"-");
    my_putstr((stats.st_mode & S_IWUSR)?"w":"-");
    my_putstr((stats.st_mode & S_IXUSR)?"x":"-");
    my_putstr((stats.st_mode & S_IRGRP)?"r":"-");
    my_putstr((stats.st_mode & S_IWGRP)?"w":"-");
    my_putstr((stats.st_mode & S_IXGRP)?"x":"-");
    my_putstr((stats.st_mode & S_IROTH)?"r":"-");
    my_putstr((stats.st_mode & S_IWOTH)?"w":"-");
    my_putstr((stats.st_mode & S_IXOTH)?"x":"-");
    my_putstr((stats.st_mode & __S_ISVTX)?"t":"-");
    my_putstr(". ");
    return;
}