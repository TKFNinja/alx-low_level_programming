#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string.
 * @str: the sample string
 *
 * Return: the capitalised string
*/

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char test = 'a';
	char words[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (str[j] != '\0')
	{
		for (i = 0 ; i < 13 ; i++)
		{
			if (str[j] == words[i])
			{
				for (test = 'a' ; test <= 'z' ; test++)
				{
					if (str[j + 1] == test)
					{
						str[j + 1] = str[j + 1] - 32;
					}
				}
			}
		}
		j++;
	}

	for (test = 'a' ; test <= 'z' ; test++)
	{
		if (str[0] == test)			
		{
			str[0] = str[0] - 32;
		}
	}
	return (str);
}

int main(void)
{
    char str[] = "hello world! expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
