/*
** EPITECH PROJECT, 2020
** NO ARGUMENTS
** File description:
** NO DESCRIPTION FOUND
*/

#include "./include/my_ls.h"
#include "./include/my.h"

void no_args(char *path)
{
    struct stat filestat;
    struct dirent *reading;
    DIR *rep = opendir(path);

    stat(path, &filestat);
    if (rep == NULL) {
        if (S_ISREG(filestat.st_mode)) {
            my_putstr(path);
            my_putchar('\n');
            return;
        } else {
            my_printf("my_ls: No such file or directory");
            exit (84);
        }
    }
    while ((reading = readdir(rep)) != NULL) {
        rm_point(reading->d_name);
    }
    my_putchar('\n');
    closedir(rep);
    return;
}