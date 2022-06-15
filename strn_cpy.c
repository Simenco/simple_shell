#include "simple_shell.h"

/**
 * _strncpy - performs string copy from src to dest
 * @src: string source
 * @dest: pointer to the destination of the copied string
 * @n: string length
 * Return: pointer to the string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
