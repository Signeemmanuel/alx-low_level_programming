#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long num1 = 1;
	unsigned long num2 = 1;
	unsigned long num;
	int i;

	printf("%lu,", num2);
	for (i = 2; i <= 98; i++)
	{
		num = num1 + num2;
		printf(" %lu", num);
		if (i != 98)
			printf(",");
		num1 = num2;
		num2 = num;
	}
	printf("\n");
	return (0);
}
