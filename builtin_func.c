#include "shell.h"
/**
 * exit_function - exits shell
 * @s: string of arguments
 * Return: 0
 */

int exit_function(char **args)
{
	if (args == NULL)
		exit(0);

	free_mem(args);
	exit(0);
}
