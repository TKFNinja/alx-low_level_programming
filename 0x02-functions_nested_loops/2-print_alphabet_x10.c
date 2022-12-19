#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case followed by a new line
 * @void: contains no arguements
 * 
 * Return: the alphabet repeated 10 times on new lines each time
*/

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

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
*/ 

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
