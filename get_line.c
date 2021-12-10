#include "shell.h"
/**
 * read_line - function that read a line
 * Return: line
 */
char *read_line(void)
{
char *line = NULL;
size_t bufsize = 0;
int x;
x = getline(&line, &bufsize, stdin);
if (x == -1)
{
perror("readline");
return (0);
}
line[x - 1] = '\0';
return (line);
}
