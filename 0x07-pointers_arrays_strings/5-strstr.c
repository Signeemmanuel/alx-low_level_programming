#include <stddef.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: String to search from.
 * @needle: substring to search.
 *
 * Return: a pointer to the beginning of the located substring, orthewise NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, n;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (n = 0; needle[n] != '\0'; n++)
		{
			if (haystack[i + n] != needle[n])
				break;
			if (needle[n + 1] == '\0')
				return (haystack + i);
		}
	}

	return (NULL);
}
