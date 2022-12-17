#include "main.h"

/**
 * print_times_table - prints the @n times table, starting with 0.
 * @n: number
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j != 0)
				_putchar(' ');
			if (result > 99)
			{
				_putchar((result / 10 / 10) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result > 9)
			{
				if (j != 0)
					_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
