#include "sshell.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *line;
	char **args;

	while (1)
	{
		_putchar('$');
		_putchar(' ');
		line = read_line();
		args = split_line(line);
		execute_line(args);
		free(line);
		free(args);
	}
	return (0);
}
