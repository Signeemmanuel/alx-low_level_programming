#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point into the program.
 * @args: Number of command line arguments.
 * @argv: An array of strings of command line arguments.
 *
 * Return: 0 (Success).
 */
int main(int args, char *argv[])
{
	int i;
	int result = 1;

	if (args <= 2)
		printf("Error\n");
	else
	{
		for (i = 1; i < args; i++)
			result *= atoi(argv[i]);
		printf("%d\n", result);
	}
	return (0);
}
