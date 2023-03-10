#include <stdio.h>
#include <stdlib.h>

/**
 * get_change - Calculates change
 * @val: Change amount in cents
 * @sum_change: Minimum number of coins
 * Return: 0 if valid num of args, 1 otherwise
 */

int get_change(int val, int sum_change)
{
	int i;
	int coin_vals[5] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (val / coin_vals[i])
		{
			sum_change += val / coin_vals[i];
			if (val % coin_vals[i])
				return (get_change(val % coin_vals[i], sum_change));
			return (sum_change);
		}
	}
	return (0);
}

/**
 * main - Calculates change
 * @argc: Argument count
 * @argv: Arguments vector
 * Return: 0 if valid num of args, 1 otherwise
 */

int main(int argc, char *argv[])
{
	char *ERR_MSG = "Error";

	if (argc != 2)
	{
		printf("%s\n", ERR_MSG);
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (1);
	}
	printf("%d\n", get_change(atoi(argv[1]), 0));
	return (0);
}
