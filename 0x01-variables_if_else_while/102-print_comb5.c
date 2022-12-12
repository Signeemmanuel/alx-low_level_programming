#include <stdio.h>

/**
 * main - Entrry point into the program
 *
 * Return: Always 0
 */

int main(void)
{
	int ch1, ch2, ch3, ch4;
	int cnt, num2;

	for (ch1 = 0; ch1 <= 9; ch1++)
	{
		for (ch2 = 0; ch2 <= 8; ch2++)
		{
			cnt = 0;
			for (ch3 = ch1; ch3 <= 9; ch3++)
			{
				if (cnt == 0)
					num2 = ch2 + 1;
				else
					num2 = 0;
				cnt++;
				for (ch4 = num2; ch4 <= 9; ch4++)
				{
					putchar(ch1 + '0');
					putchar(ch2 + '0');
					putchar(' ');
					putchar(ch3 + '0');
					putchar(ch4 + '0');
					if (!(ch1 == 9 && ch2 == 8 && ch3 == 9 && ch4 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
