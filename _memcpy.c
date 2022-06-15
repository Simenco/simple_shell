#include "simple_shell.h"

/**
 * _memcpy - used to copy a space in memory
 * @dest: destination to copy to
 * @src: source
 * @n: size of bytes to copy from source
 * Return: a pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while (counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}

	return (dest);
}
