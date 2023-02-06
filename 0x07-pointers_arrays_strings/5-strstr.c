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
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}

