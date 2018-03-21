#include "shell.h"
/**
 * printenv - prints the environment of process
 */
void printenv(void)
{
	int i, j;

	i = 0;
	while (environ[i] != NULL)
	{
		j = 0;
		while (environ[i][j] != '\0')
		{
			_putchar(environ[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
