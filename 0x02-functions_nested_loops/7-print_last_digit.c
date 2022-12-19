#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number whose last digit is required
 * Return: the last digit
*/

int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		if (n == INT_MIN)
		{
			_putchar('8');
			return 8;
		}
		else
		{
			_putchar((-n % 10) + '0');
			return (-n % 10);
		}
	}
}
