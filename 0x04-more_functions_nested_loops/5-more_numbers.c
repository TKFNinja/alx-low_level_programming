#include "main.h"
/**
 * more_numbers - prints 10 times the numbers 0 to 14, then a new line
 *
 * Return: void
*/

void more_numbers(void)
{
	int number = 0;
	int i = 0;

	while (i <= 9)
	{
		while (number <= 14)
		{
			if(number >= 10)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
			number++;
			_putchar('\n');
		}
		i++;
	}
}
