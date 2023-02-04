#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: memory area pointer.
 * @b: constant byte.
 * @n: number of first n bytes to be filled.
 *
 * Return: @s a pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
