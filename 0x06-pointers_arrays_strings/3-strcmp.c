#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the sample string
 * @s2: the test string
 * Return: 1 if s1 > s2, -1 if s1 < s2 and 0 if they are equal
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	while ((s1[k] != '\0') && (s2[k] != '\0'))
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
		else
			k++;
	}

	if ((k == i) && (k != j))
	{
		return (-s2[k]);
	}
	else
	{
		if ((k == j) && (k != i))
		{
			return (s1[k]);
		}
		else
			return (0);
	}
}
