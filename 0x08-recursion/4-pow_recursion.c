#include "main.h"

/**
 * _pow_recursion - computes a number raised to a certain power.
 * @x: value.
 * @y: power.
 *
 * Return: the value @x raised to the power @y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
