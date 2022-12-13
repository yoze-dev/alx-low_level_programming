#include "main.h"

/**
 * _islower - Checks if a character is lowercase or not
 * @c: The character to be checked
 *
 * Return: 1 if it is lowercase, 0 if it is not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
