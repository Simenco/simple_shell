#include "simple_shell.h"

/**
 * _strlen - calculates string length
 * @s: the string input
 * Return: the length of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
