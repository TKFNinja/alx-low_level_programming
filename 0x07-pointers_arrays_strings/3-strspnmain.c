#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: prefix substring to be located in s
 * Return: number of bytes in s consisting only of 
 * bytes from accept
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
				{
					num++;
				}
				j++;
			}
			i++;
		}
		else
			return (num);
	}
	return (num);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
