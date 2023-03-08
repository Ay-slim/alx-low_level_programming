#include "main.h"
#include <stdio.h>

/**
 * is_prime - Check if a number is prime
 * @n: Number to check
 * @div: Divisor
 * Return: 1 if prime. 0 otherwise
 */
int is_prime(int n, int div)
{
	int incr;

	if (n == 0 || n == 1 || n == -1)
		return (0);
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	if (n < 0)
	{
		incr = --div;
	}
	else
	{
		incr = ++div;
	}
	return (is_prime(n, incr));
}

/**
 * is_prime_number - Check if a number is prime
 * @n: Number to check
 * Return: 1 if prime. 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
