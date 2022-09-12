#include <stdio.h>

/*
 *main: entry point ino the program
 *return: always 0
 * */

int main(void)
{
	int ch;
	for(ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if(ch == '9')
			break;
		putchar(',');
		putchar(' ');
	}
      	putchar('\n');
	return (0);
}
