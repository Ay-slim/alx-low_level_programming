#include "main.h"

/**
 * print_triangle - Prints a triangle with variable size
 * @size: Triangle dimensions
 * returns - nothing
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		for (k = i - 1; k < size - 1; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
