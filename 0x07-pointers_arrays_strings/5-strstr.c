#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: String to search from.
 * @accept: sub string to search.
 *
 * Return: a pointer to the beginning of the located substring, orthewise NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i + n] != accept[n])
				break;
			if (accept[n + 1] == '\0')
				return (s + i);
		}
	}

	return (NULL);
}
