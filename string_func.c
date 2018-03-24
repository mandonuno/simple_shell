#include "shell.h"
/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: pointer to string
 * Return: NULL if str = NULL, or returns pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(_strlen(str) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	_strcpy(s, str);
	return (s);
}
/**
 * _strcat - concat two strings
 * @src: source string
 * @dest: string to concat
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = _strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/**
 * _strcpy - copies the string pointed to by src
 * @dest: copy of string
 * @src: pointer to string
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/**
 * _strncmp - compares up to n characters of the string
 * @s1: string 1
 * @s2: string 2
 * @n: n characters
 * Return: 0
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
		{
			s1++;
			s2++;
			return (*(unsigned char *)(s1 - 1) - *(unsigned char *)(s2 - 1));
		}
	}
	return (0);
}
