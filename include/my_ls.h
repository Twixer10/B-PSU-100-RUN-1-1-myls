/*
** EPITECH PROJECT, 2020
** MY LS 
** File description:
** NO DESCRIPTION FOUND
*/

#ifndef MY_LS_H_
#define MY_LS_H_

#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <pwd.h>
#include <grp.h>

typedef struct my_ls_h {
    struct passwd passwd;
    struct stat stat;
    struct group group;
    struct my_ls_h *next;
} my_ls_t;

void no_args(char *path);
void rm_point(char *str);
void have_args(char *path);
void inwhile(struct dirent *dir, char *path, struct stat *stats);
void print_rights(char *path);
void print_name(char *path);
void print_link(char *path);
void print_size(char *path);
void print_time(char *pathfile);


#endif /* !MY_LS_H_ */
