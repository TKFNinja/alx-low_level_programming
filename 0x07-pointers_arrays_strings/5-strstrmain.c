#include <stdio.h>
#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: string to be searched
 * @needle: bytes to be located in haystack
 * Return: a pointer to the beginning of haystack 
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, k = 0;
	char *locate;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			k = i;
			while (needle[j] != '\0')
			{
				if (haystack[k] == needle[j])
				{
					j++;
					k++;
				}
				else
				{
					j = 0;
					k = i;
					break;
				} 
			}
			if (needle[j] == '\0')
			{
				locate = &haystack[i];
				return (locate);
			}
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

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
