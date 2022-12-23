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

	if (i > j)
	{
		return (1);
	}
	else
	{
		if (i < j)
		{
			return (-1);
		}
		else
		{
			while (k < i)
			{
				if ((s1[k] / 10 + '0') > (s2[k] / 10 + '0'))
				{
					return (1);
				}
				else
				{
					if ((s1[k] / 10 + '0') < (s2[k] / 10 + '0'))
					{
						return (-1);
					}
					else
						k++;
				}
			}
			return (0);
		}
	}
}
