#include "shell.h"
/**
 * token_line - creates a token
 * @line: string to tokenize
 * Return: array of strings
 */
char **token_line(char *line)
{
	int i;
	char **args = malloc(sizeof(char *) * 800);

	if (args == NULL)
	{
		free(args);
		exit(1);
	}
	i = 0;
	args[i] = strtok(line, "\n ");
	while (args[i] != NULL)
	{
		i++;
		args[i] = strtok(NULL, "\n ");
	}
	return (args);
}
