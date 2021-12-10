#include "sshell.h"

/**
 * split_line - function that split a line
 * @line: pointer to line
 * Return: args
 */

char **split_line(char *line)
{
int p = 0;
char **args, *arg;

args = malloc(sizeof(char *) * 1024);
if (args == NULL)
return (NULL);
arg = strtok(line, " \t\r\n\a");
while (arg != NULL)
{
args[p] = arg;
p++;
arg = strtok(NULL, " \t\r\n\a");
}
args[p] = NULL;
return (args);
}
