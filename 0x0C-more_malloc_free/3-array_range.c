#include <stdlib.h>

/**
 * array_range - Create an array of integers
 * @min: Minimum integer
 * @max: Max integer
 * Return: Array of integers
 */

int *array_range(int min, int max)
{
	int length;
	int i;
	int *arr_range;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	arr_range = malloc(length * sizeof(min));
	if (!arr_range)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr_range[i - min] = i;
	}
	return (arr_range);
}
