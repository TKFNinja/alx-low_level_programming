#include "main.h"
/**
 * more_numbers - prints 10 times the numbers 0 to 14, followed by a new line
 * @01234567891011121314: The numbers to print
 * 
 * Return: void
*/

void more_numbers(void)
{
	int number = 0;

	while (number <= 14)
	{
		if(number <= 9)
		{
			_putchar(number + '0');
		}
		else
		{
			_putchar('1' + (number % 10));
		}
		number++;
	}
	_putchat('\n');
}
