#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: An array.
 * @n: Size of array.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			_putchar('-');
			a[i] = -a[i];
		}
		if (a[i] / 10000000000 >= 1)
			_putchar(((a[i] / 10000000000) % 10) + '0');
		if (a[i] / 1000000000 >= 1)
			_putchar(((a[i] / 1000000000) % 10) + '0');
		if (a[i] / 100000000 >= 1)
			_putchar(((a[i] / 100000000) % 10) + '0');
		if (a[i] / 10000000 >= 1)
			_putchar(((a[i] / 10000000) % 10) + '0');
		if (a[i] / 1000000 >= 1)
			_putchar(((a[i] / 1000000) % 10) + '0');
		if (a[i] / 100000 >= 1)
			_putchar(((a[i] / 100000) % 10) + '0');
		if (a[i] / 10000 >= 1)
			_putchar(((a[i] / 10000) % 10) + '0');
		if (a[i] / 1000 >= 1)
			_putchar(((a[i] / 1000) % 10) + '0');
		if (a[i] / 100 >= 1)
			_putchar(((a[i] / 100) % 10) + '0');
		if (a[i] / 10 >= 1)
			_putchar(((a[i] / 10) % 10) + '0');
		_putchar((a[i] % 10) + '0');
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
