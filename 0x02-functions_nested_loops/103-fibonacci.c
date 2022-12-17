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
	int i = 0;
	int sum = 0;
	int res = 0;

	while (res < 4000000)
	{
		res = get_fib(i);
		if (res % 2 == 0)
			sum += res;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
