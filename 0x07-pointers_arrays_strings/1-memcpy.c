#include "main.h"
/**
 * _memcpy - copies memory area.
 * @n: number of bytes to copy
 * @src: source pointer
 * @dest: destination pointer
 * Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
