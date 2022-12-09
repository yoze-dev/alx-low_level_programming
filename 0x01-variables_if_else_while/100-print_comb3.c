#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char tensPlace = '0';
	char onesPlace;

	while (tensPlace < '9')
	{
		onesPlace = (int)tensPlace + 1;
		while(onesPlace <= '9')
		{
			putchar(tensPlace);
			putchar(onesPlace);
			if(tensPlace == '8' && onesPlace == '9')
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
