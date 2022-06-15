#include "simple_shell.h"

/**
 * _strncat - function thatt concatenates two strings
 * @dest: concatenated strng
 * @src: source of the string to add to another
 * @n: length of string
 * Return: pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
