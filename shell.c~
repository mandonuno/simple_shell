#include "shell.h"
/**
 * main - simple UNIX command interpreter
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{
	char *line = NULL;

	while (1)
	{
		printprompt("$ ");
		line = read_line();
		free(line);
	}
	return (0);
}
