#include "shell.h"
/**
 * builtin_func - function that checks builtins
 * @args: input commands
 * Return: Always 0
 */
int builtin_func(char **args)
{
	builtins_t builtins[] = {
		{"exit", exit_function},
		{"env", printenv},
		{NULL, NULL}
	};
	int i, j, len;

	i = 0;
	j = 0;
	len = 0;
	while (args[0][len] != '\0')
	{
		len++;
	}
	while (builtins[i].name != NULL)
	{
		j = 0;
		while (j < len)
		{
			if (builtins[i].name[j] != args[0][j])
				break;
			j++;
		}
		if (builtins[i].name[j] == args[0][j])
		{
			builtins[i].func(args);
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * exit_function - exits shell
 * @args: string of arguments
 * Return: 0
 */
int exit_function(char **args)
{
	free(args);
	_exit(0);
}
/**
 * printenv - prints the environment of process
 * @args: string of arguments
 * Return: 0
 */
int printenv(char **args)
{
	int i, j;

	i = 0;
	if (args[1] == NULL)
	{
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
		return (0);
	}
	return (1);
}
