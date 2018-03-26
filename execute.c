#include "shell.h"
/**
 * execute - fork child process to execute program
 * @arr: array of strings
 * @args: string that has been split
 */
void execute(char **arr, char **args)
{
	pid_t child_p;
	int i, status;

	i = 0;
	child_p = fork();

	if (child_p == 0)
	{
		i = 0;
		while (args[i] != NULL)
			if (execve(args[i], arr, NULL) == -1)
				i++;
		printprompt("\aCommand not found\n");
		printprompt("Run command [help]\n");
		_exit(0);
	}
	else
		wait(&status);
}
