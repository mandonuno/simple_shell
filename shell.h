#ifndef SHELL_H
#define SHELL_H
#define BUFSIZE 1024
#define DELIM " \t\r\n"

/* Builtin Struct */
/**
 * struct builtins_s - struct to parse through buitlins
 * @name: name of command
 * @func: function pointer
 */
typedef struct builtins_s
{
	char *name;
	int (*func)(char **);
} builtins_t;

/* Headers */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

/* Global Variable */
extern char **environ;

/* Print Functions */
int _putchar(char c);
void printprompt(char *prompt);

/* String Functions */
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
int _strncmp(const char *s1, const char *s2, size_t n);

/* Builtin Functions */
int builtin_func(char **args);
int exit_function(char **args);
int printenv(char **args);
int help_function(char **args);

/* General Functions */
void simple_shell(void);
char *_getenv(char *name);
char **_getpath(char *str, char **args);
void execute(char **arr, char **args);
void execute_slash(char **arr);
char **token_line(char *line);
char *_memset(char *s, char b, unsigned int n);
int _atoi(char *s);
void _sig(int sig);

#endif
