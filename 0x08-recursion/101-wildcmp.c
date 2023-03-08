#include "main.h"

/**
 * wildcomp - Compare strings
 * @s1: first string
 * @s2: second string
 * @n: first counter
 * @m: second counter
 * @starred: Know if a star has been encountered
 * Return: 1 if same, 0 otherwise
 */
int wildcomp(char *s1, char *s2, int n, int m,  int starred)
{
	if (s2[0] == '*' && s2[1] == '\0')
		return (1);
	if (s2[n] == '\0')
		return (1);
	if (s2[n] == '*')
	{
		if (starred < 1)
		{
			starred++;
			return (wildcomp(s1, s2, n + 1, m + 1, starred));
		}
		else
		{
			return (1);
		}
	}
	if (s1[n] == s2[m])
		return (wildcomp(s1, s2, n + 1, m + 1, starred));
	if (s1[n] != s2[m])
		return (0);
	return (0);
}

/**
 * wildcmp - Compare strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if same, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcomp(s1, s2, 0, 0, 0));
}
