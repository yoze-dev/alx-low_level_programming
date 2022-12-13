#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Nothing
 */
void times_table(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int k = 0; k <= 9; k++)
		{
			_putchar(i * k);
			if (k != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
