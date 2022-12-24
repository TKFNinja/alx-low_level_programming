#include "main.h"
#include <limits.h>
/**
 * print_number - prints an integer
 * @n: the integer to print
 * Return: void
*/

void print_number(int n)
{
	if (n < 0 || n == INT_MIN)
	{
		_putchar('-');
        	n = -n;
    	}

	if (n / 10)
        	print_number(n / 10);

	_putchar(n % 10 + '0');
}
