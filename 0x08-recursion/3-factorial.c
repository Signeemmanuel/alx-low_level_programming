#include "main.h"

/**
 * factorial - Computes the factorail a given number.
 * @n: number to compute factorial.
 *
 * Return: factorial of @n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (factorial(n - 1) + factorial(n - 2));
}
