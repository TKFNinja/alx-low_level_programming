#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string into rot13.
 * @str: the sample string
 *
 * Return: the encoed string
*/

char *rot13(char *str)
{
	int i, j = 0;
	char a = 'a';
	char b = 'n';
	
	while (str[j] != '\0')
	{
		a = 'a';
		b = 'n';

		while ((a <= 'm') && (b <= 'z'))
		{
			if ((str[j] == a) || (str[j] == a - 32) || (str[i] == b) || (str[i] == b-32))
			{
				str[j] = str[j] + 13;
				str[i] = str[i] - 13;
			}
			a++;
			b++;
		}
		j++;
		i++;
	}
	return (str);
}

int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}
