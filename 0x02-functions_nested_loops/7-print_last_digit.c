#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n:  Number to be evaluated
 *
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	int res;
	long m = n;

	if (m < 0)
		m = -m;
	res = m % 10;
	_putchar(res + '0');
	return (res);
}
