#include "main.h"
#include <stdio.h>

/**
 * main - Entry point into the program.
 * @argc: number of command line arguments.
 * @argv: array of strings of command line arguments.
 *
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
