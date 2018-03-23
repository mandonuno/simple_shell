#include "list_func.h"
/**
 * _printf - prints the prompt
 * @prompt: prompt
 */
void printprompt(char *prompt)
{
	if (prompt == NULL)
		return;
	write(1, prompt, _strlen(prompt));
}
