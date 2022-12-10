#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: Always 0 for successful execution of program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positve\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
