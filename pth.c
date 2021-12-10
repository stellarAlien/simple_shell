nclude "sshell.h"
/**
 * * get_path - function that get path.
 * * Return: path
 */
char *get_path()
{

	char *str = "PATH";
	int i = 0, j = 0, k = 0;
	char *path = malloc(sizeof(char) * 1024);

	if (path == NULL)
		return (NULL);
	while (environ[i])
	{
		j = 0;
		while (str[j] == environ[i][j])
		{
			j++;
			if (environ[i][j] == '=')
			{
				j++;
				while (environ[i][j])
				{
					path[k] =  environ[i][j];
					j++;
					k++;
				}
				return (path);
			}
		}
		i++;
	}
	return (NULL);
}
/**
 * split_path - function that split a path.
 * @path: path
 * Return: args
 */
char **split_path(char *path)
{
	int p = 0;
	char **args, *arg;

	args = malloc(sizeof(char *) * 1024);
	if (args == NULL)
	return (NULL);

	arg = strtok(path, ":");
	while (arg != NULL)
	{
		args[p] = arg;
		p++;
		arg = strtok(NULL, ":");
	}
	args[p] = NULL;
	return (args);
}

/**
 * print_env - function that print env
 * Return: 0
 */

int print_env(void)
{
	int i = 0, j;

	while (environ[i] != NULL)
	{
	j = 0;
	while (environ[i][j])
	{
		_putchar(environ[i][j]);
		j++;
	}
	putchar('\n');
	i++;
}
return (0);
}
