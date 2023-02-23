#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Function to check if a passed value is a digit
 * @c: Value to check
 * Return: 1 if digit. 0 if not digit.
 */

int _isdigit(int c)
{
	int retvalue;

	retvalue = isdigit(c);
	if (retvalue != 0)
	{
		return (1);
	}
	return (retvalue);
}
