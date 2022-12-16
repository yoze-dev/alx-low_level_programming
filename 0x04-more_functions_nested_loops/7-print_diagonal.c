#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of times the character \ should be printed
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int row;
	int col;

	for (row = 0; row < n; row++)
	{
		for (col = 0; col <= row; col++)
			_putchar('\\');
		_putchar('\n');
	}
}
