#include "main.h"

/**
 * _strcpy - copies a string to another string buffer
 * @src: String to be copied
 * @dest: String buffer
 *
 * Return: Returns the value of th string buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;
	int size;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
