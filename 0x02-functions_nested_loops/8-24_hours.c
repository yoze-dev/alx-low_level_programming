#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	char tens_min;
	char ones_min;
	char tens_sec;
	char ones_sec;
	char value;

	for (tens_min = '0'; tens_min <= '2'; tens_min++)
	{
		if (tens_min == '2')
			value = '3';
		else
			value = '9';

		for (ones_min = '0'; ones_min <= value; ones_min++)
		{
			for (tens_sec = '0'; tens_sec <= '5'; tens_sec++)
			{
				for (ones_sec = '0'; ones_sec <= '9'; ones_sec++)
				{
					_putchar(tens_min);
					_putchar(ones_min);
					_putchar(':');
					_putchar(tens_sec);
					_putchar(ones_sec);
					_putchar('\n');
				}
			}
		}
	}
}
