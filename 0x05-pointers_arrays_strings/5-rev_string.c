#include "main.h"

/**
 * rev_string - reverses a string
 * @s: The string to be reversed
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	char *temp = *s;
	int count = 0;
	int i;

	while (s[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		temp[i] = s[count];
		count--;
	}
	*s = *temp;
}
