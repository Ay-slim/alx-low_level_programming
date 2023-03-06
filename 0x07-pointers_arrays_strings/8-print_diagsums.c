#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Array
 * @size: Matrix size
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 1;
	int sum_lr = 0;
	int sum_rl = 0;

	while (i < size)
	{
		sum_lr += *(a + (size * i + i));
		sum_rl += *(a + (size * j - j));
		i++;
		j++;
	}
	printf("%d, %d\n", sum_lr, sum_rl);
}
