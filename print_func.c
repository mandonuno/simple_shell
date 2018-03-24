#include "shell.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
