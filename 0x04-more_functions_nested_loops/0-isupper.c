#include "main.h"
#include <ctype.h>

/**
 * _isupper - Function to check if a character is uppercase
 * @c: Character to check
 * Return: 1 if uppercase and 0 if not uppercase
 */

int _isupper(int c)
{
	int retvalue;

	retvalue = isupper(c);
	if (retvalue != 0)
	{
		return (1);
	}
	return (retvalue);
}
