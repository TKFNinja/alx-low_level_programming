#include "main.h"
/**
* _isdigit() checks for a digit between 0 and 9 inclusive
* Return: 1 on success
* 0 otherwise
*/

int _isdigit(int c)
{
	int dig = 0;
	
	while (dig <= 9)
	{
		if (c == dig)
		{
			return (1);
		}
		else
			dig++;
	}
	return (0);
}

