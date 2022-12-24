#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to print
 * Return: void
*/

void print_number(int n)
{
	if (n < 10 && n > -10)
	{
		if (n < 0)
		{
			_putchar('-');
		}
		_putchar((n % 10) + '0');
	}
	else
	{
		if (n >= 10 || n <= -10)
		{
			if(n < 0)
			{
				_putchar('-');
			}
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	}
}
