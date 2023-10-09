#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - A function to implement linear search
 * @array: The array to search for a given value
 * @size: The size of the array to search
 * @value: The value to search for in the array
 * Return: Value's first index if present, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	int idx = 0;
	int size_cast = (int)size;

	if (!array)
		return (-1);
	while (idx < size_cast)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
		{
			return (idx);
		}
		idx++;
	}
	return (-1);
}
