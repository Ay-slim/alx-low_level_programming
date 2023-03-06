#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_chessboard - Print a chessboard
 * @a: 2d chess array
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
