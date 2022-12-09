#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char upperCaseLetters = "A";
	char lowerCaseLetters = "a";

	while (lowerCaseLetters <= "z")
	{
		putchar(lowerCaseLetters);
		lowerCaseLetters++;
	}

	while (upperCaseLetters <= "Z")
	{
		putchar(upperCaseLetters);
		upperCaseLetters++;
	}
	putchar('\n');

	return (0);
}
