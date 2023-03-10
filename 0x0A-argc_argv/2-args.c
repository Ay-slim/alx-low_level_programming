#include <stdio.h>

/**
 * main - Prints arguments
 * @argc: Argument count
 * @argv: Arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	argc = argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
