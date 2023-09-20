#ifndef __HEADER__
#define __HEADER__
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/stat.h>
extern char **environ;

char **make_array(char *str, char **array);
int _strlen(char *str);
char *_strtok(char *str, char *del);
char *_strchr(char *s, char c);
int n_elements(char *str);

int execute(char **cmd);
#endif
