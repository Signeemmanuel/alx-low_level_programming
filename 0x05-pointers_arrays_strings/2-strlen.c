#include "main.h"

/**
 * _strlen - returns the length of a String
 * @s: A string.
 *
 * Return: Length of @s
 */
int _strlen(char *s)
{
	int count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}
