#include "main.h"

/**
 * print_diagonal - Prints a diagonal with variable length
 * @n: Diagonal length
 * returns - nothing
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		if (i < n - 1)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
		}
		else
		{
			return;
		}
	}
}
