/*
** EPITECH PROJECT, 2020
** HAVE ARGS
** File description:
** NO DESCRIPTION FOUND
*/

#include "./include/my_ls.h"
#include "./include/my.h"


void inwhile(struct dirent *dir, char *path, struct stat *stats)
{
    char *longpath = "";
    char *slash = "/";

    if (dir->d_name[0] != '.') {
        longpath = my_strcat(longpath, path);
        longpath = my_strcat(longpath, slash);
        longpath = my_strcat(longpath, dir->d_name);
        stat(longpath, stats);
        print_rights(longpath);
        print_link(longpath);
        print_name(longpath);
        print_size(longpath);
        print_time(longpath);
        my_printf("%s\n", dir->d_name);
        free(longpath);
    }
}

void have_args(char *path)
{
    struct stat stats;
    struct dirent *dir;
    DIR *rep = opendir(path);

    stat(path, &stats);
    if (rep == NULL) {
        if (S_ISREG(stats.st_mode)) {
            my_printf(path);
            return;
        } else
            exit (84);
    }
    while ((dir = readdir(rep)) != NULL)
        inwhile(dir, path, &stats);
    closedir(rep);
    return;
}
