#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point into the program.
 * @argc: Number of command line arguments.
 * @argv: An array of strings of command line arguments.
 *
 * Return: 0 (Success) or 1 (Error).
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			result *= atoi(argv[i]);
		printf("%d\n", result);
	}
	return (0);
}
