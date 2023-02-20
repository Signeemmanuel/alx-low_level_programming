#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point into the program.
 * @argc: Number of command line arguments.
 * @argv: An array of strings of command line arguments.
 *
 * Return: 0 (Success) or 1 (Error).
 */
int main(int argc, char *argv[])
{
	int i, j;
	int result = 0;
	bool is_digit;

	if (argc == 1)
	{
		printf("%d\n", result);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			is_digit = true;
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					is_digit = false;
					break;
				}
			}
			if (is_digit)
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
