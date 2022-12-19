#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: the string to be printed to stdout
 *Return: the string
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
}
