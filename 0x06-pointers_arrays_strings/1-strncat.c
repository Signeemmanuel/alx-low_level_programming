#include "main.h"

/**
 * _strncat - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @des.
 * @n: concatenate up to position n.
 * Return: a pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int size_dest;

	while (dest[count] != '\0')
		count++;
	size_dest = count;
	for (count = 0; src[count] && count < n; count++)
	{
		dest[size_dest++] = src[count];
	}
	return (dest);
}
