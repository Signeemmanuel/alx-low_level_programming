#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always return 0 after successful execution of program
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
