#include "simple_shell.h"

/**
 * _strchr - function that finds a char in a string
 * @s: the string to search
 * @c: the char being searched for
 * Return: the char
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; ++s)
	{
		if (*s == c)
			return ((char *) s);
	}
	return ('\0');
}
