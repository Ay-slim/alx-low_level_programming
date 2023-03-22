#include <stddef.h>

/**
 * array_iterator - Array iterator
 * @array: Integer array
 * @size: Array size
 * @action: Callback
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
