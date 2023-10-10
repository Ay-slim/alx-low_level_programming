#include "search_algos.h"

/**
 * print_st - Print an array of numbers
 * @i: Index to print
 * @v: Value to print
 * @found: Flag to show if value has been found
 * Return: Nothing
 */
void print_st(int i, int v, int found)
{
	if (found)
	{
		printf("Value found between indexes [%d] and [%d]\n", i, v);
	}
	else
	{
		printf("Value checked array[%d] = [%d]\n", i, v);
	}
}

/**
 * c_l_s - Custom linear search
 * @start: Index to start checking from
 * @end: Index to stop searching at
 * @array: Array to search through
 * @value: Value to search for
 * Return: Index value or -1
 */
int c_l_s(int start, int end, int *array, int value)
{
	int i = 0;

	for (i = start; i <= end; i++)
	{
		print_st(i, value, 0);
		if (value == array[i])
		{
			print_st(start, end, 1);
			return (i);
		}
	}
	return (-1);
}

/**
 * j_search_ex - Jump search algorithm implementation
 * @arr: Array to search through
 * @size: Size of the array (integer)
 * @val: The value to search for
 * @start: Batch beginning
 * @end: Batch end
 * @bt: Batch size
 * Return: Value index if present, -1 otherwise
 */
int j_search_ex(int *arr, int size, int val, int start, int end, int bt)
{
	int mid = (start + end) / 2;
	int n_start = end + 1;
	int n_end = n_start + bt - 1;
	int l_search;

	if (n_end > size - 1)
		n_end = size - 1;
	if (val == arr[mid])
	{
		print_st(mid, val, 0);
		print_st(start, end, 1);
		return (mid);
	}
	if (val > arr[mid])
	{
		l_search = c_l_s(mid + 1, end, arr, val);
		if (l_search != -1 || end == size - 1)
			return (l_search);
	}
	if (val < arr[mid])
	{
		return (c_l_s(start, mid - 1, arr, val));
	}
	return (j_search_ex(arr, size, val, n_start, n_end, bt));
}

/**
 * jump_search - Jump search algorithm implementation
 * @array: Array to search through
 * @size: Size of the array
 * @value: The value to search for
 * Return: Value index if present, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int batch;
	int start = 0;
	int end;
	int int_size = (int)size;

	batch = (int)round(sqrt(int_size));
	end = batch + start - 1;
	return (j_search_ex(array, int_size, value, start, end, batch));
}
