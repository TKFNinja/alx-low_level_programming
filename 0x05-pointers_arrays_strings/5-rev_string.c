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
	char c;
	
	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0 ; i <= length - 1 ; i++)
	{
		c = s[length - 1 - i];
		s[length - 1 - i] = s[i];
		s[i] = c;
	}
}
