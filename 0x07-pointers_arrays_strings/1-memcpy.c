#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @n: number of bytes to fill
 * @s: pointer to a memory portion
 * @b: char to fill in the memory area
 * Return: a pointer to s
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
