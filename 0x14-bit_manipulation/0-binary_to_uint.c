#include "main.h"
#include <string.h>
/**
 * raise - Calculate the power of a number to another
 * @base: Base number
 * @power: Power to raise to
 * Return: Power
 */
int raise(int base, int power)
{
	int power_clone = power;
	int val = base;

	if (power == 1)
		return (base);
	if (power == 0)
		return (1);
	if (power < 0)
		power *= -1;
	while (power > 1)
	{
		base *= val;
		power--;
	}
	if (power_clone < 0)
		return (1 / base);
	return (base);
}

/**
 * binary_to_uint - Convert binary to uint
 * @b: Binary value in string
 * Return: Uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int counter = 0;
	int len;

	if (b == NULL)
		return (0);
	len = strlen(b) - 1;
	while (len >= 0)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		num += (b[len] - '0') * raise(2, counter);
		counter++;
		len--;
	}
	return (num);
}
