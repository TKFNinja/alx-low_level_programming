#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: the pointer to the concerned address
 * @n: number of bytes to print
 * @b: the constant byte used in filling
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
