#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: character to be evaluated
 *
 * Return: 1 if @c is a letter of the alphabet  otherwise return 0
 */
int _isalpha(int c)
{
	if (c <= 122 && c >= 65)
		return (1);
	return (0);
}
