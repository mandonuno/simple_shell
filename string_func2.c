#include "shell.h"
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
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' || *s2 == '\0')
		{
			break;
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	return (*s1 - *s2);
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
			return (*(unsigned char*)(s1 - 1) - *(unsigned char*)(s2 - 1));
		}
	}
	return (0);
}
/**
 * find_char - finds a character in a string
 * @c: character
 * @str: string
 * Return: 0
 */
int find_char(char c, char *str)
{
	if (str == NULL)
		return (0);

	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
