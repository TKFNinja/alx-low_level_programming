#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: he string whose length is sort for
 * Return: the string length
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s[length] != '\0')
	{
		length++;
	}
	return (length - 1)
}
