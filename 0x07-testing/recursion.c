#include <stdio.h>

int find_base(int n)
{
	int k = 1;
	while (n/k)
	{
		k *= 10;
	}
	return k / 10;
}

int dag_sum(int n, int c, int sum)
{
	if (c == 0)
		c = find_base(n);
	if (c == 1)
	{
		sum += n;
		return sum;
	}
	sum += n / c;
	return dag_sum(n - (sum * c), c / 10, sum);
}


int dig_sum(int n)
{
	if (!(n / 10))
	{
		return n;
	}
	return (n % 10) + dig_sum(n / 10);
}

int main(void)
{
	printf("Answer dig: %d\n", dig_sum(909));
	printf("Answer dag: %d\n", dig_sum(909));
	printf("Answer dig: %d\n", dig_sum(583));
        printf("Answer dag: %d\n", dig_sum(583));
}
