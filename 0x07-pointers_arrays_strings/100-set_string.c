#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * set_string - Set the value of a pointer to a char
 * @s: Pointer to pointer
 * @to: Pointer to set
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
