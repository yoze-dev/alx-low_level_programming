#include "main.h"

/**
 * print_number - prints the number, from 0 to 9.
 *
 * Return: Nothing
 */
void print_number(void)
{
	char num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
