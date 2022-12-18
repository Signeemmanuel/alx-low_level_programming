#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long num1 = 1l;
	long num2 = 1l;
	long num;
	int i;

	printf("%ld,", num2);
	for (i = 2; i <= 50; i++)
	{
		num = num1 + num2;
		printf(" %ld", num);
		if (i != 50)
			printf(",");
		num1 = num2;
		num2 = num;
	}
	printf("\n");
	return (0);
}
