#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == 'e')
		{
			continue;
		} else if (alph == 'q')
		{
			continue;
		} else
		{
			putchar(alph);
		}
	}
	putchar('\n');
	return (0);
}
