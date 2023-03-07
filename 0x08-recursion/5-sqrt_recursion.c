#include "main.h"

/**
 * get_sqrt - Calculate the square root of a number
 * @start: Marker to track sqrt
 * @n: Number to sqrt
 *
 * Return: Root
 */
int get_sqrt(int start, int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (n);
	if (start == 1)
		return (-1);
	if (start == 0)
		start = n / 2;
	if (start * start == n)
		return (start);
	return (get_sqrt(start - 1, n));
}

/**
 * _sqrt_recursion - Calculate the square root of a number
 * @n: Number to sqrt
 *
 * Return: Root
 */
int _sqrt_recursion(int n)
{
	return (get_sqrt(0, n));
}
