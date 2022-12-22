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

	while ((i < n) && (src[i] != '\0'))
	{
		i++;
	}

	while (dest[j] != '\0')
	{
		src[i] = dest[j];
		j++;
		i++;
	}

	src[i] = '\0';
	
	while (src[i] != '\0')
	{
		dest[i] = src[i];
	}
	return (dest);
}
