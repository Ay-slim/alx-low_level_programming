#include <ctype.h>
#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _atoi - Function to return integer within a string
 * @s: Source string
 * Return: The integer within the string
 */

int _atoi(char *s)
{
	float place_value;
	float sum;
	float multiplier;
	int length;
	int i;
	int sign;

	place_value = 1;
	sum = 0;
	sign = 1;
	length = strlen(s);
	multiplier = 0.1;
	while (i < length)
	{
		if (s[i] == '-' && isdigit(s[i + 1]))
		{
			sign = -1;
		}
		if (isdigit(s[i]))
		{
			sum += ((s[i] - '0') * place_value);
			place_value /= 10;
			multiplier *= 10;
			if (!isdigit(s[i + 1]))
			{
				break;
			}
		}
		i++;
	}
	return ((int)(sum * sign * multiplier));
}
