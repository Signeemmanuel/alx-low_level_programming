#include "main.h"

/**
 * main - Entry point into the program.
 * @argc: number of command line arguments.
 * @argv: array of strings of command line arguments.
 *
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[0 * argc][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
