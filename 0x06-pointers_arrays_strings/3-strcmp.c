#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the sample string
 * @src: the test string
 * 
 * Return: a pointer to resulting string
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char sum1 = 0;
	char sum2 = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	if (i < j)
	{
		return (-15);
	}
	else
	{
		if (i > j)
		{
			return (15);
		}
		else
		{
			while (k < i)
			{
				sum1 = sum1 + s1[k];
				sum2 = sum2 + s2[k];
				k++
			}
			k = 0;

			while (s1[k] == s2[k])
			{
				k++;
			}
			if (k == i)
			{
				return (0);
			}
			else
			{
				if (sum1 > sum2)
				{
					return (15);
				}
				else
					return (-15);
			}
		}
	}
}
