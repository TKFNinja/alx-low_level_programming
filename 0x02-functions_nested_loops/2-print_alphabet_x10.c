#include "main.h"
/**
 * main - check the code.
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet_x10(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
