#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: A string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int count = 0;
	int size, max;

	while (str[count] != '\0')
		count++;
	size = count;
	max = count / 2;
	count = 0;
	while (count < size)
	{
		if (count >= max)
			_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
