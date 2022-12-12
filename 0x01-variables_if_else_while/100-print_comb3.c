#include <stdio.h>

/**
 * main - Entrry point into the program
 *
 * Return: Always 0
 */

int main(void)
{
	int ch1, ch2;

	for (ch1 = 0; ch1 <= 8; ch1++)
	{
		for (ch2 = ch1 + 1; ch2 <= 9; ch2++)
		{
			putchar(ch1 + '0');
			putchar(ch2 + '0');
			if (!(ch1 == 8 && ch2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
