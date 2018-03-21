#include "shell.h"
/**
 * printprompt - prints the prompt
 * @prompt: prompt
 */
void printprompt(char *prompt)
{
	if (prompt == NULL)
		return;
	write(1, prompt, _strlen(prompt));
}
/**
 * _getenv - gets environment variable
 * @name: name of environment varibale
 * Return:
 */
char *_getenv(char *name)
{
	char *env;
	int i, len;

	if (name == NULL)
		return (NULL);
	len = _strlen(name);
	for (i = 0; environ[i] != NULL; i++)
	{
		env = environ[i];
		if (_strncmp(name, environ[i], len) == 0)
			env++;
			return (environ[i]);
	}
	return (NULL);
}
/*
 * execute - forks a child process and executes a new command
 * @args: arguments passed to command
 * Return: 0

int execute(char **args)
{
	pid_t child_pid;
	int status;

	child_pid = fork();

	if (child_pid == 0)
	{
		status = execve(args[0], args, NULL);			;
	}

	else
	{
		wait(&status);
	}
	return (0);
}
*/
/**
 * free_mem - frees allocated memory
 * @mem: grid to free
 */

void free_mem(char **mem)
{
	int i;

	if (mem == NULL)
		return;
	for (i = 0; mem[i]; i++)
		free(mem[i]);
	free(mem);
}
