#include "main.h"

/**
 * swap_int - Function to swap two integers
 * @a: Pointer to first integer
 * @b: Pointer to second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
