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
			return (1);
		}
		else
			alphabet++;
	}
	return (0);
}

int main(void)
{
	int r;
	
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
