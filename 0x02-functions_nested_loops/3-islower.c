#include "main.h"
/**
 * _islower -  checks for lowercase character
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase and 0 otherwise
*/

int _islower(int c)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{	
		if (c == alphabet)
		{
			return (1);
		}
		else
			alphabet++;
	}
	return (0);
}
