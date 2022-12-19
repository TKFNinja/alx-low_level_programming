#include "main.h"
/**
 * _islower - checks for lowercase alphabetic character.
 *@c: the letter to be checked
 *
 * Return: 1 if c is a letter and 0 otherwise
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

/**
 * _isalpha - checks for alphabetic character. 
*/ 

int _isalpha(int c)
{
	char alphabet = 'A';

	while (alphabet <= 'Z')
	{
		if (c == alphabet)
		{
			return (1);
		}
		else
			alphabet++;
	}
	return (_islower(c));
}
