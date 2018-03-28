#include "shell.h"
/**
 * _sig - Print prompt on newline when the user inputs ^C
 * @sig: void
 */
void _sig(int sig)
{
	(void)sig;

	signal(SIGINT, _sig);
	printprompt("\n$ ");
}
