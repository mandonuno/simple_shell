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
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: substring
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;

	while (*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character first occurrence of the character
 * Return: pointer to first occurrence of character c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: bytes
 * Return: pointer to the character, or null if no char is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s++))
		{
			return (--s);
		}
	}
	return ('\0');
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
