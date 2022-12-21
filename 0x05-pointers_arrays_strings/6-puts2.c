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
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
}
