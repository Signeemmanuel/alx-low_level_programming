#include "main.h"

/**
 * _strcat - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @des.
 *
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int size_dest;

	while (dest[count] != '\0')
		count++;
	size_dest = count;
	for (count = 0; src[count]; count++)
	{
		dest[size_dest++] = src[count];
	}
	return (dest);
}
