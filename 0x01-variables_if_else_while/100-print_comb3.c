#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tensPlace = 48;
	int onesPlace;

	while (tensPlace < 57)
	{
		onesPlace = tensPlace + 1;
		while (onesPlace <= 57)
		{
			putchar((char)tensPlace);
			putchar((char)onesPlace);
			if (tensPlace == 56 && onesPlace == 57)
				break;
			putchar(',');
			putchar(' ');
			onesPlace++;
		}
		tensPlace++;
	}
	putchar('\n');

	return (0);
}
