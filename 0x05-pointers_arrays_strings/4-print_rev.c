#include "main.h"

/**
 * print_rev - print a string in reverse.
 * @s: string.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	count--;
	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
