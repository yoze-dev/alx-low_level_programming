#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: The first integer to be swaped with
 * @b: The second integer to be swaped with
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
