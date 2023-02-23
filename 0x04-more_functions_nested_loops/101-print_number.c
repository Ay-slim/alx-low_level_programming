#include "main.h"
#include <stdbool.h>
/**
 * pos - position finder
 * description - returns the position of a digit in the number
 * @val: Value to search
 * @bat: Starting divisor
 * Return: integer
 */
int pos(int val, int bat)
{
	int bot = bat;

	while (val / bot)
	{
		bot *= 10;
	}
	return (bot / 10);
}

/**
 * print_number - entry point
 * description - Prints a number using putchar
 * @n: number to print
 * Return: Always 0
 */
void print_number(int n)
{
	int div;
	int ka;
	int quo;

	if (n == 0)
	{
		_putchar(0 + '0');
		return;
	}
	ka = pos(n, 10);
	quo = n;
	if (n < 0)
	{
		quo = n * -1;
		_putchar('-');
	}
	while (ka > 5)
	{
		ka = pos(quo, 10);
		div = quo / ka;
		_putchar(div + '0');
		quo = quo - (ka * div);
		if (quo < ka / 10)
		{
			_putchar(0 + '0');
		}
	}
}
