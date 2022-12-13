#include "main.h"
/**
 * main - check the code.
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
