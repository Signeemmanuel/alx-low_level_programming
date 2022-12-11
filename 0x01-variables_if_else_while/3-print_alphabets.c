#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: Always return 0 after successful execution of the program
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

