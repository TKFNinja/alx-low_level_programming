#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase and 0 otherwise
*/

int _isupper(int c)
{
	int alpha = 'A';

	while (alpha <= 'Z')
	{
		if (c == alpha)
		{
			return (1);
		}
		else
			alpha++;
	}
	return (0);
}
