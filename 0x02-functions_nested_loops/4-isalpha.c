#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: The character to be checked
 *
 * Return: 1 is c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
