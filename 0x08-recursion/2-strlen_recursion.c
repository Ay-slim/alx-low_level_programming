#include "main.h"

/**
 * rec_length - Recursively gets string length
 * @s: String
 * @sum: sum
 * Return: Length of the string.
 */
int rec_length(char *s, int sum)
{
	if (*s)
	{
		return (rec_length(s + 1, sum + 1));
	}
	return (sum);
}

/**
 * _strlen_recursion - Gets the length of a string
 * @s: string to print
 *
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
	return (rec_length(s, 0));
}
