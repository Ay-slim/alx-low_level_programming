#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints arguments
 * @argc: Argument count
 * @argv: Arguments vector
 * Return: 0 if valid num of args, 1 otherwise
 */

int main(int argc, char *argv[])
{
	char *ERR_MSG = "Error";

	if (argc != 3)
	{
		printf("%s\n", ERR_MSG);
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
