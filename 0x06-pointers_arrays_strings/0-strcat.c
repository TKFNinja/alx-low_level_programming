#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: the string to be used in appending
 * @dest: the string to be appended
 * Return: a pointer to resulting string
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	while (src[i] != '\0')
	{
		dest[length] = src[i];
		length++;
		i++;
	}

	dest[length] = '\0';

	return (dest);
}
