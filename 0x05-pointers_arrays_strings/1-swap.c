#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: An integer Variable.
 * @b: An integer Variable.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
