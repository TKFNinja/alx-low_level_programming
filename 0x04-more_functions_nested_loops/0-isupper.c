#include "main.h"
/**
 * main - check the code
 * Return: 0
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
