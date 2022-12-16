#include "main.h"
/**
 * print_line - draws a straight line
 * @n: The number of \ to print
 *
 * Return: a diagonal line
*/

void print_diagonal(int n)
{
	int i = 0;
	int k = 0;

	if (n > 0)
	{
		_putchar('\\');
		_putchar('\n');

		while (i < n - 1)
		{
			k = 0;

			while (k <= i)
			{
				_putchar(' ');
				k++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
