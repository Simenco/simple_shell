#include "simple_shell.h"

/**
 * copy_envp - helps to copy env path
 * @envp: environment path
 * @my_envp: the current environment path to copy
 * Return: void
 */

void copy_envp(char **envp, char **my_envp)
{
	int index = 0;

	for (; envp[index] != NULL; index++)
	{
		my_envp[index] = (char *)malloc(sizeof(char) * (_strlen(envp[index]) + 1));
		_memcpy(my_envp[index], envp[index], _strlen(envp[index]));
	}
}
