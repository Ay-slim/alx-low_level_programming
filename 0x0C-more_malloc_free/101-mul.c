#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Main function
 * @argc: Args counter
 * @argv: Args array
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int i;
	int j;
	int len;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		len = strlen(argv[i]);
		for (j = 0; j < len; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
