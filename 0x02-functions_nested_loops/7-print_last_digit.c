#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Function to return the last digit of an int
 * @n: Integer whose last digit we need to check
 * Return: Last digit of the argument
 */

int print_last_digit(int n)
{
	int wholeval;
	char printval;

	if (n > -10 && n < 10)
	{
		wholeval = abs(n);
		printval = wholeval + '0';
		_putchar(printval);
		return (wholeval);
	}
	else
	{
		wholeval = abs(n % 10);
		printval = wholeval + '0';
		_putchar(printval);
		return (wholeval);
	}
}
