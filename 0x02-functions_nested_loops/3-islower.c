#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: character to be evaluated
 *
 * Return: 1 if @c is lowercase otherwise return 0
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}
