#include "main.h"
/**
 * main - Entry point
 * @void: takes no arguements
 *
 * Return: the letters of the alphabet followed by a new line
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
