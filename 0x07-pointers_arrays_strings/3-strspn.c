#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: prefix substring to be located in s
 * Return: number of bytes in s consisting only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] != ',' && s[i] != ' ')
		{
			j = 0;
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
					num++;
				j++;
			}
			i++;
		}
		else
			return (num);
	}
	return (num);
}
