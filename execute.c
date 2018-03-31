#include "shell.h"
/**
 * execute - fork child process to execute program
 * @arr: array of strings
 * @args: string that has been split
 */
void execute(char **arr, char **args)
{
	pid_t pid;
	int i, status;

	status = 0;
	pid = fork();

	if (pid == -1)
	{
		perror("Error");
		free(arr);
		free(args);
		_exit(1);
	}
	if (pid == 0)
	{
		i = 0;
		while (args[i] != NULL)
		{
			if (execve(args[i], arr, environ) == -1)
				i++;
		}
		perror("Error");
		free(arr);
		_exit(1);
	}
	else
	{
		wait(&status);

	}
}
/**
 * execute_slash - executes input that begin with a "/"
 * @arr: user input
 */
void execute_slash(char **arr)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == -1)
	{
		perror("Error");
		free(arr);
		_exit(1);
	}
	if (pid == 0)
	{
		if (execve(arr[0], arr, environ) == -1)
		{
			perror("Command does not exist");
			_putchar('\n');
			free(arr);
			_exit(1);
		}
	}
	else
		wait(&status);
}
