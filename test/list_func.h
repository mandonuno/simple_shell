#ifndef LIST_FUNC_H
#define LIST_FUNC_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <dirent.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <errno.h>

int _strlen(char *s);
void printprompt(char *prompt);
char *read_line(void);
char **str_tok(char *str);
int execute(void);

#endif
