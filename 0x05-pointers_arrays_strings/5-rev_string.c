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
	char c[] = s;

	while (s[length] != '\0')
	{
		length++;
	}

	j = length - 1;

	for (i = 0 ; i <= length ; i++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		j--;
	}
}
