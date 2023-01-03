#include "main.h"
#include <stdio.h>
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

	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] == accept[i])
			{
				locate = &s[j];
				return (locate);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
