#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: String to search from.
 * @c: character to be searched
 *
 * Return: a pointer to the 1st occurrence of @c, or NULL if @c isn't found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
