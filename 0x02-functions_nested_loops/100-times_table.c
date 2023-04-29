#include "main.h"

/**
 * print_times_table- Prints the 9 times table
 * @n: the value up to which the times table will be printed
 * Return: void
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (((i * j) % 10) >= 0)
			{
				if (((i * j) / 10) != 0)
				{
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
				else
				{
					_putchar(((i * j) % 10) + '0');
				}
			}
			else
			{
				_putchar((i * j) + '0');
			}
			if (j < (n - 1))
			{
				_putchar(',');
				_putchar(' ');
				if ((i * (j + 1)) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
