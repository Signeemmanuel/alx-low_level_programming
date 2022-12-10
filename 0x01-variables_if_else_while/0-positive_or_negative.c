#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
 *main: entry point of the program
 *return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive");
	else if (n == 0)
		printf("is zero", n);
	else
		printf("is negative", n);
	return (0);
}

