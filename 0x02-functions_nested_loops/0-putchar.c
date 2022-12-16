#include "main.h"

/**
 * main - Entery point into the program
 *
 * Return: always 0 after succesfull execution of the program
 */
int main(void)
{
	char *word = "_putchar\n";
	int i = 0;

	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
