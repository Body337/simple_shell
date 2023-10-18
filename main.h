#ifndef __HEAD__
#define __HEAD__
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <stddef.h>
#include <sys/stat.h>
#include <limits.h>
#define BUFFER 1024


char **make_array(char *str);
ssize_t _getline(char **lineptr, ssize_t *n, FILE *stream);

int _atoi(char *s);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strchr(char *s, char c);
char *my_strtok(char *str, char *delim);
int _putchar(char c);
void execute(char **arr, char **av);

void free_grid(int **grid, int height);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
