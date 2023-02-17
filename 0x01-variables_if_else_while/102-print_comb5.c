#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int tens_i;
	int unit_i;
	int tens_j;
	int unit_j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			tens_i = i / 10;
			unit_i = i % 10;
			tens_j = j / 10;
			unit_j = j % 10;
			putchar(tens_i + '0');
			putchar(unit_i + '0');
			putchar(' ');
			putchar(tens_j + '0');
			putchar(unit_j + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
