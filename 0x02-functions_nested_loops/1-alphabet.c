#include "main.h"
/**
 * main - Entry point
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
