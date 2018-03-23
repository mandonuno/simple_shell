#include "list_func.h"

char **str_tok(char *str)
{
	char *token;
	int i = 0;

	token = strtok(str, "\n\t\a\r ;:");
	while (token != NULL)
	{

		printf("%s\n", token);
		token = strtok(NULL, "\n\t\a\r ;:");
		i++;
	}
/*	token[_strlen(token) - 1] = '\0';*/
	return (0);
}
