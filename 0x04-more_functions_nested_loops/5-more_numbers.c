#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	char num = '0';
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		while (num >= '0' && num <= '14')
		{
			_putchar(num);
			num++;
		}
		_putchar('\n');
	}
}
