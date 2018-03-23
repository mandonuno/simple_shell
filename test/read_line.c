#include "list_func.h"


char *read_line(void)
{
	char *line = NULL;
	size_t len = 0;

	printf("$ ");
	while ((getline(&line, &len, stdin)) != -1)
	{
		printf("%s", *str_tok(line));
		printf("$ ");
	}
	printf("\n");
	free(line);
	return(0);
}
