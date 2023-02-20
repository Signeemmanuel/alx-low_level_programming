#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * coinConverter - Helper function that does all the mathematics.
 * @amount: Passed in variable from main for calculations.
 *
 * Return: The number of coins needed minimum for the passed in variable.
 */
int coinConverter(int amount)
{
	int count = 0;

	while (amount != 0)
	{
		if (amount >= 25)
			amount -= 25;
		else if (amount >= 10)
			amount -= 10;
		else if (amount >= 5)
			amount -= 5;
		else if (amount >= 2)
			amount -= 2;
		else
			amount--;
		count++;
	}

	return (count);
}

/**
 * main - Takes in exactly one argument for minimum coin count.
 * @argc: Number of command line arguments.
 * @argv: Array name.
 *
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int cents, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("0\n");
	else
	{
		coin = coinConverter(cents);

		printf("%d\n", coin);
	}

	return (0);
}
