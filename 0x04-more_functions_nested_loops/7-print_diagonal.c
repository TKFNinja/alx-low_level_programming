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

	if (n > 0)
	{
		while (n--)
		{
			_putchar('\\');
			_putchar('\n');

			i = 1;

			while (i <= n)
			{
				_putchar(' ');
				i++;
			}
		}
	}
}
