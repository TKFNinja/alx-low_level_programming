#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: void
*/

void rev_string(char *s)
{
	int i, j = 0;
	int length = 0;
	char c;

	while (s[length] != '\0')
	{
		length++;
	}

	if ((length % 2) == 0)
	{
		j = length - 1;

		for (i = 0 ; i < length / 2 ; i++)
		{
			c = s[i];
			s[i] = s[j];
			s[j] = c;
			j--;
		}
	}
	else
	{
		j = length - 1;

		for (i = 0 ; i < (length - 1) / 2 ; i++)
		{
			c = s[i];
			s[i] = s[j];
			s[j] = c;
			j--;
		}
	}
}
