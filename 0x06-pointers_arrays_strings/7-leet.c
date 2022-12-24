#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @str: the sample string
 *
 * Return: the encoed string
*/

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char test1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char test2[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[j] != '\0')
	{
		for (i = 0 ; i < 10 ; i++)
		{
			if (str[j] == test1[i])
			{
				str[j] = test2[i];
			}
		}
		j++;
	}
	return (str);
}
