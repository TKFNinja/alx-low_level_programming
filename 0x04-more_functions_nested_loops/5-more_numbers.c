#include "main.h"
/**
 * more_numbers - prints 10 times the numbers 0 to 14, then a new line
 * @void: takes no arguments
 *
 * Return: void
*/

void more_numbers(void)
{
	int number = 0;
	int i = 10;

	while (i--)
	{
		while (number <= 14)
		{
			if (number >= 10)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
			number++;
		}
		_putchar('\n');
	}
}
