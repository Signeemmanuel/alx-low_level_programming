#include "main.h"
#include <stdio.h>


/**
 * main - Entry point into the program.
 * @argc: Number of command line arguments
 * @argv: An array of strings of command line arguments.
 *
 * Return: 0 (Success).
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
