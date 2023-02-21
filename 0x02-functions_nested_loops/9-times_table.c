#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int periodnum;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (((i * j) % 10) >= 0)
			{
				if (((i * j) / 10) != 0)
				{
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
					periodnum = 1;
				}
				else
				{
					_putchar(((i * j) % 10) + '0');
					periodnum = 2;
				}
			}
			else
			{
				_putchar((i * j) + '0');
				periodnum = 2;
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (periodnum == 2)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
