#include "main.h"

/**
 * _abs - a function to compute the absolute value of an integer
 * @n: The number to be computed
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}
