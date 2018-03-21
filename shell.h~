#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
extern char **environ;
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strchr(char *s, char c);
int find_char(char c, char *str);
int _atoi(char *s);
void printprompt(char *prompt);
char *read_line(void);
void printenv(void);
char *_getenv(char *name);
int execute(char **args);
void free_mem(char **mem);
int exit_function(char **args);
#endif
