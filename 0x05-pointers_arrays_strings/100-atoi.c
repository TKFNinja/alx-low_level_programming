#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted
 *
 * Return: integer
*/

int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int length = 0;
	int negatives = 0;
	int result = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1 ; i >= 0 ; i--)
	{
		while (j <= 9)
		{
			if (s[i] == j)
			{
				result = result + (j * pow(10, k));
				k++;
			}

			j++;
		}
	}

	j = 0;
	i = 0;
	k--;

	while (s[i] != (result / (10 ^ k)))
	{
		if (s[i] == '-')
		{
			negatives++;
		}

		i++;
	}
	if ((negatives % 2) == 0)
	{
		return (result);
	}
	else
	{
		return (-result);
	}

	return (result);
}
