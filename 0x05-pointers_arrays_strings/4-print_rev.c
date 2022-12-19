#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string to be printed
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	for (i = _strlen(s) - 1 ; i >= 0 ; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
