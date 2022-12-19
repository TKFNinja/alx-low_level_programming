#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: void
*/

void rev_string(char *s)
{
	int i = 0;
	int length = 0;
	char c[0] = "";

	while (s[length] != '\0')
	{
		length++;
	}

	c[length] = "";

	for (i = length - 1 ; i >= 0 ; i--)
	{
		c[length - 1 - i] = s[i];
	}
	s = c;
}
