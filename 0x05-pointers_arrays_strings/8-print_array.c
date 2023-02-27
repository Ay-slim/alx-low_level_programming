#include "main.h"
#include <stdio.h>

/**
 * print_array - Function to print n elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements to print
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i <= n - 1)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
