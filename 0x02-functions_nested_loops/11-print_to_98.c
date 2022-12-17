#include "main.h"

/**
 * abs - compute the absolute value of a number
 * @n: Number
 *
 * Ruturn: absolute value
 */
int abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}


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
			if ((abs(n) / 10 / 10) > 0)
				_putchar((abs(n) / 10 / 10) + '0');
			if (((abs(n) / 10) % 10 >= 0) && (abs(n) > 10))
				_putchar(((abs(n) / 10) % 10) + '0');
			_putchar((abs(n) % 10 + '0'));
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
