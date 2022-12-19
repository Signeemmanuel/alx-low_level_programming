#include "main.h"

/**
 * rev_string - Reverses a string..
 * @s: string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	char rev_s[1000];
	int count = 0;
	int size;

	while (s[count] != '\0')
	{
		count++;
	}
	size = count;
	count = 0;
	while (count < size)
	{
		rev_s[count] = s[size - count - 1];
		count++;
	}
	count = 0;
	while (count < size)
	{
		s[count] = rev_s[count];
		count++;
	}
}
