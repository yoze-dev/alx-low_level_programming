#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabets 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
