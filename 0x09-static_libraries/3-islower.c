#include "main.h"
#include <ctype.h>

/**
 * _islower - Function to check if a character is lowercase
 * @c: Character to check
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	int retvalue;

	retvalue = islower(c);
	if (retvalue != 0)
	{
		return (1);
	}
	return (retvalue);
}
