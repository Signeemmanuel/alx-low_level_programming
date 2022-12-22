#include "mainn.h"

/**
 * _strncpy - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @des.
 * @n: how much to copy from src into dest.
 *
 * Return: a pointer to @des
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	int src_size = 0;

	while (src[count++])
		src_size++;

	for (count = 0; src[count] && count < n; count++)
		dest[count] = src[count];

	for (count = src_size; count < n; count++)
		dest[count] = '\0';

	return (dest);
}
