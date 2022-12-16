#include "main.h"

/**
 * print_alphabet - Print the alphabets in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
