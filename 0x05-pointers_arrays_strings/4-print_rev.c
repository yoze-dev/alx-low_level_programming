#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: The string to be printed
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int count = 0;

	for (; *s ; )
	{
		count++;
		s++;
	}

	for (; count; count--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
