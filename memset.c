#include "simple_shell.h"

/**
 * _memset - function that set mem
 * @s: void pointer
 * @b: constant byte to fill mem s
 * @n: first number of bytes to fill mem
 * Return: pointer to memory areas s.
 */

char *_memset(void *s, int b, size_t n)
{
	unsigned char *p;

	p = s;
	while (n--)
		*p++ = (unsigned char)b;
	return (s);
}
