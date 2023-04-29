#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Function to check if a passed value is an alphabet
 * @c: Character to check
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	int retvalue;

	retvalue = isalpha(c);
	if (retvalue != 0)
	{
		return (1);
	}
	return (retvalue);
}
