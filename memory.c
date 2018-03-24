#include "shell.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: first n bytes of memory
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* s => Starting address of memory to be filled */
	/* b => Value to be filled*/
	/* n => Number of bytes to be filled starting */
	/* from ptr to be filled */
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
