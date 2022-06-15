#include "simple_shell.h"

/**
 * free_argv - frees memory of argv
 * @my_argv: the argv
 * Return: void
 */

void free_argv(char **my_argv)
{
	int index;

	for (index = 0; my_argv[index] != NULL; index++)
	{
		_memset(my_argv[index], 0, _strlen(my_argv[index]) + 1);
		my_argv[index] = NULL;
		free(my_argv[index]);
	}
}
