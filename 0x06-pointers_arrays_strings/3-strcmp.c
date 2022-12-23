#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the sample string
 * @s2: the test string
 * Return: an integer
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}
	while (s1[k] != '\0') && (s2[k] != '\0')
	{
		if (s1[k] > s2[k])
		{
			return (15);
		}
		else
		{
			if (s1[k] < s2[k])
			{
				return (-15);
			}
			else
				k++;
		}
	}
	if (j == i) && (k == i)
	{
		return (0);
	}
	else
	{
		if (j > i) && (k == i)
			return (-15);
		
		if (j < i) && (k == j)
			return (15);
	}
}
