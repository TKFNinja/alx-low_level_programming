#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be searched
 * @accept: bytes to be located in s
 * Return: a pointer to the first occurence of accept or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j = 0;
	char *locate;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				locate = &s[i];
				return (locate);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
