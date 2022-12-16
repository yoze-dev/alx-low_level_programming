#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100 followed by new line
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and fi print FizzBuzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if ((count % 3) == 0)
			printf("%s", "Fizz");
		else if ((count % 5) == 0)
			printf("%s", "Buzz");
		else if (((count % 3) == 0) && ((count % 5) == 0))
			printf("%s", "FizzBuzz");
		else
			printf("%d", count);
	}
	return (0);
}
