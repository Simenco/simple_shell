#include "simple_shell.h"

/**
 * _strcat - concatenates two string
 * @dest: destination
 * @src: source
 * Return: a pointer to the destination
 */

char *_strcat(char *dest, int src)
{
	int destLength;

	src = (char)src;
	destLength = 0;
	while (dest[destLength] != '\0')
		destLength++;
	dest[destLength] = src;
	dest[destLength + 1] = '\0';
	return (dest);
}
