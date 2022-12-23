#include "main.h"
/**
 * _strncpy - concatenates two strings
 * @dest: the string to be used in appending
 * @src: the string to be appended
 * @n: The number of bytes of dest to be icluded in final string
 * Return: a pointer to resulting string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int length = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	while (dest[length] != '\0')
	{
		length++;
	}
	j = 0;

	if (i > n)
	{
		while (j < n)
		{
			dest[j] = src[j];
			j++;
		}
		return (dest);
	}
	else
	{
		for (j = 0 ; j < i ; j++)
		{
			dest[j] = src[j];
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
		return (dest);
	}
}
