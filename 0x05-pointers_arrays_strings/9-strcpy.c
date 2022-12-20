#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including the terminating 
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: reference pointer
 * @src: reference pointer
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0 ; i <= length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
