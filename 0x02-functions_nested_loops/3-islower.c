#include "main.h"
/**
 * main - check the code.
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _islower(char c)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{	
		if (c == alphabet)
		{
			_putchar(c);
			return (1);
		}
		else
			alphabet++;
	}
	return (0);
}

int main(void)
{
	_islower('c');
	return (0);
}
