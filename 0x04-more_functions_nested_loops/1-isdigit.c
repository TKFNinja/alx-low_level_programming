#include "main.h"
/**
 * _isdigit() checks for a digit between 0 and 9 inclusive
 * Return: 1 on success
 * 0 otherwise
*/

int _isdigit(int c)
{
	int digit = 0;
	
	while (digit <= 9)
	{
		if (c == digit)
		{
			return (1);
		}
		else
			digit++;
	}
	return (0);
}

