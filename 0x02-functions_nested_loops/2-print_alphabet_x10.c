#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabets 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i;
	char letter = 'a';

	for (i = 0; i < 10; i++)
	{
		while(letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
