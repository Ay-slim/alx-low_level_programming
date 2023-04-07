#include "main.h"

/**
 * array_bin_uint - Converts a binary number stored in an array to decimal
 * @arr: Array pointer
 * Return: Decimal value
 */
unsigned long int array_bin_uint(int *arr)
{
	unsigned int len = 63;
	unsigned long int sum = 0;
	unsigned int power_of_2 = 1;
	unsigned int len_clone;

	while (len != 0)
	{
		len_clone = 63 - len;
		power_of_2 = 1;
		while (len_clone != 0)
		{
			power_of_2 *= 2;
			len_clone--;
		}
		sum += arr[len] * power_of_2;
		len--;
	}
	return (sum);
}

/**
 * clear_bit - Sets the bit at a particular index to 0
 * @n: Number to convert
 * @index: Index to return from
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;
	int bit_holder[64] = {0};
	unsigned int tracker = 63;
	unsigned long int num_value = *n;

	if (index > tracker)
		return (-1);
	while (num_value)
	{
		bit = num_value - ((num_value >> 1) * 2);
		bit_holder[tracker] = bit;
		num_value = num_value >> 1;
		tracker--;
	}
	bit_holder[63 - index] = 0;
	*n = array_bin_uint(bit_holder);
	return (1);
}
