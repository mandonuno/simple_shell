#include "shell.h"
/**
 * _getenv - gets environment variable
 * @name: name of environment varibale
 * Return: pointer to environment variable
 */
char *_getenv(char *name)
{
	char **env;
	int len;

	env = environ;
	len = _strlen(name);
	while (*env != NULL)
	{
		if (_strncmp(*env, name, len) == 0)
			return (*env);
		env++;
	}
	return (*env);
}
/**
 * _getpath - gets directories for PATH
 * @s: pointer to string of PATH
 * @args: strings of arguments
 * Return: directories in the PATH
 */
char **_getpath(char *s, char **args)
{
	char **arr, *token, *path, *str, *del;
	int i, count;

	del = "/";
	i = 0;
	count = _strlen(s);
	path = malloc(sizeof(char) * count);
	if (path == NULL)
		exit(1);
	_strcpy(path, s);
	token = strtok(path, ":");
	free(path);
	arr = malloc(sizeof(char *) * BUFSIZE);
	if (arr == NULL)
	{
		free(arr);
		exit(1);
	}
	str = malloc(sizeof(char) * BUFSIZE);
	if (str == NULL)
	{
		free(str);
		exit(1);
	}
	while (token != NULL)
	{
		_strcat(str, token);
		_strcat(str, del);
		_strcat(str, args[0]);
		token = strtok(NULL, ": ");
		arr[i] = _strdup(str);
		_memset(str, 0, BUFSIZE);
		i++;
	}
	return (arr);
}
