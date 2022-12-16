#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int row;
	int col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
