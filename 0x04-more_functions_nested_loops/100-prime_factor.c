#include <stdio.h>

/**
 * main - entry point
 * description - Prints the highest prime factor of 612852475143
 * Return: Always 0
 */

int main(void)
{
	long int quo;
	long int div;

	quo = 612852475143;
	div = 3;
	while (quo / div != 1)
	{
		quo = quo / div;
		while (quo % div != 0)
		{
			div++;
		}
	}
	printf("%ld", div);
	printf("\n");
	return (0);
}
