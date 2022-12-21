#include "main.h"

/**
 * puts2 - prints every other chaacter of a string,
 * starting with the first character, followed by a new line
 * @str: the string to be treated
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		if (*str)
			str++;
	}
	_putchar('\n');
}
