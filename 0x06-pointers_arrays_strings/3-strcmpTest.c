#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: the sample string
 * @s2: the test string
 * 
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
			while (s1[k] != '\0')
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

			if (k == i)
				return (0);
		}
	}
}

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
