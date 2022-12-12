#include <stdio.h>

/**
 * main - entry point ino the program
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;

	for (char ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

