#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @s: string to be searched
 * @c: char to be located in s
 * Return: a pointer to the first occurence of c or NULL
*/

char *_strchr(char *s, char c)
{
	int i = 0;
	char *locate;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			locate = &s[i];
			return (locate);
		}
		i++;
	}
	return (NULL);
}
