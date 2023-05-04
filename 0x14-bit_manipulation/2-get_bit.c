#include "main.h"

/**
 * get_bit - Returns the bit at a particular index
 * @n: Number to convert
 * @index: Index to return from
 * Return: Integer or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	int bit_holder[64] = {0};
	unsigned int tracker = 63;

	while (n)
	{
		bit = n - ((n >> 1) * 2);
		bit_holder[tracker] = bit;
		n = n >> 1;
		tracker--;
	}
	if (index > 63)
		return (-1);
	return (bit_holder[63 - index]);
}
