#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number whose last digit is required
 * Return: the last digit
*/

int print_last_digit(int n)
{
	int m;

	if (n >= 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		m = -n;
		_putchar((m % 10) + '0');
		return (m % 10);
	}
}
