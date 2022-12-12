#include <stdio.h>

/**
 * main - Entrry point into the program
 *
 * Return: Always 0
 */

int main(void)
{
	int ch1, ch2, ch3;

	for (ch1 = 0; ch1 <= 7; ch1++)
	{
		for (ch2 = ch1 + 1; ch2 <= 8; ch2++)
		{
			for (ch3 = ch2 + 1; ch3 <= 9; ch3++)
			{
				putchar(ch1 + '0');
				putchar(ch2 + '0');
				putchar(ch3 + '0');
				if (!(ch1 == 7 && ch2 == 8 && ch3 == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
