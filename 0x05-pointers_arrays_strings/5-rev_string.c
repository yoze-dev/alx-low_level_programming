#include "main.h"

/**
 * rev_string - reverses a string
 * @s: The string to be reversed
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int count = 0;
	int i;

	while (s[count] != '\0')
		count++;
	char temp[count];

	for (i = 0; i < count; i++)
	{
		temp[i] = s[count];
		count--;
	}
	temp[i] = '\0';

	while (*temp != '\0')
	{
		*s = *temp;
		temp++;
	}
}
