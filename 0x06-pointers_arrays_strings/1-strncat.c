#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src: the string to be used in appending
 * @dest: the string to be appended
 * @n: The number of bytes of src to be icluded in final string
 * Return: a pointer to resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		else
			i++;
	}

	dest[j] = '\0';

	return (dest);
}
