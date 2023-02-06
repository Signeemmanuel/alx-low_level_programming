#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: String to be printed.
 *
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
