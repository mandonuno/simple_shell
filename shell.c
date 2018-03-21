#include "shell.h"
/**
 * main - simple UNIX command interpreter
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	pid_t pid;
	char *buf;
	size_t size;
	int status;

	buf = malloc(size * sizeof(char));
	if (buf == NULL)
		return (-1);
		printprompt("$ ");
	while ((getline(&buf, &size, stdin)) != EOF)
	{
		pid = fork();
		argv[0] = buf;
		buf[_strlen(buf) - 1] = '\0';
		if (pid < 0)
		{
			perror("Error:\n");
			return (1);
		}
		if (pid == 0)
		{
			status = execve(argv[0], argv, NULL);
		}
		wait(&status);
		printprompt("$ ");
		}
	free(buf);
	return (0);
}
