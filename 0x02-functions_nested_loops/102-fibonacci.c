#include <stdio.h>

/**
 * get_fib - get the nth number in the fibonacci series
 * @n: nth sequence
 *
 * Return: nth fibonacci number.
 */
int get_fib(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else
		return (get_fib(n - 1) + get_fib(n - 2));
}


/**
 * main - Entry point into the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("%d", get_fib(i));
		putchar('\n');
	}
	return (0);
}
