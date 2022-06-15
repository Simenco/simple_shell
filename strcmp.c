#include "simple_shell.h"

/**
 * _strcmp - this function compares strings
 * @s1: string to compare
 * @s2: string to compare
 * Return: -1 , 1 or 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; ; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] < s2[i] ? -1 : 1);
		}
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
}
