#include "main.h"

/**
 * swap_int - Function to swap two integers
 * @a: Pointer to first int
 * @b: Pointer to second int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * reverse_array - Function to reverse an array of ints
 * @a: Pointer to integer array
 * @n: Number of elements in array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int *first_int;
	int *second_int;
	int start_index;
	int end_index;

	end_index = n - 1;
	start_index = 0;
	while (start_index < n / 2)
	{
		first_int = &(a[start_index]);
		second_int = &(a[end_index]);
		swap_int(first_int, second_int);
		start_index++;
		end_index--;
	}
}
