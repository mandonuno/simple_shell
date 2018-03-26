#include "shell.h"
/**
 * main - simple UNIX command interpreter
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	simple_shell();
	printprompt("\n");
 	return (0);
}
/**
 * simple_shell - simple UNIX command interpreter
 * Return: Always 0
 */
void simple_shell(void)
{
	char *args, **arr, *env, **path;
	size_t len;

	len = 0;
	args = NULL;
	arr = malloc(sizeof(char *) * BUFSIZE);
	if (arr == NULL)
		exit(1);
	printprompt("$ ");
	while (getline(&args, &len, stdin) != EOF)
	{
		if (args[0] != '\n')
		{
			arr = token_line(args);
			if (builtin_func(arr) == 1)
			{
				env = _getenv("PATH");
				path = _getpath(env, arr);
				execute(arr, path);
				printprompt("$ ");
			}
			else
				printprompt("$ ");
			free(arr);
		}
		else
			printprompt("$ ");
	}
}
