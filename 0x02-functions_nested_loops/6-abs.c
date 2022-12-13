#include "main.h"

/**
 * int_abs - a function to compute the absolute value of an integer
 * @n: The number to be computed
 *
 * Return: The absolute value of n
 */
int int_abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
