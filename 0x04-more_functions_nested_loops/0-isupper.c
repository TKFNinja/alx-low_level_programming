#include "main.h"
/**
 * main - check the code
 * Return: 0
*/
int _isupper(int c)
{
	int alphabet = 'A';
	
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
