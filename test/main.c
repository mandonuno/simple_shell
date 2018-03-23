#include "list_func.h"

int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
	char *read = NULL;

	read = read_line();
	str_tok(read);
        return (0);
}
