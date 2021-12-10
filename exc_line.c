#include "sshell.h"
/**
 *  * execute_line - function that execute a line
 *   *@args: pointer to strings
 *    * Return: 0
 */
int execute_line(char **args)
{
	int i;
	char **paths;
	char *buffer;
	struct stat st;
	pid_t pid;
	if (args[0] == NULL)
		return (1);
	if (_strcmp(args[0], "exit") == 0)
		exit(0);
	if (_strcmp(args[0], "env") == 0)
		print_env();
	paths = split_path(get_path());
	while (paths[i] != NULL)
	{
		buffer = malloc(sizeof(char) * 1024);
		_strcat(buffer, paths[i]);
		_strcat(buffer, "/");
		_strcat(buffer, args[0]);
		if (stat(buffer, &st) == 0)
		{
			pid = fork();
			if (pid == 0)
			{
				if (execve(buffer, args, NULL))
					exit(0);
			}
			else
			{
				wait(NULL);
			}
			free(buffer);
			return (0);
		}
		i++;
	}
	return (0);
}
