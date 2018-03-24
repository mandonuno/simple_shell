#include "shell.h"
/**
 * token_line - creates a token
 * @line: string to tokenize
 * Return: array of strings
 */
char **token_line(char *line)
{
	int i;
	char **args = malloc(sizeof(char *) * BUFSIZE);

	if (args == NULL)
		exit(1);
	i = 0;
	args[i] = strtok(line, DELIM);
	while (args[i] != NULL)
	{
		i++;
		args[i] = strtok(NULL, DELIM);
	}
	return (args);
}
