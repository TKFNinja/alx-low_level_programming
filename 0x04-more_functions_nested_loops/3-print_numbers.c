#include "main.h"
/**
* print_numbers - prints the numbers, from 0 to 9, followed by a new line
* Return: integers
*/

void print_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
