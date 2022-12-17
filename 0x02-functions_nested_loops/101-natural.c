#include <stdio.h>

/**
 * main - Entry point into the Program.
 *
 * Return: Always 0 (seccess).
 */
int main(void)
{
	int num = 1024;
	int factors[1000];
	int num_of_multiples = 0;
	int i;
	int result = 0;

	for (i = 0; i < num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			factors[num_of_multiples] = i;
			num_of_multiples++;
		}
	}
	for (i = 0; i <= num_of_multiples; i++)
	{
		result += factors[i];
	}
	printf("%d\n", result);
	return (0);
}
