#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: the sample string
 *
 * Return: the string in uppercase
*/

char *string_toupper(char *str)
{
	int i = 0;
	char test = 'a';

	while (str[i] != '\0')
	{
		for (test = 'a' ; test <= 'z' ; test++)
		{
			if (str[i] == test)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
