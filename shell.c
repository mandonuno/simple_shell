#include "shell.h"
/**
 * main - simple UNIX command interpreter
 * Return: Always 0
 */
int main(void)
{
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
	size_t len = 0;

	signal(SIGINT, _sig);

	args = NULL;
	printprompt("$ ");
	while (getline(&args, &len, stdin) != -1)
	{
		if (args[0] != '\n' && args[0] != '#')
		{
			arr = token_line(args);
			if (builtin_func(arr) == 1)
			{
				if (arr[0][0] == '/')
				{
					execute_slash(arr);
					printprompt("$ ");
				}
				else
				{
					env = _getenv("PATH");
					path = _getpath(env, arr);
					execute(arr, path);
					printprompt("$ ");
				}
			}
			else
				printprompt("$ ");
			free(arr);
		}
		else
			printprompt("$ ");
	}
}
