#include <main.h>

/**
 * main - Entery point into the program
 *
 * Return: always 0 after succesfull execution of the program
 */
int main(void)
{
	char *word = "_putchar\n";
	int i = 0;

	while (*word)
	{
		_putchar(*word);
		word++;
	}
	_putchar('\n');
	return (0);
}
