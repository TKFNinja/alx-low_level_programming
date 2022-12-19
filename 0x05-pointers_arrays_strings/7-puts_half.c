nclude "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string whose half is to be printed
 * Return: void
*/

void puts_half(char *str)
{
	int length = 0;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = (length / 2) - 1 ; i <= length - 1 ; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (i = (length + 1) / 2 ; i <= length - 1 ; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
