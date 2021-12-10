#ifndef SSHELL_H
#define SSHELL_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>
extern char **environ;
int main(void);
int _putchar(char c);
char *read_line(void);
char **split_line(char *line);
int execute_line(char **args);
char *get_path(void);
char **split_path(char *path);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int exit_shell(void);
int print_env(void);
#endif
