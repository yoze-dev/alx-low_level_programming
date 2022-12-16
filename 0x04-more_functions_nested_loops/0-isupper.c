#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: The character to be checker
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
