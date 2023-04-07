#include "main.h"
#include <stdlib.h>

/**
 * to_binary - Converts from decimal to binary
 * @n: Number to convert
 * Return: Array of bits
 */
int *to_binary(unsigned long int n)
{
	int bit;
	int *bit_holder = calloc(64, sizeof(int));
	unsigned int tracker = 63;

	if (!bit_holder)
		return (NULL);
	while (n)
	{
		bit = n - ((n >> 1) * 2);
		bit_holder[tracker] = bit;
		n = n >> 1;
		tracker--;
	}
	return (bit_holder);
}

/**
 * flip_bits - Returns the number of bits to flip to switch between numbers
 * @n: First dec number
 * @m: Second dec number
 * Return: Integer containing number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int *m_bit = to_binary(n);
	int *n_bit = to_binary(m);
	unsigned int ret_value = 0;
	unsigned int i;

	for (i = 0; i < 64; i++)
	{
		if (m_bit[i] != n_bit[i])
			ret_value++;
	}
	return (ret_value);
}
