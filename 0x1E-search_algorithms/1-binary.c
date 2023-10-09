#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Print an array of numbers
 * @array: Array to print
 * @start: Index to start printing from
 * @end: Index to stop printing at
 * Return: Nothing
 */
void print_array(int *array, int start, int end)
{
	int i = start;

	printf("Searching in array: ");
	while (i <= end)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
		i++;
	}
	printf("\n");
}

/**
 * binary_search_ex - Executes binary search recursively
 * @array: The array to search for a given value
 * @size: The size of the array to search
 * @start: The value to search for in the array
 * @end: The real index value of the original array
 * @val: The value being searched for
 * Return: Value's first index if present, -1 otherwise
 */
int binary_search_ex(int *array, int size, int start, int end, int val)
{
	int mid_idx = (start + end) / 2;
	int n_start;
	int n_end;
	int n_size;

	n_size = start - end + 1;
	print_array(array, start, end);
	if (val == array[mid_idx])
		return (mid_idx);
	if (n_size == 1 && val != array[mid_idx])
		return (-1);
	if (val > array[mid_idx])
	{
		n_start = mid_idx + 1;
		n_end = end;
		return (binary_search_ex(array, size, n_start, n_end, val));
	}
	n_start = start;
	n_end = mid_idx - 1;
	return (binary_search_ex(array, size, n_start, n_end, val));
}

/**
 * binary_search - A function to implement binary search
 * @array: The array to search for a given value
 * @size: The size of the array to search
 * @value: The value to search for in the array
 * Return: Value's first index if present, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int size_cast = (int)size;

	if (!array)
		return (-1);
	return (binary_search_ex(array, size_cast, 0, size_cast - 1, value));
}
