#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all program args
 * @ac: Arguments count
 * @av: Arguments
 * Return: Concatenated string
*/

char *argstostr(int ac, char **av)
{
	char *concat_str;
	int i;
	int j;
	unsigned int k;
	int total_len = 0;
	int concat_index = 0;

	if (!ac || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]);
	}
	total_len += ac + 1;
	concat_str = malloc(total_len * sizeof(char));
	if (!concat_str)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; k < strlen(av[j]); k++)
		{
			concat_str[concat_index] = av[j][k];
			concat_index++;
		}
		if (j < ac)
		{
			concat_str[concat_index] = '\n';
			concat_index++;
		}
	}
	return (concat_str);
}
