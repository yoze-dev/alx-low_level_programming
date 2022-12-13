#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to compute the last digit of
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
