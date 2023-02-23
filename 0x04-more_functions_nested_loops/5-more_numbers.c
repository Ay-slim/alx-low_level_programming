#include "main.h"

/**
 * more_numbers - Prints digits between 0 and 14 with a \n ten times
 * returns - nothing
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;
		int div;
		int rem;

		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				_putchar(j + '0');
			}
			else
			{
				div = j / 10;
				rem = j % 10;
				_putchar(div + '0');
				_putchar(rem + '0');
			}
		}
		_putchar('\n');
	}
}
