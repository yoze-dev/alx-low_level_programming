#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: The size of the tirangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int row;
	int col;
	int space;

	for (row = 1; row <= size; row++)
	{
		for (space = 1; space <= (size - row); space++)
			_putchar('\n');
		for (col = 0; col < row; col++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
