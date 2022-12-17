#include "main.h"

/**
 * print_to_98 - prints all natural numbers from @n to 98
 * @n: Number
 *
 * Return: void.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 0)
				_putchar('-');
			if (_abs(n) / 10 > 0)
				_putchar((_abs(n) / 10) + '0');
			_putchar((_abs(n) % 10 + '0'));
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if ((n / 10 / 10) > 0)
				_putchar((n / 10 / 10) + '0');
			if ((n / 10) % 10 >= 0)
				_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}
