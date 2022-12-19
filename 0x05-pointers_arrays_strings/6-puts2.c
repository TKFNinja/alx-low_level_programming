#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the
 * first character, followed by a new line.
 * @str: the string concerned
 * Return: void
*/

void puts2(char *str)
{
	int length = 0;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	while (i < length)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
