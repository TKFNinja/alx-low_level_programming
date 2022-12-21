#include "main.h"
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
	int pow = 1;
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
				result = result + (j * pow);
				pow = pow * 10;
			}

			j++;
		}
	}

	j = 0;
	i = 0;
	pow = pow / 10;

	while (s[i] != (result / pow))
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
