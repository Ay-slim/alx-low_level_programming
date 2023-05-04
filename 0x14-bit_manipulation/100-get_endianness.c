#include "main.h"

/**
 * get_endianness - Gets the endianness of a system
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int num_value = 1;
	char *endian = (char *)&num_value;

	if (*endian == 1)
	{
		return (1);
	}
	return (0);
}

