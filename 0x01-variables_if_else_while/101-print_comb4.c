#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundredsPlace = 48;
	int tensPlace;
	int onesPlace;

	while (hundredsPlace < 56)
	{
		tensPlace = hundredsPlace + 1;
		while (tensPlace < 57)
		{
			onesPlace = tensPlace + 1;
			while (onesPlace <= 57)
			{
				putchar((char)hundredsPlace);
				putchar((char)tensPlace);
				putchar((char)onesPlace);
				if (hundredsPlace == 55 && tensPlace == 56 && onesPlace == 57)
					break;
				putchar(',');
				putchar(' ');
				onesPlace++;
			}
			tensPlace++;
		}
		hundredsPlace++;
	}
	putchar('\n');

	return (0);
}
