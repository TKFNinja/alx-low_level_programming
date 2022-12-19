#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 *@c: the letter to be checked
 *
 * Return: 1 if c is a letter and 0 otherwise
*/

int _isalpha(int c)
{
	char alphabet = 'a';

	while (alphabet <= 'Z')
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
